#include<iostream>
using namespace std;
#include<string>//����c++�����ַ���(string ��������="  ")ʱ��Ҫ�������ͷ�ļ�
#include<ctime>//���ļ��а���timeʱҪ�����ͷ�ļ�
//��������� Ҳ���Է�����������
class person
{
public:
	person() :a(10), b(20)  //���캯��
	{}
	//person operator+(person p1)     //��������������Ϊoperator+  ֮��༭������ʶ��person p3=p1+p2;���롣���Զ����������Ͷ�Ӧ�������
	//{
	//	person temp;
	//		temp.a = a+p1.a;
	//		temp.b = b+p1.b;
	//		return temp;

	//}
	int a;    //����
	int b;

};
person operator+(person p1, person p2)
{
	person temp;
	temp.a = p2.a + p1.a;
	temp.b = p2.b + p1.b;
	return temp;
}
person operator+(person p1, int num)
{
	person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}

void test01()
{
	class person p1;
	person p2;
	person p3 = p1 + p1;  //���� person p3=p1.operator+(p2)
	cout << "p1he p2he " << p3.a << endl;
	cout << "p1he p2he " << p3.b << endl;
	
}
void test02()
{
	class person p1;
	person p2;
	person p3 = p2 + p1;
	cout << "p1he p3he " << p3.a << endl;
	cout << "p1he p3he " << p3.b << endl;
}
void test03()
{
	class person p1;
	
	person p3 = p1 + 10;
	cout << "p1he p3he " << p3.a << endl;
	cout << "p1he p3he " << p3.b << endl;
}
int main1()
{
	test01();
	test02();
	test03();
	system("pause");
#include<iostream>
	return 0;
}