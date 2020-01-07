# multiplication-of-large-number-C-code
this is C++ code for multiply large number that can not be stored in integer data type.
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
string accept_number();
string multiply(string , string);

// Driver code
int main()
{
    cout<<setw(50)<<"*===================================*"<<endl;
    cout<<setw(50)<< "| Multiplication of Large Numbers  |"<<endl;
    cout<<setw(50)<<"*===================================*"<<endl;
    cout<<setw(30)<<"Input: "<<endl;;
	string str1 = accept_number();
	string str2 = accept_number();
	cout<<setw(30)<<"Output: "<<endl;
    cout<<setw(60)<<"*=================================*"<<endl;
	cout<<setw(30)<<"|   "<<multiply(str1, str2)<<"   |"<<endl;
    cout<<setw(60)<<"*=================================*"<<endl;
	return 0;
}
/// accecpt the large numbers to multip
