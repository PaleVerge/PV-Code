#include <stdio.h>
#include <ctype.h> 

void print_digit_word(char digit, int is_first_digit) {
	if (!is_first_digit) {
		printf("，"); 
	}
	
	switch (digit) {
	case '0':
		printf("zero");
		break;
	case '1':
		printf("one");
		break;
	case '2':
		printf("two");
		break;
	case '3':
		printf("three");
		break;
	case '4':
		printf("four");
		break;
	case '5':
		printf("five");
		break;
	case '6':
		printf("six");
		break;
	case '7':
		printf("seven");
		break;
	case '8':
		printf("eight");
		break;
	case '9':
		printf("nine");
		break;
	default:
	
		break;
	}
}

int main() {
	char ch;int is_first = 1;
	while ((ch = getchar()) != EOF && ch != '#') {
		if (isdigit(ch)) {
			print_digit_word(ch, is_first);
			if (is_first) {
				is_first = 0;
			}
		}
	}
	printf("\n");
	
	return 0;
}
