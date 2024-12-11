#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[50] ;
	
	printf("Nhap chuoi: ");
	gets(text);
	
    int lenght = strlen(text);
    int count = 0;
    
    for ( int i =0; i< lenght; i++){
    	if ( isalpha(text[i]) != 0 ) count++;
	}
	printf("Chuoi co %d ki tu la chu cai!", count);
	
    return 0;
}

