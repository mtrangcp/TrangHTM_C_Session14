#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[50] ;
	
	printf("Nhap chuoi: ");
	gets(text);
	
	int lenght = strlen(text);
	int count = 0;
	
	for ( int i =1; i< lenght; i++){
		if ( isspace(text[i]) != 0 && isspace(text[i-1]) == 0 )  count++;
	}
	
	printf("\n Chuoi co %d tu!", count+1);
	
	return 0;
}
