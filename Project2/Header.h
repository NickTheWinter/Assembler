#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h> 


int Sum(int, int);
int Subtract(int, int);
int Devide(int, int);
int Mult(int, int);
int CompareTwo(int, int);
int CompareThree(int, int, int);
int Remainder(int, int);
int* Swap(int*, int, int);
void ShowArray(int*, int);

int Sum_C(int, int);
int Subtract_C(int, int);
int Devide_C(int, int);
int Mult_C(int, int);
int CompareTwo_C(int, int);
int CompareThree_C(int, int, int);
int Remainder_C(int, int);
int* Swap_C(int*, int, int);

typedef struct CSV {
	int a;
	int c;
} csv;