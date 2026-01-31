#include <stdio.h>

int main() {
	int i,j;
	
	while (scanf("%d %d", &i,&j) == 2) {
		int start = (i<j) ? i:j;
		int end = (i>j) ? i:j;
		int max = 0;
		
		for (int k = start; k <= end; k++) {
			long long current_n = k; 
			int count = 1; 
			while (current_n != 1) {
				if (current_n % 2 != 0) {
					current_n = 3 * current_n + 1;
				} else {
					current_n = current_n / 2;
				}
				count++;
			}
			if (count > max) {
				max = count;
			}
		}
		
		printf("%d %d %d\n", i, j, max);
	}
	
	return 0;
}
