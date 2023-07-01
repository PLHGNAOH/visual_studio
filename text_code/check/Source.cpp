#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,x;
	
	long m1 ,m2=1;
	printf("enter n ");
	scanf_s("%d", &n);

	printf("enter x ");
	scanf_s("%d", &x);
	float s = 1 + x;

	
	for (int i = 1; i <= n; i++)
	{
		m1 = 2.0 * i+1.0;
		m2 *= m1 * (m1 - 1);
		
		s += pow(x,2.0*i+1.0) / m2;
 	}
	printf("\nTong la %f", s);
	_getch();
	return 0;

}