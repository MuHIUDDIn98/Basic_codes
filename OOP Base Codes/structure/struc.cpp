#include <iostream>
using namespace std;

int main()
{

    struct rec
    {
        int l;
        int B;

        float Area()
        {

            return l * B;
        }

        float Perimeter()
        {

            return 2 * (l + B);
        }
    };

    rec re1, re2;

    re1.l = 44;
    re1.B = 33;

    cout << "Area of  re1 :" << re1.Area() << endl;
    cout << "Perimeter of re1 :" << re1.Perimeter() << endl;
}