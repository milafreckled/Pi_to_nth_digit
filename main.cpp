#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ios>
#include <sstream>
using namespace std;
using std::setprecision;
using std::streamsize;
long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
int main()
{   setlocale(0,"");
    int n;
    double pi=0;
    cout<<"Give number of digits in pi";
    cin>>n;
    pi=atan(1)*4;
    streamsize prec=cout.precision();
    cout<<setprecision(n+1);
    cout<<pi;
    return 0;
}
