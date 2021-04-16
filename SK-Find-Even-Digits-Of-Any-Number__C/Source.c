#include <stdio.h>
#include <conio.h>

int main() {

	int no;

	printf("\n Enter any no :");
	scanf_s("%d", &no);

	while (no != 0) {
		if ((no % 10) % 2 == 0) {
			printf(" %d ", no % 10);
		}
			
		no = no / 10;
	}

	_getch();
	return 0;
}