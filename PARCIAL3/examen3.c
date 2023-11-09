#include <stdio.h>

int main(){
	char caracter; 
	int count;  //char type
	int condition;
	FILE*file=fopen("emails.csv","r");
	
	if (file==NULL)
	{
		perror("error en la apertura del archivo");
		return 1;
	}
	
	count=0;
	condition=0;

	while (feof(file)==0)
	{
	
		caracter=fgetc(file);
		
		if(caracter=='\n')
		{
			count++;	
		}
		if(!condition){
			if(caracter==','){
				condition=1;
			}
		}
		
	}
	printf("%d",count);
	fclose(file);
	printf("\n\nTodo esta viento en popa... \n\n\n");
	return 0;
}
