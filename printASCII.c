#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 128; ++i)
	{
		printf("%d -- %c \t", i, i);
		if(i % 5 == 0)
			printf("\n");

	}
	return 0;
}