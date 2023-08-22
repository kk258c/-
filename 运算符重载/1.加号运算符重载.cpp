#include<iostream>
using namespace std;
#include<string>//在用c++风格的字符串(string 变量名称="  ")时，要包含这个头文件
#include<ctime>//在文件中包含time时要有这个头文件
//运算符重载 也可以发生函数重载
class person
{
public:
	person() :a(10), b(20)  //构造函数
	{}
	//person operator+(person p1)     //将函数名字命名为operator+  之后编辑器就能识别person p3=p1+p2;代码。将自定义数据类型对应数据相加
	//{
	//	person temp;
	//		temp.a = a+p1.a;
	//		temp.b = b+p1.b;
	//		return temp;

	//}
	int a;    //属性
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
	person p3 = p1 + p1;  //本质 person p3=p1.operator+(p2)
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