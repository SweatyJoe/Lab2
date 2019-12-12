#include <math.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int n;
	printf("Vvedite: 1 - Russia \n");
	printf(" 2 - Japan \n");
	printf(" 3 - Italy \n");
	printf(" 4 - China \n");
	printf(" 5 - Jermany \n");
	printf(" 6 - Belarus \n");
	
	scanf("%i",&n);
	switch(n) {
		case 1:
			printf("Moskow");
			break;
		case 2:
			printf("Tokio");
			break;
		case 3:
			printf("Rim");
			break;
		case 4:
			printf("Pekin");
			break;
		case 5:
			printf("Berlin");
			break;
		case 6:
			printf("Minsk");
			break;
		default:
			printf("we ne vibrali contry");
			break;
	}

	return 0;
}
