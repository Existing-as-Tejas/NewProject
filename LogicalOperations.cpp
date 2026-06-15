#include<iostream>
#include <iomanip>
using namespace std;
extern "C" int Logic(int a, int b );
//In the above declared function logical output of a| b will be calculated and returned 
int main()
{
	int a,  b;
	cout << "First checking if both  of the numbers are 0  :";
	cin >> a;
	cin >> b;
	cout << "Result = " << Logic(a, b) << endl;
}