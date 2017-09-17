#ifndef LISt_H_
#define LISt_H_
#include <stdbool.h>

#define TSIZE 45

struct film{
	char title[TSIZE];
	int rating;
};
typedef struct film Item;

typedef struct node{
	Item *item;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
	int size;
}List;

void InitializeList(List * plist);

bool ListIsEmpty(const List * plist);

bool ListIsFull(const List * plist);

unsigned int ListItemCount (const List *plist);

bool AddItem(Item *item, List *plist);

bool DeleteItem(Item *item, List *plist);

void Traverse(const List * plist, void(* pfun)(Item *item));

void EmptyTheList(List * List);


#endif