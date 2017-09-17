#include <stdio.h>

char *hexStrOfNum(int i){
	if(i < 0 || i > 255)
		return NULL;

	char hexStr[2];
	int first = i / 16;
	hexStr[0] = first > 9 ? ('a' + first - 10) : ('0' + first);
	int second = i % 16;
	hexStr[1] = second > 9 ? ('a' + second - 10) : ('0' + second);
	return hexStr;
}

int main(int argc, char const *argv[])
{
	char *str = argv[1];
	printf("%s\n", str);
	int nums[4];

	int k = 0;
	char c = str[k++];

	char *hexS = hexStrOfNum(255);
	printf("----------%s\n", hexS);

	for (int i = 0; i < 5; ++i) {
		int num = 0;

		for (int j = 0; j < 5; ++j) {
			if(c >= '0' && c <= '9'){
				num = 10 * num + (c - '0');
				c = str[k++];
				printf("%d\n", num);
			} else if(c == '.' && j < 4){
				c = str[k++];
				nums[i] = num;
				break;
			}else if(i == 4 && j == 3){
				printf("%d -- %d, \n", i, j);
				break;
			}else{ 
				printf("=----Illegal format \n");
				// return 1;
			}
		}
	}
	for (int i = 0; i < 4; ++i) {
		printf("%d\n", nums[i]);
		char *hexStr = hexStrOfNum(nums[i]);
		if(hexStr){
			printf("%s\n", hexStr);
		}else{
			printf("------wrong address\n");
		}

	}
	// splite String with seperator 
	// convert strings into int 
	// convert int into hex string

	return 0;
}



char **splitStringWithSeperator(char *s, char c){

}
