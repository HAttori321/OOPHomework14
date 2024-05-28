#include <iostream>

using namespace std;

namespace MyMath 
{
    class Fraction 
    {
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int num, int den) : numerator(num), denominator(den) {}

        Fraction operator+(const Fraction& other) const
        {
            int NumResult = numerator * other.denominator + other.numerator * denominator;
            int DenResult = denominator * other.denominator;
            return Fraction(NumResult, DenResult);
        }
        Fraction operator-(const Fraction& other) const 
        {
            int NumResult = numerator * other.denominator - other.numerator * denominator;
            int DenResult = denominator * other.denominator;
            return Fraction(NumResult, DenResult);
        }
        Fraction operator*(const Fraction& other) const 
        {
            int NumResult = numerator * other.numerator;
            int DenResult = denominator * other.denominator;
            return Fraction(NumResult, DenResult);
        }
        Fraction operator/(const Fraction& other) const
        {
            int NumResult = numerator * other.denominator;
            int DenResult = denominator * other.numerator;
            return Fraction(NumResult, DenResult);
        }
        void show() const {
            cout << numerator << "/" << denominator << endl;
        }
    };
}
namespace SimpleNumSpace
{
    class SimpleNum 
    {
    private:
        int num;
    public:
        SimpleNum(int num) : num(num) {}

        SimpleNum operator+(const SimpleNum& other) const
        {
            return SimpleNum(num + other.num);
        }
        SimpleNum operator-(const SimpleNum& other) const
        {
            return SimpleNum(num - other.num);
        }
        SimpleNum operator*(const SimpleNum& other) const
        {
            return SimpleNum(num * other.num);
        }
        SimpleNum operator/(const SimpleNum& other) const 
        {
            return SimpleNum(num / other.num);
        }
        void display() const 
        {
            cout << num;
        }
    };
}

int main() 
{
    cout << ".............|Fraction|............." << endl;
    MyMath::Fraction f1(1, 5);
    MyMath::Fraction f2(1, 6);

    MyMath::Fraction sum = f1 + f2;
    MyMath::Fraction difference = f1 - f2;
    MyMath::Fraction product = f1 * f2;
    MyMath::Fraction quotient = f1 / f2;

    cout << "Sum : ";
    sum.show();
    cout << endl;

    cout << "Difference : ";
    difference.show();
    cout << endl;

    cout << "Product : ";
    product.show();
    cout << endl;

    cout << "Quotient : ";
    quotient.show();
    cout << endl;


    cout << ".............|SimpleNum|............." << endl;

    SimpleNumSpace::SimpleNum num1(10);
    SimpleNumSpace::SimpleNum num2(3);

    SimpleNumSpace::SimpleNum sum1 = num1 + num2;
    SimpleNumSpace::SimpleNum difference1 = num1 - num2;
    SimpleNumSpace::SimpleNum product1 = num1 * num2;
    SimpleNumSpace::SimpleNum quotient1 = num1 / num2;

    cout << "Sum : ";
    sum1.display();
    cout << endl;

    cout << "Difference : ";
    difference1.display();
    cout << endl;

    cout << "Product : ";
    product1.display();
    cout << endl;

    cout << "Quotient : ";
    quotient1.display();
    cout << endl;
}