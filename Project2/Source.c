#include "Header.h"
int main()
{
	printf("%d\n", CompareTwo(2, 5));
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
	/*_asm
	{
		mov eax, a
		mov ebx, b
		div ebx
		mov a, eax
	};*/
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
int CompareTwo(int a, int b)
{
	_asm
	{
		mov eax,a
		mov ebx,b
		cmp eax,ebx
		mov eax, 2
	}
	return a;
}