#import "stdio.h"

void quickSort(int *a, int start, int end){
	if(start >= end)return;

	int i = start;
	int key = a[i];
	int j = end;
	while(i < j){
		while(a[j] >= key && i < j) j--;
		a[i] = a[j];

		while(a[i] <= key && i < j) i++;
		a[j] = a[i];
	}
	a[i] = key;
	quickSort(a, start, i - 1);
	quickSort(a, i + 1, end);
}

int main(int argc, char *argv[]){
	int a[] = {1, 3, 2, 5, 10, 4, 16, 8};
	for (int i = 0; i < 8; i++) printf("%d\t",a[i]);
	printf("\n");

	quickSort(a, 0, 7);

	for (int i = 0; i < 8; i++) printf("%d\t",a[i]);
	printf("\n");
	return 0;
}

