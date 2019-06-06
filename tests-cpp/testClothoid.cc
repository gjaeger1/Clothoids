//#define _USE_MATH_DEFINES
#include "Clothoid.hh"
#include <cmath>
#include <iostream>

using G2lib::real_type;
using G2lib::int_type;
using namespace std;

int
main() {

  G2lib::ClothoidCurve C;
  real_type x0     = 0;
  real_type y0     = 0;
  real_type theta0 = 0.174533;
  real_type kappa0 = -0.8;
  real_type dk     = 0;// 0;
  real_type L      = 40;
  C.build( x0, y0, theta0, kappa0, dk, L );

  real_type s = 0;
  real_type stop = 40;
  real_type step = 1;

  while(s <= stop)
  {
    real_type x,y,kappa,theta;
    C.evaluate(std::max(0.0,s-0.1),theta,kappa,x,y);
    cout << std::max(0.0,s-0.1) << "\t" << x << "    \t" << y << "\n";
    s += step;
  }

  return 0;
}
