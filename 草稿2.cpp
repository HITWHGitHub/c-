#include <iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}

int sub(int x,int y)
{
    return x-y;
}

int main()
{
    int a,b;
    cout<<"input a:";
    cin>>a;
    cout<<"input b:";
    cin>>b;
    cout<<"a+b="<<add(a,b)<<endl;
    cout<<"a-b="<<sub(a,b)<<endl;
    return 0;
}

//�ýṹ�彫�����������з�װ
struct cal
{
    int a,b;
    int add()
    {
        return a+b;
    }
    int sub()
    {return a-b;}

};

class cal
{
    public:
        int a,b;
        int add()
        {
            return a+b;
        }
        int sub()
        {
            return a-b;
        }
};
int main()
{
    cal c;//��'cal'����һ��������c��,"c"Ϊ"cal"���һ������
    return 0;
}

class cal
{
    public://���Ա������,����������ʹ��
        int a,b;
        int add()
        {
            return a+b;
        }
        int sub()
        {
            return a-b;
        }
        void output()
        {
            cout<<a<<"+"<<b<<"="<<add()<<endl;
            cout<<a<<"-"<<b<<"="<<sub()<<endl;
        }
};

int main()
{
    cal c;
    c.a=1;
    c.b=2;
    c.output();
    return 0;
}
//����һ��������������Բ�������
class circle
{
    public:
        int r;
        double area()
        {
            return r*r*3.1415926;
        }
};
int main()
{
	circle c1,c2;
	c1.r=2;
	c2.r=5;
	cout<<c1.area()<<endl;
	cout<<c2.area()<<endl;
	return 0;
}
class cal
{
    private://�����Եĳ�Աֻ��������ʹ��
        int a,b;
    public:
        int add()
        {
            return a+b;

        }
        int sub()
        {
            return a-b;
        }
        void output()
        {
            cout<<a<<"+"<<b<<"="<<add()<<endl;
            cout<<a<<"-"<<b<<"="<<sub()<<endl;
        }
};
int main()
{
    cal c;
    c.a=1;
    c.b=2;
    c.output();
    return 0;
}//��������ᱨ�� ֻ��ͨ�����ڵĺ���ʹ�����ڵ�����,�Դ���������ݵİ�ȫ��
//Ϊprivate���ͽ��и�ֵ
#include <iostream>
using namespace std;
class cal
{
    private:
        int a,b;
    public:
        void input()
        {
            cout<<"input a:";cin>>a;
            cout<<"input b:";cin>>b;

        }
        int add()
        {
            return a+b;
        }
        int sub()
	{
		return a-b;
	}
	void output()
	{
		cout<<a<<"+"<<b<<"="<<add()<<endl;
		cout<<a<<"-"<<b<<"="<<sub()<<endl;
	}

};
int main()
{
	cal c;
	c.input();
	c.output();
	return 0;
}
//ʵ�������N���ڵ���������
#include <iostream>
using namespace std;
class Prime
{
    private:
        int n;
    public:
        void input()
        {
            cout<<"input a number:";
            cin>>n;
        }
        bool prime(int m)
        {
            int i;
            for(i=2;i<m;++i)
            {
                if(m%i==0) return false;
            }
            return true;
        }
        void output()
        {
            int i;
            for(i=1;i<=n;++i)
            {
                if(prime(i))
                    cout<<i<<endl;
                else
                    continue;
            }
        }
};
int main()
{
    Prime p;
    p.input();
    p.output();
    return 0;
}
//ʵ���������������
//�齱�������ȡ��������Ա
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> a,b;//����һ��string���͵Ŀյ�����
    //vector<string>::iterator p;//������
    a.push_back("111");
    a.push_back("222");
    a.push_back("333");
    a.push_back("444");
    a.push_back("555");
    a.push_back("666");
    a.push_back("777");
    a.push_back("888");
    int i,m;
    srand(time(NULL));
    b=a;//a�б���ԭʼ����
    //p=b.begin();
    for(i=0;i<3;++i)
    {
        m=rand()%b.size();
        cout<<b[m]<<endl;//cout<<*(p+m)<<endl;
        b.erase(b.begin()+m);//b.erase(p+m)
    }
    system("pause");
    return 0;


}
