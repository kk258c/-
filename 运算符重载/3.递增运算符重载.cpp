#include<iostream>
using namespace std;
#include<string>//����c++�����ַ���(string ��������="  ")ʱ��Ҫ�������ͷ�ļ�
#include<ctime>//���ļ��а���timeʱҪ�����ͷ�ļ�
//�������������
class person
{
	friend person& operator++(person &p1); friend void test05();
	friend person& operator++(person &p1, int);
public:
	person() :a(10), b(20)//���캯��
	{
	}
private:
	////void operator<<(cout)  ͨ�������ó�Ա������������������أ���Ϊ�޷�ʵ��cout�����  p.operator<<��cout�����򻯺���p<<cout
	//{
	//	cout << "a=" << a << endl;
	//	cout << "b=" << b << endl;
	//}
	int a; int b;
};
person& operator++(person &p1)//  ���� operator<<(cout��p) �򻯺���cout<<p  coutȫ��ֻ��һ��Ҫ�õ�ַ���ݻ�������  ǰ�õ���
{
	p1.a += 1;
	p1.b += 1;
	return p1;
}
person& operator++(person &p1,int)//  ���� operator<<(cout��p) �򻯺���cout<<p  coutȫ��ֻ��һ��Ҫ�õ�ַ���ݻ�������    ���������Ӹ�int�Ǻ��õ���
{
	p1.a += 1;
	p1.b += 1;
	return p1;
}
void test05()
{
	person p1;
	++p1; p1++;
	cout << "p1��a��" << p1.a << endl;
	cout << "p1��b��" << p1.b << endl;
}
int main3()
{
	test05();
	system("pause");
#include<iostream>
	return 0;
}