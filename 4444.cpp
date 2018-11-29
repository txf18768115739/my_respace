/*#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass() {}      //���캯��
	MyClass(int a, double b) :a_(a), b_(b){}     //���캯���ĳ�ʼ��ֵ
	~MyClass(){}     //��������

	int get_a() { return a_; }
	double get_b() { return b_; }

	MyClass operator + (const MyClass &adder) const    //�Գ�Ա������ʽ����+
	{
		MyClass sum;
		sum.a_ = a_ + adder.a_;
		sum.b_ = b_ + adder.b_;
		return sum;
	}

	friend MyClass operator - (const MyClass &A, const MyClass &B)    //����Ԫ��ʽ����-
	{
		MyClass diff;
		diff.a_ = A.a_ - B.a_;
		diff.b_ = A.b_ - B.b_;
		return diff;
	}

private:
	int a_;
	double b_;
};


int main()
{
	MyClass A(1, 1.1);
	MyClass B(2, 2.2);
	MyClass sum = A + B;
	MyClass diff = A - B;
	cout << sum.get_a() << "\t" << sum.get_b()  << endl;
	cout << diff.get_a() << "\t" << diff.get_b()  << endl;

	system("pause");
	return 0;
}

/*#include<Windows.h>
#include<iostream>
using namespace ��*std;

int Add(int a, int b)

{
	return a + b;
}



double Add(double a, double b)

{
	return a + b;
}



float Add(float a, float b)

{
	return a + b;
}

int main()

{
	cout << Add(1, 2) << endl;
	cout << Add(3.5, 4.5) << endl;
	cout << Add(2.22, 3.33) << endl;
	system("pause");

	return 0;

*/
#include <iostream>
using namespace std;

struct Point {
	int x, y, z;
	Point(int x = 0, int y = 0, int z = 0) :x(x), y(y) ,z(z) {}//���캯��
};

Point operator + (const Point& A, const Point& B) //�Ժ�����Ա����+
{
return Point(A.x + B.x, A.y + B.y, A.z + B.z);
}

ostream& operator << (ostream &out, const Point& p){//���������ʽ
	out << "(" << p.x << "," << p.y << "," << p.z << ")";
	return out;
}

 Point operator - (const Point &A, const Point &B)    //����Ԫ��ʽ����-
{
	 return Point(A.x - B.x, A.y - B.y, A.z - B.z);
}

 Point operator * (const Point &A, const Point &B)    //����Ԫ��ʽ����-
 {
	 return Point(A.x * A.y * A.z, B.x * B.y * B.z);
 }

int main()
{
	Point a(7,8,7), b(1.6, 2,5);
	cout << a-b << a+b << a*b << endl;
	system("pause");
	return 0;
}