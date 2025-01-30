#include "cmplx.hpp"

using namespace std;
//constructor
cmplx ::cmplx()
{
    real = 0;
    img = 0;
    cout << "\n In cmplx default constant .....\n";
}

void cmplx::display()
{
    cout << real << " + " << img << "i" <<  endl;
}

cmplx cmplx::add(cmplx y)
{
    cmplx c;
    c.real = this -> real + y.real;
    c.img = this-> img + y.img;

    return c;
}