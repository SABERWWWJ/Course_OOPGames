//8_1.cpp
#include<iostream>
using namespace std;
class complex	//复数类声明
{
public:	//外部接口
	complex(double r=0.0,double i=0.0){real=r;imag=i;}	//构造函数
	complex operator + (complex c2);	//运算符+重载成员函数
	complex operator - (complex c2);	//运算符-重载成员函数
	void display();	//输出复数
private:	//私有数据成员
	double real;	//复数实部
	double imag;	//复数虚部
};	
complex complex::operator +(complex c2)	//重载运算符函数实现
{
	return complex(real+c2.real, imag+c2.imag); //创建一个临时无名对象作为返回值
}
complex complex::operator -(complex c2)	//重载运算符函数实现
{
	return complex(real-c2.real, imag-c2.imag);  //创建一个临时无名对象作为返回值
}
void complex::display()
{
	cout<<"("<<real<<","<<imag<<")"<<endl;
}
int main()	//主函数
{
	complex c1(5,4),c2(2,10),c3;	//声明复数类的对象
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	c3=c1-c2;	//使用重载运算符完成复数减法
	cout<<"c3=c1-c2=";
	c3.display();
	c3=c1+c2;	//使用重载运算符完成复数加法
	cout<<"c3=c1+c2=";
	c3.display();
}
