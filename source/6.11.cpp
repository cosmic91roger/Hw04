#include <stdio.h>
#include <stdlib.h>

int bubble()
{
	int i, j, tmp;
	int a[9] = { 5, 0, 7, 16, 26, 63, 67, 73,81};
	for (i = 0;i < 8;i++)
	{
		int count = 0;
		for (j = 0;j < (8-i);j++)
		 {
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				count++;
			}
		}
		if (count == 0)
		{
			printf("Loop %d:", i);
			for (j = 0;j < 9;j++)
				printf("%4d", a[j]);
			printf("\n");
			system("pause");
			return 0;
		}
		printf("Loop %d:", i);
		for (j = 0;j < 9;j++)
		printf("%4d", a[j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
