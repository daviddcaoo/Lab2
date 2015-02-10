#include <stdio.h>
#include <stdlib.h>

int main()
{
	int data[10000];
	int counter1 = 0, counter2 = 0;
	float avg1 = 0, avg2 = 0;

	for (int i = 0; i < 10000; i++)
	{
		scanf("%d", &data[i]);

		if (data[i] < 0)
		{
			break;
		}
		counter1++;
	}

	for (int i = 0; i < counter1; i++)
	{
		avg1 = avg1 += data[i];
	}

	for (int i = 0; i < counter1; i++)
	{
		if (data[i] > avg1 / counter1)
		{
			avg2 = avg2 += data[i];
			counter2++;
		}
	}

	printf("The above-average-mean of the data is: %f\n", avg2 / counter2);
	return 0;
}