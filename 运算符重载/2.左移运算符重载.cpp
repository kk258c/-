#include<iostream>
using namespace std;
#include<string>//在用c++风格的字符串(string 变量名称="  ")时，要包含这个头文件
#include<ctime>//在文件中包含time时要有这个头文件
//左移运算符重载
class person 
{
	friend ostream & operator<<(ostream &cout, person p1);
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
ostream & operator<<(ostream &cout, person p1)//  调用 operator<<(cout，p) 简化后是cout<<p  cout全局只有一个要用地址传递或者引用
{
	cout << "a=" << p1.a << endl;
	cout << "b=" << p1.b << endl;
	return cout;
}
void test04()
{
	person p1;
	cout << p1 << endl;//后边可以追加代表链式编程  ,需要返回一个cout才能追加
}
int main2()
{
	test04();
	system("pause");
#include<iostream>
	return 0;
}