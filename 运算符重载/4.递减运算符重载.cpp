#include<iostream>
using namespace std;
#include<string>//在用c++风格的字符串(string 变量名称="  ")时，要包含这个头文件
#include<ctime>//在文件中包含time时要有这个头文件
//左移运算符重载
class person
{
	friend void test06(); friend ostream& operator<<(ostream& cout, person p1);
	
public:
	person() :a(10), b(20)//构造函数
	{
	}
	person& operator--()//  调用 operator<<(cout，p) 简化后是cout<<p  cout全局只有一个要用地址传递或者引用  前置递减重载
	{
		--a; --b;
		return *this;         //返回引用，
	}
	person operator--( int)//  调用 operator<<(cout，p) 简化后是cout<<p  cout全局只有一个要用地址传递或者引用    函数条件加个int是后置递增
	{
		person temp = *this;   //后置递减 先返回值在减，不能返回局部变量的引用。  返回的值
		a--;
		b--;
		return temp;    //因为返回的值，并不能用链式编程，但是每一次单独进行递减，会进入这个函数，shengchengyicitemp，传出去数值。
	}
private:
	
	int a; int b;
};

ostream& operator<<(ostream& cout, person p1) //左移运算符重载
{
	cout << "a=" << p1.a << endl;
	cout << "b=" << p1.b << endl;
	return cout;
}
void test06()
{
	person p1;
	
	cout << p1-- << endl;    //将值传递和值返回对应起来就行，值已经更新了，返回的是复制体。所以可以分开编写，不能链式编程。
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