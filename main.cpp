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
	// (num 변수는 3개의 정수를 가리키는 포인터를 원소로 가진 배열)
	// num = {&a, &b, &c}
	
	int (*num)[3];
	// num
	// *
	// [3]
	// int
	// num is a pointer to 3 array of integer
	// (num 변수는 3개의 정수를 원소로 가진 배열을 가리키는 포인터)
	// num = {1, 2, 3}
}