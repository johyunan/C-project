#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//최대공약수 구하기
	int n1, n2, r, result;
	printf("두개의 수를 입력하세요\n");
	scanf("%d %d", &n1, &n2);
	for(r=1; r<=n1 && r<=n2; r++) {
		if(n1%r ==0 && n2%r ==0) {
			result = r;
	
	}
}	printf("\n %d와 %d의 최대공약수는 %d 입니다", n1, n2, result);

 
 
 /*	1.숫자 두개를 입력받는다
	[반복시작]
	2.큰 수를 작은 수로 나눈다
	3-1 나머지가 0이 아니면 큰 수는 버리고 작은수를 나머지로 나눈다
	3-2 나머지가 0이면 작은 수는 최대공약수가 되고 반복 끝
	[반복 끝] 
	*/
	
	
	int a,b,p;
	printf("2개의 수를 입력하세요");
	scanf("%d %d", &a,&b);
	while(a>b) {
		if (a%b!=0) { 
		p= b/(a%b);
		printf("%d", p);
	} else if(a%b==0){ 
		p= a%b;
		 printf("%d", p);
	}
}

	int j,k,s;
	printf("2개의 수를 입력하세요\n");
	scanf("%d %d", &j,&k);
	
	do {
		s= j % k;
		j = k;
		k = s;
		printf("반복---\n");
	}while(s!=0);
	printf("최대공약수는 %d입니다.\n", j);
}
	


