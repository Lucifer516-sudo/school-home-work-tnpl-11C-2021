// Author Lucifer516-sudo alias Harish. V // On 18-09-2021

// Simple Interest : S.I = (p*n*r) / 100
#include <iostream>
using namespace std;

int main(){
	float p,n,r,si;
	cout << "Enter Principal Amount, No. Of Days, Rate Of Interest : ";
	cin >> p >> n >> r ;
	si = (p*n*r) / 100;
	cout << " \nThe Simple Interest is " << si;
	return 0;
}