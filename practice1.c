#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	printf("����� �¾ ������ ���ڸ� �� �� �� ������ �Է��ϼ���\n");
	int y;
	int m;
	int d;
	
	scanf("%d %d %d",&y,&m,&d);
	printf("����� %d �� %d �� %d �Ͽ� �¾�̱���", y,m,d);
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

	
	
	//4���� �׸���
	
	int c,r,n;
	scanf("%d", &n);
	for(c=1; c<=n; c++) {
		for(r=1; r<=n; r++) {
			printf("*");
		}
		printf("\n");

}

	
	
	//n �� 5�� �ԷµǸ� (������ Ÿ�Եȴٴ� ����) 
	//row(x�� �����Ǳ��̴� )�� 1���� �����ؼ� n���� �þ�� 
	//col(y �� ������ ����)��  1���� �����ؼ� n���� �þ�� 
	
	
//��������Ŀ���� �ﰢ��
 
  int h,k,s;
     scanf("%d",&s);
     for (h=0; h<s; h++){
     	for(k=r; k>=0; k-- ) {
     		printf("*");
		 }
		 printf("\n");
	 }


 	
	
	// �������� �۾����� �ﰢ�� 
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
 
 
 
 
 
 


