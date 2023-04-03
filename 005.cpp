#include<stdio.h>
#define y(x) (x)*(x)
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("y(x)=%d",y(a+b));
}
//注：define y(x) x*x
//则会有x=a+b时，y(x)=a+b*a+b的错误情况出现
//因此要加括号  
