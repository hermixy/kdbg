#include <iostream.h>
#include <qstring.h>

enum E { red, green, blue, yellow };
struct S { int x, y; S* s; };

class Cl
{
	int k;
	double l;
public:
	Cl(int r);
	virtual ~Cl();
	virtual int f(int x);
};

class Dl : public Cl
{
public:
	Dl(int r);
	virtual int f(int x);
	int operator()(const QString& x, int& y) const;
};

void g()
{
	S s1, s2;
	s1.x = 85;
	s2.y = 17;
	s1.s = &s2;
	s2.s = &s1;
}

void f(E e[3], char c)
{
	E x = e[2];
	S y[2];
	E* pe = e;
        E* pea[3] = { pe, };
	{
		int x = 17;
		x;
	}
	g();
}

int main(int argc, char* argv[])
{
	char a[6] = { 'a', 'B', '\'', '\"' };
	char a1[1] = { '1' };
	E e[3] = { red, green, blue };
	E e1[1] = { yellow };

	a[0] = '5';
       	void (*pf[2])(E*, char) = {f};
	{
		double d[1] = { -1.234e123 };
		int i = 10;
		sin(i);
	}
	(*pf[0])(e, '\n');

	QString s;

	s = "Hi, there!";

	const QString& strref = s;

	Cl c1(13);
	Dl d1(3214);
	d1.f(17);
	int n = 83;
	d1(strref, n);
}

Cl::Cl(int r) :
	k(r),
	l(sin(r))
{
	cout << l << endl;
}

Cl::~Cl()
{
}

int Cl::f(int x)
{
	int y = 2*x;
	return y;
}

Dl::Dl(int r) :
	Cl(r)
{
}

int Dl::f(int x)
{
	int y = Cl::f(x);
	return y+3;
}

int Dl::operator()(const QString& x, int& y) const
{
	cout << "ha! I know!" << endl;
}
