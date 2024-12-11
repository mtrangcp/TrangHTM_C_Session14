#include <stdio.h>
#include <string.h>

int main(){
	char text[] = "Hello" ;
	int lenght = strlen(text);
	
	for ( int i =0; i< lenght; i++){
		printf("%c ", text[i]);
	}
	
	return 0;
}
