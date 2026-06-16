#include<iostream>
using namespace std;
extern "C" int Sum(int* x, int rows, int cols,int *sValues);
int main()
{
	int a, b;
	cout << "Enter the numbee of rows :" << endl;
	cin >> a;
	cout << "Enter the number of columns" << endl;
	cin >> b;
	int* s = new int[a];
	int* Matrix = new int[a*b];
	cout << "Enter elemnts of the matrix :" << endl;
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < b;j++)
			cin >> Matrix[i * b + j];
	}
	int successCode = Sum(Matrix, a, b, s);
	cout << successCode << endl;
	for (int i = 0;i < a;i++)
		cout << "Sum of row number " << i + 1 << "=" << s[i] << endl;


}