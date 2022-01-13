#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
bool IsDigit(string & str)//定义别名
{
    bool flag=true;
    int i;
    if(str[0]=='+'||str=='-')//判断第一位是否为正负号
        i=1;
    else i=0;
    for(i=1;i<str.length();i++)
    {
        while(!IsDigit(str[i]))
        {
            flag=false;
            break;
        }
    }
    return flag;
}
int str2num(string s)
{
    stringstream ss;
    double i;
    ss<<s;
    ss>>i;
    return i;
}
int main()
{
    string s;
    int n;
    cout<<"input a number:";
    cin>>s;
    if(IsDigit(s))
    {
        n=str2num(s);
        cout<<"the square is:"<<n*n<<endl;
    }
    else
    {
        cout<<"input error!"<<endl;
    }
    return 0;
}
#求平方——大数运算
#include <iostream>
#include <string>
#include <sstream>
#include "bignum.cpp"
using namespace std;

bool IsDigit(string & str)
{
    bool flag=true;
    int i;
    if(str[0]=='+'||str[0]=='-')
        i=1;
    else
        i=0;
    for(i=1;i<str.length();i++)
    {
        while(!IsDigit(str[i]))
        {
            flag=False;
            break;
        }
    }
    return flag;
}
/*int str2num(string s)
{
    stringstream ss;
    double i;
    ss<<s;
    ss>>i;
    return i;
}
*/

//the square of a bigger number
void square(string s)
{
    BigNum ss(1);
    ss=ss.str2num(s);
    ss=ss*ss;
    ss.print();

}

int main()
{
    string s;
    int n;
    cout<<"input a number:";
    cin>>s;
    if(IsDigit(s))
    {
        square(s);
    }
    else
    {
        cout<<"input error!"<<endl;
    }
    return 0;
}
//for and while
#include <iosream>
using namespace std;

int main()
{
    int sum=0;
    int i=1;
    while(i<101)
    {
        sum=sum+i;
        ++i;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*
for(i=1;i<101;++i)
{
    sum=sum+i;
}
cout<<"sum="<<sum<endl;
return 0;
*/
#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int i;
    for(i=0;i<10;++i)
    {
        a[i]=i+1;
    }

    for(i=0;i<10;++i)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

#include <iostream>
usning namespace std;

int main()
{
    //int c;
    char c;
    cout<<"input select(1-3):";
    cin>>c;
    switch(c)
    {
        case'1':
            cout<<"zhangsan"<<endl;
            break;
        case'2':
            cout<<"lisan"<<endl;
            break;
        case'3':
            cout<<"wangwu"<<endl;
            break;
        default:
            cout<<"input error!"<<endl;
            break;
    }
    return 0;
}
/*
int main()
{
    int a;
    cout<<"input a number:";
    cin>>a;
    if(a>0)
        cout<<"bigger than 0"<<endl;
    else if(a<0)
        cout<<"smaller than 0"<<endl;
    else
        cout<<"equal to 0"<<endl;
    return 0;
}


*/
//switch
#include <iostream>
usning namespace std;

int leapyear(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}
int day(int year,int month)
{
    switch(month)
    {
        case 2:return 28+leapyear(year);break;
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            return 31;break;
        case 4:case 6:case 9:case 11:
            return 30;break;
    }
}
int main()
{
    cout<<day(2019,10)<<endl;
    return 0;
}

//manual display
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"===========menu============"<<endl;
    cout<<"1.Good morning!"<<endl;
    cout<<"2.Good afternoon!"<<endl;
    cout<<"3.Exit!"<<endl;
    cout<<"==========================="<<endl;
    cout<<"please select(1,2,3):";
    cin>>c;
    switch(c)
    {
        case'1':
            cout<<"Good morning!"<<endl;
        case'2':
            cout<<"Good afternoon!"<<endl;
        case'3':
            exit(0);
            break;
        default:
            cout<<"input error!"<<endl;
            break;

    }
    return 0;
}