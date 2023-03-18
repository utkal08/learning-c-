#include <iostream>
using namespace std;
// Forward declaration
class Complex;

class Calculator
{
public:
  int add(int a, int b)
  {
    return (a + b);
  }
  int sumRealComplex(Complex o1, Complex o2);
  int sumcompComplex(Complex o1, Complex o2);
};
class Complex
{
  int a, b;
  friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
  friend int Calculator ::sumcompComplex(Complex o1, Complex o2);

public:
  void setNumber(int n1, int n2)
  {
    a = n1;
    b = n2;
  }

  void printNumber()
  {
    cout << "Your number is " << a << "+ " << b << "i" << endl;
  }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
  return (o1.a + o2.a);
}
int Calculator ::sumcompComplex(Complex o1, Complex o2)
{
  return (o1.b + o2.b);
}
int main()
{
  Complex o1, o2;
  o1.setNumber(1, 3);
  o2.setNumber(3, 7);
  Calculator calc;
  int res = calc.sumRealComplex(o1, o2);
  cout << "The sum of real part of o1 and o2 is " << res << endl;
  int resc = calc.sumcompComplex(o1, o2);
  cout << "The sum of complex part of o1 and o2 is " << resc << endl;

  return 0;
}