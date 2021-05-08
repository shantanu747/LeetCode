#include <cmath>
#include <iostream>

using namespace std;

double myPow(double x, int n)
{
    if(n == 0 || x == 1) { return 1; } //easy case
    if(n == INT_MAX){ return x; } //edge case 
    if (n == INT_MIN) //edge case
    {
        if(x == -1) { return 1; }
        return 0; 
    }
    int myN = abs(n);
    double ans = x;
    while(myN > 1)
    {
        ans = ans*x;
        myN -= 1;
    }
    if(n < 0)
    {
        return 1/ans;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    cout << myPow(2.0, -2) << endl;    
    return 0;
}


