#include <stdio.h>
#include <string.h>

void string_reverse(char* str){
	int start = 0;
	int end = strlen(str) - 1;
	char tmp;
	
	while(start < end){
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}

int main(){
	char my_str[] = "Hello, World!";
	string_reverse(my_str);
	printf("%s\n", my_str);
	return 0;
}



