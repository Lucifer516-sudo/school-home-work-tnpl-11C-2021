// Author : Harish.V

#include <iostream>
using namespace std;

int main(){
:	int n,r;
	cout << "Enter number : ";
	cin >> n;
	r = n % 2;
	if ( r == 0)
		cout << n <<" is an Even Number";
	else
		cout << n << " is an Odd Number ";

	return 0;
}
