#include <stdio.h>

#ifndef MAX_LEN
#define MAX_LEN 1000
#endif

int printSegmentOfALongLine(int n);

int main(int argc, char * args[]){
	int n = 5;
	printSegmentOfALongLine(n);

	return 0;
}

int printSegmentOfALongLine(int n){
	int i, j, c;
	char s[n];
	char nextS[n];

	i = 0;
	j = 0;
	while((c = getchar()) != EOF && c != '\n'){
		if(i < n){
			s[i] = c; nextS[j] = c;
			i++;j++;

			// if(c == ' ' || c == '\t'){
			// 	j = 0;
			// }
		}else{
			s[i] = '\0';
			printf("%s\n", s);
			// s[i] = ' ';
			// for (i = 0; i < j ; ++i) s[i] = s[j];
			// j = 0;
			i = 0;

			
		}
	}

	s[i] = '\0';
	if( i > 0) printf("%s\n", s);

	return i;
}

