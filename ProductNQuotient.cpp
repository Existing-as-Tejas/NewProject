//First lets calculate product and then quotient
#include<iostream>
using namespace std;
extern "C" int product(int a, int b);
extern "C" int quotient(int A, int B, int *quo, int *rem);
int main()
{
	cout << "Enter two numbers" << endl;
	int a, b, quo =0,rem=0;
	cin >> a;
	cin >> b;
	cout << "Product=" << product(a, b) << endl;
	//Now finding quotient if possible ofcourse
	if (quotient(a, b, &quo,&rem) == 0)
		cout << "Division not possible ";
	else
	{
		cout << "Quotient=" << quo << endl;
		cout << "Remainder=" << rem;
	}

	
	
}