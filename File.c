#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fPointer;
	/*
	fPointer = fopen("collins.txt","w");
	fprintf(fPointer,"I love MySelf\n");
	*/
	/*fPointer = fopen("collins.txt","r");
	char singleLine[150];
	while(!feof(fPointer)){
		fgets(singleLine, 150, fPointer);
		printf(singleLine);
	}*/
	fclose(fPointer);
	return 0;
}
