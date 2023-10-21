#include <iostream>
#include <cmath>
using namespace std;

float solve( int P, int T, float R, int N) 
{
   float fa;
   fa = P * pow((1 + ( R / (N * 100) )), ( N * T ));
   return fa - P;
}

int main() 
{
   int P = 10000;
   int T = 7;
   float R = 6.25;
   int N = 4;
   cout << "Compound interest for 10,000 with ROI 6.25\% for 7 years and calculating interests quarterly, is: ";
   float result;
   result = solve( P, T, R, N);
   cout << result << endl;
   cout << "Total amount is: " << P + result;
   return 0;
}
