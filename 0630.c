#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//�ִ����� ���ϱ�
	int n1, n2, r, result;
	printf("�ΰ��� ���� �Է��ϼ���\n");
	scanf("%d %d", &n1, &n2);
	for(r=1; r<=n1 && r<=n2; r++) {
		if(n1%r ==0 && n2%r ==0) {
			result = r;
	
	}
}	printf("\n %d�� %d�� �ִ������� %d �Դϴ�", n1, n2, result);

 
 
 /*	1.���� �ΰ��� �Է¹޴´�
	[�ݺ�����]
	2.ū ���� ���� ���� ������
	3-1 �������� 0�� �ƴϸ� ū ���� ������ �������� �������� ������
	3-2 �������� 0�̸� ���� ���� �ִ������� �ǰ� �ݺ� ��
	[�ݺ� ��] 
	*/
	
	
	int a,b,p;
	printf("2���� ���� �Է��ϼ���");
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
	printf("2���� ���� �Է��ϼ���\n");
	scanf("%d %d", &j,&k);
	
	do {
		s= j % k;
		j = k;
		k = s;
		printf("�ݺ�---\n");
	}while(s!=0);
	printf("�ִ������� %d�Դϴ�.\n", j);
}
	


