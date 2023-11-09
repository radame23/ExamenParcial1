#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLUMNS 3100
#define ROWS_TO_PROCESS 51
#define BUFFER_SIZE 1024*1024 

int main() 
{
    const char *csv_filename = "emails.csv";
    FILE *csv_file = fopen(csv_filename, "r");
    
    if (!csv_file) 
    {
        perror("error al abrir");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    int words[MAX_COLUMNS] = {0};
    char *word_names[MAX_COLUMNS];
    int start = 281; 
    int email_column_index = -1;

    if (fgets(buffer, sizeof(buffer), csv_file) != NULL)
    {
        char *token = strtok(buffer, ",");
        int column_index = 0;
        
        while (token && column_index < MAX_COLUMNS) 
        {
            if (strcmp(token, "Email No.") == 0) 
            {
                email_column_index = column_index;
            } else 
            {
                word_names[column_index] = strdup(token);
            }
            token = strtok(NULL, ",");
            column_index++;
        }
    } 
    else
    {
        fclose(csv_file);
        return 1;
    }

    int i;
    for (i = 0; i < start; ++i) 
    {
        if (fgets(buffer, sizeof(buffer), csv_file) == NULL) 
        {
            fclose(csv_file);
            return 1;
        }
    }

    for (i = 0; i < ROWS_TO_PROCESS; ++i) 
    {
        if (fgets(buffer, sizeof(buffer), csv_file) == NULL) 
        {
            break;  
        }
        
        char *token = strtok(buffer, ",");
        int column_index = 0;
        
        while (token && column_index < MAX_COLUMNS) 
        {
            if (column_index != email_column_index) 
            {
                long val = strtol(token, NULL, 10);
                if (val != 0 || (val == 0 && token[0] == '0')) 
                { 
                    words[column_index] += val;
                }
            }
            
            token = strtok(NULL, ",");
            column_index++;
        }
    }

    fclose(csv_file);

    FILE *output_file = fopen("181281.txt", "w");
    if (!output_file) 
    {
        perror("error al abrir");
        return 1;
    }

    for (i = 0; i < MAX_COLUMNS; i++) 
    {
        if (i != email_column_index && word_names[i] != NULL) 
        {
            fprintf(output_file, "%s, %d\n", word_names[i], words[i]);
            free(word_names[i]); 
        }
    }

    fclose(output_file);
    printf("el archivo es : 181281.txt\n");

    return 0;
}
