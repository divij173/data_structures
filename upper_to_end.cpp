#include <iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,i;
    string str,str1="",str2="";
    char c;
    cout<<"Enter String = ";
    getline(cin,str);
    a=str.length();
    for(i=0;i<a;i++)
    {
        c=str[i];
        if(c>='A' && c<='Z')
        {
            str1=str1+c;
        }
        else
        {
            str2=str2+c;
        }
    }
    cout<<str2+str1;
    return 0;
}

