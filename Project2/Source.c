#include "Header.h"
#include "Header1.h"
int write_to_csv(int count, csv* data)
{
	int i = 0;
	FILE* f = fopen("X:/test.csv", "w");
	if (f == NULL)
	{
		return -1;
	}
	for (i = 0; i < count; i++)
	{
		fprintf(f, "%d,%d\n", data[i].a, data[i].c);
	}
	fclose(f);
	return 0;
}

main() {
	csv data[8];

	clock_t start, end;
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Sum(2, 2);
	}
	end = clock();
	data[0].a = end - start;
	printf("Sum = %d\n", end - start);
	for (size_t i = 0; i < 10000000; i++)
	{
		Subtract(2, 2);
	}
	end = clock();
	data[1].a = end - start;
	printf("Subtract = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Devide(2, 2);
	}
	end = clock();
	data[2].a = end - start;
	printf("Devide = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Mult(2, 2);
	}
	end = clock();
	data[3].a = end - start;
	printf("Mult = %d\n", end - start);
	/*start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		CompareTwo(2, 2);
	}
	end = clock();
	data[4].a = end - start;
	printf("CompareTwo = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		CompareThree(2, 2, 2);
	}
	end = clock();
	data[5].a = end - start;
	printf("CompareThree = %d\n", end - start);*/
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Remainder(2, 2);
	}
	end = clock();
	data[6].a = end - start;
	printf("Remainder = %d\n", end - start);
	int* a = malloc(sizeof(int) * 5);
	for (size_t i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Swap(a, 0, 3);
	}
	end = clock();
	data[7].a = end - start;
	printf("Swap = %d\n", end - start);

	printf("\n");

	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Sum_C(2, 2);
	}
	end = clock();
	data[0].c = end - start;
	printf("Sum_C = %d\n", end - start);
	for (size_t i = 0; i < 10000000; i++)
	{
		Subtract_C(2, 2);
	}
	end = clock();
	data[1].c = end - start;
	printf("Subtract_C = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Devide_C(2, 2);
	}
	end = clock();
	data[2].c = end - start;
	printf("Devide_C = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Mult_C(2, 2);
	}
	end = clock();
	data[3].c = end - start;
	printf("Mult_C = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		CompareTwo_C(2, 2);
	}
	end = clock();
	data[4].c = end - start;
	printf("CompareTwo_C = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		CompareThree_C(2, 2, 2);
	}
	end = clock();
	data[5].c = end - start;
	printf("CompareThree_C = %d\n", end - start);
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Remainder_C(2, 2);
	}
	end = clock();
	data[6].c = end - start;
	printf("Remainder_C = %d\n", end - start);
	int* b = malloc(sizeof(int) * 5);
	for (size_t i = 0; i < 5; i++)
	{
		b[i] = i;
	}
	start = clock();
	for (size_t i = 0; i < 10000000; i++)
	{
		Swap_C(b, 0, 3);
	}
	end = clock();
	data[7].c = end - start;
	printf("Swap_C = %d\n", end - start);
	end = clock();

	write_to_csv(8, data);
}


int Sum_C(int a, int b) {
	return a + b;
}
int Subtract_C(int a, int b) {
	return a - b;
}
int Devide_C(int a, int b) {
	return a / b;
}
int Mult_C(int a, int b) {
	return a * b;
}
int CompareTwo_C(int a, int b) {
	if (a > b)
		return 1;
	if (a < b)
		return 2;
	if (a == b)
		return 0;
}
int CompareThree_C(int a, int b, int c) {
	if (a > b || a > c)
		return 1;
	if (b > a || b > c)
		return 2;
	if (c > b || c > a)
		return 3;
	if (a == b || a == c)
		return 0;
};
int Remainder_C(int a, int b) {
	return a % b;
}
int* Swap_C(int* a, int i, int _i) {
	int n = a[i];
	a[i] = _i;
	a[_i] = n;
}