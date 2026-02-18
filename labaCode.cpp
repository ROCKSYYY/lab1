/************************
* Автор: Долинин Н.К.   *  
* Название: Вариант 5   *
*************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double PI = 3.1415926535;
  
  double a, h, d, delta, h0, mu, g, f, F0, F, K, t;
  
  cout << "a = ";
  cin >> a;

  cout << "h = ";
  cin >> h;

  cout << "d = ";
  cin >> d;

  cout << "delta = ";
  cin >> delta;

  cout << "h0 = ";
  cin >> h0;

  cout << "mu = ";
  cin >> mu;

  cout << "g = "; 
  cin >> g;

  f = PI * d * d / 4.0;
  F0 = a * a;
  F = (a - 2.0 * delta) * (a - 2.0 * delta);
  K = sqrt(h0 - delta) - sqrt(h - delta - (h - h0) * (F0 / F));
  t = (2.0 * K) / (mu * f * sqrt(2.0 * g)) * (F0 * F) / (F0 - F);

  cout << "t = " << t << endl;

  return 0;
}
