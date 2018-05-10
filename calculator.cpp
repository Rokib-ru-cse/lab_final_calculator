#include<bits/stdc++.h>
using namespace std;

void multiplication(int a,int b)
{
    int mul_value;
    mul_value = a*b;

    cout << "Multiplicated value: " << mul_value;
}

int main()
{
	int value_1,value_2;
	cout<<"Enter any value: ";
	cin>>value_1;
	cout<<"Enter any value: ";
	cin>>value_2;

	multiplication(value_1,value_2);
	return 0;
}
