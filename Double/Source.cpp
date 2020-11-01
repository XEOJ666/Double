#include<stdio.h>
void AA(int*);
void BB(int*);
void getIntA(int*);
void getIntB(int*);
int main()
{
	int A[10], B[10];
	int* pA = A;
	int* pB = B;
	getIntA(pA);
	getIntB(pB);
	AA(pA);
	BB(pB);
	return 0;
}
void AA(int* pA)
{
	printf("picture 1\n");
	if (*pA > 0 && *pA <= 50)
	{
		for (int row = 1;row <= *pA - 1;row++)
		{
			for (int space = *pA - row; space >= 1; space--)
			{
				printf(" ");
			}
			for (int star = 1;star <= 2 * row - 1;star++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
}
void BB(int* pB)
{
	printf("picture 2\n");
	if (*pB > 0 && *pB <= 50)
	{
		for (int row = 1;row <= *pB - 1;row++)
		{
			for (int space = *pB - row; space >= 1; space--)
			{
				printf(" ");
			}
			for (int star = 1;star <= 2 * row - 1;star++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
}
void getIntA(int* Px)
{
	scanf_s("%d", Px);
}
void getIntB(int* Py)
{
	scanf_s("%d", Py);
}