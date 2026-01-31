#include <stdio.h>
#define SIZE 5

void draw_diamond(int row,int col) {
    int i,j;
    int spaces; 
    int stars;  
	for(int o=0;o<row;o++){
		for (i = 1; i <= SIZE; i++) {
			spaces = SIZE - i;
			stars = 2 * i - 1;
			
			for(int o=0;o<col;o++){
				for (j = 0; j < spaces; j++) {
					printf(" ");
				}
				for (j = 0; j < stars; j++) {
					printf("*");
				}
				for (j = 0; j < spaces; j++) {
					printf(" ");
				}
			}
			
			printf("\n");
		}
		for (i = SIZE - 1; i >= 1; i--) {
			spaces = SIZE - i;
			stars = 2 * i - 1;
			for(int o=0;o<col;o++){
				for (j = 0; j < spaces; j++) {
					printf(" ");
				}
				for (j = 0; j < stars; j++) {
					printf("*");
				}
				for (j = 0; j < spaces; j++) {
					printf(" ");
				}
			}
			
			
			printf("\n");
		}
	}
    
}

int main() {
	int row,col;
	scanf("%d %d",&row,&col);
    draw_diamond(row,col);
    return 0;
}
