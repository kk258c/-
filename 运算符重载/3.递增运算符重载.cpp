#include<iostream>
using namespace std;
#include<string>//在用c++风格的字符串(string 变量名称="  ")时，要包含这个头文件
#include<ctime>//在文件中包含time时要有这个头文件
//左移运算符重载
class person
{
	friend person& operator++(person &p1); friend void test05();
	friend person& operator++(person &p1, int);
public:
	person() :a(10), b(20)//构造函数
	{
	}
private:
	////void operator<<(cout)  通常不会用成员函数做左移运算符重载，因为无法实现cout在左侧  p.operator<<（cout），简化后是p<<cout
	//{
	//	cout << "a=" << a << endl;
	//	cout << "b=" << b << endl;
	//}
	int a; int b;
};
person& operator++(person &p1)//  调用 operator<<(cout，p) 简化后是cout<<p  cout全局只有一个要用地址传递或者引用  前置递增
{
	p1.a += 1;
	p1.b += 1;
	return p1;
}
person& operator++(person &p1,int)//  调用 operator<<(cout，p) 简化后是cout<<p  cout全局只有一个要用地址传递或者引用    函数条件加个int是后置递增
{
	p1.a += 1;
	p1.b += 1;
	return p1;
}
void test05()
{
	person p1;
	++p1; p1++;
	cout << "p1的a是" << p1.a << endl;
	cout << "p1的b是" << p1.b << endl;
}
int main3()
{
	test05();
	system("pause");
#include<iostream>
	return 0;
}