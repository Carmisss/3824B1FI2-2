#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	float vb, ch, ch2;
	int pop = 1;
	printf("выберите режим игры:\n 1)число загадывает компьютер\n 2)число загадываете вы\n");
	scanf_s("%f", &vb);





	if (vb == 1) {
		int range = 1001;
		int pop = 1;
		srand(time(NULL));
		float r = 1 + rand() % range;
		 
		int n = 1;
		//printf("%f", r);
		

		printf("\nпопробуйте угадать число:)\n");

		
		do {

			scanf_s("%f", &ch);


			if (ch < r) {
				printf("число больше\n ");
				pop = pop + 1;
			}
			else if (ch > r) {
				printf("число меньше\n");
				pop = pop + 1;
			}

			else
				printf("ВЫ УГАДАЛИ!!!\n", pop);
		}

		while (ch != r);

		return 0;
	}
	
	else if (vb == 2) {
		int x, y = 500, b1 = 0, b2 = 500, b3 = 1001, n = 1;
		char z;
		printf("загадайте число от 1 до 1000\n");
		printf("если число меньше, введите <\n");
		printf("если число больше,введите <\n");
		printf("если число угаданно, введите =\n");


		z = getchar();
		while (z != '=') {
			n += 1;
			if (z == '<') {
				x = (b1 + b2) / 2;
				y = x;
				b3 = b2;
				b2 = y;
			}
			else if (z == '>') {
				x = (b2 + b3) / 2;
				y = x;
				b1 = b2;
				b2 = y;
			}
			printf("ваше число %d ?\n", y);
			printf("введите сравнение\n");
			scanf_s("%c", &z);
			//z = getchar();
			
		}
		printf("компьютер угадал!\n");
		printf("компьютер угадал за %d попыток\n", n);
	}
}
