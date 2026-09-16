#include<stdio.h>
int main(void)
{
	int number;
	int kep;
	int counter = 0;

	printf("输入您想要的数字\n");
	scanf("%d", &number);

	kep = number;
	while (kep > 0)
	{
		int digit;
		digit = kep % 10;
		if (digit < 5)
		{
			counter++;
		}
		kep = kep / 10;
	}
	printf("有%d个数字小于五\n", counter);
	return 0;
}
add c code :count digits less than 5
