#include<iostream>
using namespace std;
extern "C" int Summation(int* x, int n);
int main()
{
	int x[] = { 5,3,8,12,10,11 };
	cout << "SUm=" << Summation(x, 6);
}