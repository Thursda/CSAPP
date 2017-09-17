#include <stdio.h>

int hexChar2Num(char c){
	if(c <= 'f' && c >= 'a')
		return c - 'a' + 10;
	if(c <= 'F' && c >= 'A')
		return c - 'A' + 10;
	if(c <= '9' && c >= '0')
		return c - '0';
	return -1;
}

int main(int argc, char const *argv[])
{
	char *str = argv[1];
	if(str == NULL || !(str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))){
		printf("ilegal input, must start with  \" 0x \" \n");
		return 1;
	}
	int i = 2;
	char c = str[i]; 
	int a[4];

	for (int i = 2; i < 10; i += 2)
	{
		int num1 = hexChar2Num(str[i]);
		int num2 = hexChar2Num(str[i+1]);
		if(num1 == -1 || num2 == -1){
			printf("Illegal string \n");
			return 1;
		}
		a[i/2 - 1] = num1*16 +num2;
	}

	printf("%d", a[0]);
	for (int i = 1; i < 4; ++i)
	{
		printf(".%d", a[i]);
	}
	printf("\n");
	return 0;
}
