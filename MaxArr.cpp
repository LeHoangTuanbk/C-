
#include<iostream>  
using namespace std;

int a[] = { 2,5,8,6,9,4,40 };
int max = a[0];
int arrSize = 7;
int n = 0;

int maxArr(int *an) {


	if (n == arrSize) {
		return max;
	}
	else
	{
		if (max < *an) {
			max = *an;
		}
		n++;
		maxArr(a+n);
	}
}

int main()
{
	max = maxArr(a);
	cout << "Max of arr is: " << max <<endl;
	system("pause");

	return 0;
}