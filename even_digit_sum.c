#include<stdio.h>
#include<stdlib.h>  
int main(void)
{
	int number;
	int temp;
	int sum = 0;
	printf("请输入一个整数：");
	scanf("%d", &number);
	temp = abs(number); 
	
	while (temp > 0)
	{
		int digit = temp % 10;
		if (digit % 2 == 0)
		{
			sum += digit; //等价 sum = sum + digit;
		}
		temp = temp / 10;
	}
	printf("数字中所有偶数位总和为：%d\n", sum);
	return 0;
}
