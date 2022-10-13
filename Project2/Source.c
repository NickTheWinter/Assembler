#include "Header.h"
#define n 5
int main()
{
	int* massiv = calloc(n, sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		massiv[i] = i + 1;
	}
	massiv = Swap(massiv, 0, 4);
	ShowArray(massiv,n);
	system("pause");
}
int sum(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		add eax, ebx
		mov a, eax
	};
	return a;
}
int Subtract(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		sub eax, ebx
		mov a, eax
	};
	return a;
}
int Devide(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 0
		div ebx
		mov a, eax
	};
	return a;
}
int Amp(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		mul ebx
		mov a, eax
	};
}
int Remnant(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 0
		div ebx
		mov a, edx
	}
	return a;
}
int CompareTwo(int a, int b)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		cmp eax, ebx
		je equal
		jg greater
		jmp less


		equal :
		mov a, 0
			jmp exit

			greater :
		mov a, 1
			jmp exit

			less :
		mov a, 2
			jmp exit

			exit :
	}
	return a;
}
int CompareThree(int a, int b, int c)
{
	_asm
	{
		mov eax, a
		mov ebx, b
		mov ecx, c
		cmp eax, ebx
		je equal
		jg greater
		jmp less


		equal :
		cmp eax, ecx
			je equal2
			jg greater2
			jmp less2

			greater :
		cmp eax, ecx
			je equal2
			jg greater2
			jmp less2

			less :
		cmp ebx, ecx
			je equal2
			jg greater3
			jmp less2



		equal2:
		mov a, 0
			jmp exit

			greater2 :
		mov a, 1
			jmp exit

			less2 :
		mov a, 3
			jmp exit

			greater3 :
		mov a, 2
			jmp exit

			exit :
	}
	return a;
}
int* Swap(int* massiv, int m, int mm)
{
	int a = massiv[m], b = massiv[mm];
	_asm
	{
		mov eax, a
		mov ebx, b
		mov ecx, ebx
		mov ebx, eax
		mov eax, ecx
		mov a, eax
		mov b, ebx
	}
	massiv[m] = a;
	massiv[mm] = b;
	return massiv;
}
void ShowArray(int* massiv)
{
	for (size_t i = 0; i < n; i++)
	{
		printf("%d ", massiv[i]);
	}
	printf("\n");
}