#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
	char *s = argv[1];
	char *endptr;
	long num;
	num = strtol(s, &endptr, 10); // Base 10 (decimal) conversion
	if (*endptr == '\0'){  
		for (int i = 0; i< num; i++){
			printf("%s\n", argv[2]);
		}
	}
	else{
		printf("Invalid arguments\n");
	}
}
