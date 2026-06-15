#include<iostream>
using namespace std;
extern "C" int n, sum;
extern "C" int FetchValue(int i, int* v1, int* v2, int* v3, int *v4);
int main()
{
	
	int index, A=0, B = 0, C = 0, D = 0;
	cout << "Enter the index at which element is to be fetched from" << endl;
	cin >> index;
	int successStatus=FetchValue(index, &A, &B, &C, &D);
	if (successStatus == 1)
	{
		cout << "Fetched Value=" << A << endl;
	}
	else
		cout << "Operation failed due to Invalid Index";
	
	
}