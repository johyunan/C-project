#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//<for(initialize; conditional; +or-) {} >
	//for loop 2��
	int a;
	int dan=2;
	for (a=1; a<=9; a++){
		printf("%d * %d = %d\n", dan, a, dan*a);
	}
	

	
	
	
	//for loop 99��
	
	int b;
	int da=1;
	for (b=2; b<=9; b++){
		for(da=1; da<=9; da++) {
			printf("%d * %d = %d\n", b, da, b*da);
		}
		printf("���������� �Ѿ���� ------------��---------------");
	}
	
	
	//(�տ� �ʱ�� �ʿ���ۼ�)while(���ǹ�) {} 
	//while loop 2��
	
	int c=1;
	int daan =2;
	while(c<=9){ 
	printf("%d * %d = %d\n", daan, c, daan*c);
	c++;
	} 
	
	//while loop 99��


	int tan=2;
	while (tan<10){
		int t=1;
		while(t<10){
			printf("%d * %d = %d\n", tan, t, tan*t);
			t++;
		}
		tan++;
	}
}

	

	


		

	
	


