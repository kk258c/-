#include<iostream>
using namespace std;
#include<string>//����c++�����ַ���(string ��������="  ")ʱ��Ҫ�������ͷ�ļ�
#include<ctime>//���ļ��а���timeʱҪ�����ͷ�ļ�
//�������������
class person
{
	friend void test06(); friend ostream& operator<<(ostream& cout, person p1);
	
public:
	person() :a(10), b(20)//���캯��
	{
	}
	person& operator--()//  ���� operator<<(cout��p) �򻯺���cout<<p  coutȫ��ֻ��һ��Ҫ�õ�ַ���ݻ�������  ǰ�õݼ�����
	{
		--a; --b;
		return *this;         //�������ã�
	}
	person operator--( int)//  ���� operator<<(cout��p) �򻯺���cout<<p  coutȫ��ֻ��һ��Ҫ�õ�ַ���ݻ�������    ���������Ӹ�int�Ǻ��õ���
	{
		person temp = *this;   //���õݼ� �ȷ���ֵ�ڼ������ܷ��ؾֲ����������á�  ���ص�ֵ
		a--;
		b--;
		return temp;    //��Ϊ���ص�ֵ������������ʽ��̣�����ÿһ�ε������еݼ�����������������shengchengyicitemp������ȥ��ֵ��
	}
private:
	
	int a; int b;
};

ostream& operator<<(ostream& cout, person p1) //�������������
{
	cout << "a=" << p1.a << endl;
	cout << "b=" << p1.b << endl;
	return cout;
}
void test06()
{
	person p1;
	
	cout << p1-- << endl;    //��ֵ���ݺ�ֵ���ض�Ӧ�������У�ֵ�Ѿ������ˣ����ص��Ǹ����塣���Կ��Էֿ���д��������ʽ��̡�
	cout << p1 << endl;
	cout << p1-- << endl;
	cout << p1 << endl;
}
int main()
{
	test06();
	system("pause");
#include<iostream>
	return 0;
}