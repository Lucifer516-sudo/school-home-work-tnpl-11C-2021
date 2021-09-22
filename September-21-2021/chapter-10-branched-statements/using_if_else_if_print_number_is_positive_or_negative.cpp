//Author Harish.V
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter The Number To Check : ";
	cin >> n;
	if ( n > 0 )
		cout << n << " is a Positive Number\n";
	else if ( n < 0 )
		cout << n << " is a Negative Number\n";
	else
		cout << n << " is Zero\n";
	return 0;
}
