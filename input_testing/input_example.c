#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10

char* get_str_input(){
	char input_var[MAX];	
	scanf("%s", input_var);
	int i;
	for(i=0; i<MAX ;i++){
		if(strcmp(&input_var[i], "\0") == 0){
			break;
		}
	}
	char *ret=malloc(i);
	for(int j=0;j<i;j++){
		ret[j]=input_var[j];
	}

	return ret;
}

