#include <iostream>

#include <stdio.h>
#include <stdlib.h>
using namespace std;
unsigned int i = 0;
size_t ret;
char j = 0;
int main()
{
	cout << "AAAA verision X " << 0x22<<endl;
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	
	system("pause");

	return 0;
}