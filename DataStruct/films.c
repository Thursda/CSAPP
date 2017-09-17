#include "stdio.h"
#include "stdlib.h"
#include "LinkList.h"

int main(int argc, char const *argv[])
{
	List movies;
	Item temp;
	InitializeList(&movies);
	if(ListIsFull(movies)){
		fprintf(stderr, "No memeory available! Bye!\n");
		exit(1);
	}

	puts("Enter first movie title");
	while(gets(item.title) != NULL && temp.title[0] != '\0'){
		puts("Enter your rating <0-10>");
		scanf("%d", &temp.rating);

		while(getchar() != 'n') continue;
		if(AddItem(temp, &movies) == false){
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}
		put("Enter next movie title (empty line to stop:");
	}

	return 0;
}

