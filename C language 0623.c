#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		 int num1= 2, num2 =4, num3 =40, num4 =12;
 num1+= 3;
 num2*=4;
 num3/=5;
 num4%=5;
 
 printf("Result: %d, %d, %d, %d\n", num1, num2, num3, num4);
 
 int numa=12;
 int numb=13;
 printf("numa: %d\n", numa);
 printf("numa++: %d\n", numa++);
 printf("numa: %d \n\n", numa);
 printf("numb: %d\n", numb);
 printf("++numb: %d\n", ++numb);
 printf("numb: %d\n", numb);
 
 int num6 = 30;
 int num7 = 20;
 //scanf("%d %d", &num6, &num7);
 /*
 if(���ǽ�) { 
  ���ǽ��� ���̸� ������ ����
 }else{
  ���ǽ��� �����̸� ������ ����
 }
 */
	if(num6> num7) {
	 printf("ū ����: %d", num6);
	}else{
	 printf("ū ����: %d", num7);
 }
 
 int numi = 30;
 int numk = 90;
 if(numi> numk){
  printf("ū ����: %d", numi);
 }else{
  if(numi ==numk){
   printf("����");
  }else{
   printf("ū ����: %d", numk);
  }
 }
 int numj = 40;
 int nump = 10;
 if(numj > nump) {
  printf("ū����: %d", numj);
 } else if(numj < nump){
  printf("ū����: %d", nump);
 } else if(numj == nump){
  printf("����");
 }
 printf("\n\n determine wheter its odd or even \n\n");
 
 //¦�� Ȧ�� ���� �Ǵ�
 int numy;
 scanf("%d", & numy);
 if (numy%2 == 0 ) {
  printf("even");
 } else{
  printf("odd");
 }
 
 printf("\n\nYES!!!!! Now find the denominators\n\n");
  int numl;
 scanf("", &numl);
 
 
 
 //������ϱ�
 

  do {
   scanf("%d", &numl);
 } while(numl <= 0);
 

  printf("\n\n %d You are perfect\n\n", numl);
 int i;
 for(i = 1; i <= numl; i++) {
  if(numl%i==0){
   printf("%d, ", i);
  }
}

printf("\n\n three digits\n\n");
//�������� ������ �����ϱ� 
  int a, b, c;
 scanf("%d %d %d", &a, &b, &c);
 
 if(a<=b && a<=c && b<=c){
  printf("%d %d %d", a,b,c);
 } else if(a<=c && a<=b && c<=b){
  printf("%d %d %d", a,c,b);
 } else if(b<=c && b<=a && c<=a){
  printf("%d %d %d", b,c,a);
  }else if(b<=c && a<=b && a<=c){
  printf("%d %d %d", b,a,c);
  }else if(c<=b && c<=a && a<=b){
  printf("%d %d %d", c,a,b);
  }else if(c<=b && c<=a && b<=a){
  printf("%d %d %d", c,b,a);
   }
	
}

