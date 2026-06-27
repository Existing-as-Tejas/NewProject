#include<iostream>
using namespace std;
extern "C" int Maximum(int a, int b, int c);
int main()
{
	cout << "Enter 3 numbers "<<endl;
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	cout << "The largest number is :" << Maximum(A, B, C);
}