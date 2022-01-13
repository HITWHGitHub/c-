#include <iostream>
using namespace std;

class square
{
private:
	int n;
public:
	void input()
	{
		cout<<"input a number:";
		cin>>n;
	}
	void output()
	{
		cout<<"square:"<<n*n<<endl;
	}
	int value()
	{
		return n*n;
	}
};

int main()
{
    square s1;
    s1.input();
    cout<<s1.value()<<endl;

    square* s2;//����ָ������
    s2=&s1;
    s2->input();
    cout<<s2->value()<<endl;
    return 0;

}
//ʹ��ƽ����ཨ��ֱ����
#include <iostream>
using namespace std;

class point
{
    private:
        int x,y;
    public:
        void input()
        {
            cout<<"input x:";
            cin>>x;
            cout<<"input y:";
            cin>>y;
        }
        void output()
        {
            cout<<"the point is:"
                <<"("<<x<<","<<y<<")"endl;
        }
};

class line
{
    private:
        point p1,p2;
    public:
        void input()
        {
            p1.input();
            p2.input();
        }
        void output()
        {
            p1.output();
            p2.output();
        }
};

int main()
{
    line m;
    m.input();
    m.output();
    return 0;
}
//����������(����Ϊ�������������߲������Ͳ�ͬ)
#include <iostream>
using namespace std;

int square(int n=10)
{
	return n*n;
}

double square(double n)
{
	return n*n;
}

int main()
{
	int a=10;
	double b=2.5;
	cout<<square(a)<<endl;
	cout<<square(b)<<endl;
}
//����ģ��
#include <iostream>
using namespace std;

template <class T>//����һ��ģ�� ������������ΪT
T square(T n)
{
    return n*n;
}

int main()
{
    int a=10;
    double b=2.5;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;
    //cout<<square<int>(a)<<endl;
    //cout<<square<double>(b)<<endl;
}
//���캯��
#include <iostream>
using namespace std;

class Square
{
    private:
        int n;
    public:
        Square()
        {
            n=10;
        }
        Square(int nn)
        {
            n=nn;
        }
        void input()
	{
		cout<<"input n:";
		cin>>n;
	}
	void output()
	{
		cout<<"square:"<<n*n<<endl;
	}

};
int main()
{
	Square s1,s2(25);
	s1.output();
	s2.output();
	return 0;
}
//ʵ�� ������Ϸ
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Guess
{
    private:
        int n;
    public:
        Guess()
        {
            srand(time(0));
            n=rand()%1000+1;
        }
        void guess()
        {
            int m;
            while(true)
            {
                cout<<"guess:";
                cin>>m;
                if(m>n)
                    cout<<"hh"<<endl;
                else if(m<n)
                        cout<<"jj"<<endl;
                else
                {
                    cout<<"hello!"<<endl;
                    break;
                }        
            }
        }
};
int main()
{
    Guess g;
    g.guess();
    return 0;
}
//��������
#include <iostream>
#include <ctime>
#include <conio.h>//kbhit() ���������Ƿ�Ӽ�������
using namespace std;

class Screen
{
    private:
        int n;
    public:
        Screen()
        {
            n=10;
        }
        Screen(int nn)
        {
            n=nn;
        }
        void move1()
        {
            for(int i=0;i<=10;++i)
                cout<<i;
        }
        void move2()
        {
            for(char c='a';c<'z';++c)
                cout<<c;
        }
        void screen()
        {
            int t;
            while(true)
            {
                t=time(0)%(n*2);
                if(t<n)
                    move1();
                else if(t>=n&&t<(n*2))
                    move2();
                if(kbhit())
                    break;
            }
        }
};
int main()
{
    Screen s(15);
    s.screen();
    return 0;
}
//��������޻������룩getch()
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Password
{
    private:
        string s;//password
        int n;//times
    public:
        Password(string ss,int nn)
        {
            s=ss;n=nn;
        }
        void password()
        {
            string temp;
            char c;
            int i;
            for(i=0;i<n;++i)
            {
                cout<<"password:";
                while(true)
                {
                    c=getch();
                    if(c==13)//char(13)Ϊ�س��� 10Ϊ���м� 9Ϊˮƽ�Ʊ��
                        break;
                    else
                    {
                        temp=temp+c;
                        cout<<"*";
                    }
                }
                if(temp==s)
                {
                    cout<<endl<<"right!"<<endl;break;

                }
                else
                    cout<<endl<<"wrong!repear..."<<endl;


            }
            if(i==n) cout<<endl<<"you dead!"<<endl;
        }
};
int main()
{
    Password p("123456",3);
    p.password();
    return 0;
}