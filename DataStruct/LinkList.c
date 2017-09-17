#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

int main(int argc, char const *argv[])
{
	
	List movies;
	InitializeList(&movies);
	printf("size = %d\n", movies.size);
	Item *item;
	item = (Item *)malloc(sizeof(Item));
	item -> rating  = 10;
	AddItem(item, &movies);

	printf("%d\n", movies.tail->item->rating);

	return 0;
}

void InitializeList(List * plist){
	plist = (List *)malloc(sizeof(List));
	plist -> head = NULL;
	plist -> tail = NULL;
	plist -> size = 0;
}

bool ListIsEmpty(const List * plist){
	return (plist == NULL || plist->size == 0) ? true : false;
}

bool ListIsFull(const List * plist);

unsigned int ListItemCount (const List *plist){
	return plist->size;
}

bool AddItem(Item *item, List *plist){
	if(plist == NULL) return false;

	Node *node = (Node *)malloc(sizeof(Node));
	node->item = item;
	if(plist->size == 0){
		plist->head  = node;
	}
	plist->tail = node;
	plist->size++;
	return true;
}

bool DeleteItem(Item *item, List *plist);

void Traverse(const List * plist, void(* pfun)(Item *item));

void EmptyTheList(List * List);


