#include<bits/stdc++.h>
using namespace std;

void Modulas(int number,int divider){
    int mod;
    mod=number%divider;
    cout<<endl<<number<<"%"<<divider<<"="<<mod<<endl;
    return;
}
int main()
{
	int value_1,value_2;
	cout<<"Enter any value: ";
	cin>>value_1;
	cout<<"Enter any value: ";
	cin>>value_2;
	Modulas(value_1,value_2);
	return 0;
}
