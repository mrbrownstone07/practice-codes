#include "complex.cpp"
#include <iostream>

using namespace std;

int main()
{
    Complex<int> c1 (4,3);
    Complex<int> c2 (3,8);
    Complex<int>c3;
    c3= c1+c2;
    c3.Print ();
    Complex<int> c4 = c1*c2;
    c4.Print ();

    if(c4 != c3) cout << "not euqal" << endl;
    else cout << "equal" << endl;

}