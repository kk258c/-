#include<iostream>
using namespace std;
#include<string>//����c++�����ַ���(string ��������="  ")ʱ��Ҫ�������ͷ�ļ�
#include<ctime>//���ļ��а���timeʱҪ�����ͷ�ļ�
//�������������
class person 
{
	friend ostream & operator<<(ostream &cout, person p1);
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
ostream & operator<<(ostream &cout, person p1)//  ���� operator<<(cout��p) �򻯺���cout<<p  coutȫ��ֻ��һ��Ҫ�õ�ַ���ݻ�������
{
	cout << "a=" << p1.a << endl;
	cout << "b=" << p1.b << endl;
	return cout;
}
void test04()
{
	person p1;
	cout << p1 << endl;//��߿���׷�Ӵ�����ʽ���  ,��Ҫ����һ��cout����׷��
}
int main2()
{
	test04();
	system("pause");
#include<iostream>
	return 0;
}