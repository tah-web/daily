int main(void)
{
	int number;
	int kep;

	int counter = 0;
	printf("输入一个数字\n");
	scanf("%d", &number);

	kep = number;
	while (kep > 0)
	{
		int digit = kep % 10;
		if (digit % 2 == 0)
		{
			counter++;
		}
		kep = kep / 10;
	}

	printf("这个数字有%d个偶数位置\n", counter);

	return 0;
}
add program: count even digits in number
