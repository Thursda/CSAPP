#include <stdio.h>

#define LONGEST_LINE_LEN 1000 

int getLine(char s[], int lim);
void copyLine(char to[], char from[]);

int main(int argc, char *args[]){
	int len;
	int maxlen; //已经读入的行的最长长度
	char line[LONGEST_LINE_LEN];
	char max[LONGEST_LINE_LEN];

	while((len = getLine(line, LONGEST_LINE_LEN)) > 0){
		if(len > maxlen){
			copyLine(max, line);
			maxlen = len;	
		}
	}
	if(maxlen > 0)
		printf("%s\n", max);

	return 0;
}

int getLine(char s[], int lim){
	int i, c;

	for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'	; ++i) {
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i - 1;
}

void copyLine(char to[], char from[]){
	int i = 0;
	while((to[i] = from[i]) != '\0') i++;
}
