#include <iostream>

int main()
{
	int num[3];
	// num
	// [3]
	// int
	// num is array of 3 integer

	int* num[3];
	// num
	// [3]
	// *
	// int
	// num is array of 3 pointer to integer 
	// (num ������ 3���� ������ ����Ű�� �����͸� ���ҷ� ���� �迭)
	// num = {&a, &b, &c}
	
	int (*num)[3];
	// num
	// *
	// [3]
	// int
	// num is a pointer to 3 array of integer
	// (num ������ 3���� ������ ���ҷ� ���� �迭�� ����Ű�� ������)
	// num = {1, 2, 3}
}