///****************************************************************************
///            Group Members                                                 **
///===========      Name                   ID ====                           **
///===========1 Yonas Yifter            mit/ur/209/09                        **
///===========2 kbrom Takelle          mit/ur/049/09                         **
///===========3 Tensay g/tsadik         mit/ur/111/09                        **
///===========4 W/gebrieal Bilad        mit/ur/208/09                        **
///===========5 Zeberhe Hagos           mit/ur/210/09                        **
///****************************************************************************

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
/// accecpt the large numbers to multiply
string accept_number()
{
    static int cont=1;
    string num;
    cout<<setw(30)<<"num"<<cont<<": ";
    cin>>num;
    cont++;
    return num;
}
/// multiply the numbers to get the answer
/// store the numbers as a string

string multiply(string num1, string num2)
{
	int len1 = num1.length();
	int len2 = num2.length();
	vector<int> result(len1 + len2, 0);
	int i1 = 0;
	int i2 = 0;
	int chk[]={0,1,2,3,4,5,6,7,8,9};
	/// number check if normal number
	for (int i=len1-1; i>=0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		for(int j=0;j<10;j++)
		{
            if(n1 == chk[j])
                break;
            else if(j<9)
                continue;
            else
                return "NAN";
            }
		if(n1)
		i2 = 0;
		for (int j=len2-1; j>=0; j--)
		{
			int n2 = num2[j] - '0';
            for(int i=0;i<10;i++)
			{
                if(n2 == chk[i])
                    break;
                else if(i<9)
                    continue;
                else
                    return "NAN";
			}
        ///result analysis
			int sum = n1*n2 + result[i1 + i2] + carry;
			carry = sum/10;
			result[i1 + i2] = sum % 10;
			i2++;
		}
		if (carry > 0)
			result[i1 + i2] += carry;
		i1++;
	}
	int i = result.size()-1;
	while (i>=0 && result[i] == 0)
        i--;
    if(i== -1)
        return "0";
	while (i >= 0)
    {
        cout<<to_string(result[i--]);
    }
	return "";
}
