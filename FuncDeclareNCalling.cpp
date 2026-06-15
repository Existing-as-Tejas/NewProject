#include<iostream>
using namespace std;
extern "C" int SumAndSubtraction_(int a, int b,int c,int d);
int main()
{
	printf("This editor is working as exoected\n");
	printf("Enter numbers on which operation has to be done (A+B+C-D) :");
	int a, b, c, d;
	cin >> a;
	cout << '\n';
	cin >> b;
	cout << '\n';
	cin >> c;
	cout << '\n';
	cin >> d;
	cout << "Result =" << SumAndSubtraction_(a,b,c,d) << endl;
}