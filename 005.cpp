#include<stdio.h>
#define y(x) (x)*(x)
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("y(x)=%d",y(a+b));
}
//ע��define y(x) x*x
//�����x=a+bʱ��y(x)=a+b*a+b�Ĵ����������
//���Ҫ������  
