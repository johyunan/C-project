#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	printf("당신이 태어난 생일을 숫자만 년 월 일 순으로 입력하세요\n");
	int y;
	int m;
	int d;
	
	scanf("%d %d %d",&y,&m,&d);
	printf("당신은 %d 년 %d 월 %d 일에 태어나셨군요", y,m,d);
	printf("\n\n");
	
	
	int a;
	scanf("%d",&a);
	printf("%d", ++a);
	
	
	int b;
	printf("\n type 1 or 0\n");
	scanf("%d", &b);
	if(b>=1) {
		printf("0");
	 }else if(b<1){
		b=1;
		printf("%d",b);
	}
	




	int f;
	
	scanf("%d", &f);
	for(f=1; f<=15; f++) {
		if(f%3==0) {
		printf("X");
		}else  {	
		printf("%d", f);
		}
	}

	
	
	//4각형 그리기
	
	int c,r,n;
	scanf("%d", &n);
	for(c=1; c<=n; c++) {
		for(r=1; r<=n; r++) {
			printf("*");
		}
		printf("\n");

}

	
	
	//n 이 5가 입력되면 (위부터 타입된다는 가정) 
	//row(x축 가로의길이는 )은 1부터 시작해서 n까지 늘어난다 
	//col(y 축 세로의 길이)는  1부터 시작해서 n까지 늘어난다 
	
	
//내려갈때커지는 삼각형
 
  int h,k,s;
     scanf("%d",&s);
     for (h=0; h<s; h++){
     	for(k=r; k>=0; k-- ) {
     		printf("*");
		 }
		 printf("\n");
	 }


 	
	
	// 내려갈때 작아지는 삼각형 
   int u,p,w;
     scanf("%d",&u);
     for(p=a ; p>=0 ; p--)
     {
         for(w=0 ; w<=p ; w++)
         {
             printf("*");
         }
         printf("\n");
     }     
     
	 
     
     
     
     
 return 0;
 }
 
 
 
 
 
 


