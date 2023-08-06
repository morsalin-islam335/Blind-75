#include<bits/stdc++.h>
using namespace std;


duare(double n, double i, double j)
{
    double mid = (i + j) / 2;
    double mul = mid * mid;
 
    // If mid itself is the square root,
    // return mid
    if ((mul == n) || (abs(mul - n) < 0.00001))
        return mid;
 
    // If mul is less than n, recur second half
    else if (mul < n)
        return Square(n, mid, j);
 
    // Else recur first half
    else
        return Square(n, i, mid);
}
 
// Function to find the square root of n
double findSqrt(double n)
{
    double i = 1;
 
    // While the square root is not found
    bool found = false;
    while (!found) {
 
        // If n is a perfect square
        if (i * i == n) {
            return i;
            found = true;
        }
        else if (i * i > n) {
 
            // Square root will lie in the
            // interval i-1 and i
            double res = Square(n, i - 1, i);
            return res;
            found = true;
        }
        i++;
    }
}


int floorSqrt(int n)
{
    if(n == 0) return 0;
    else if( n == 1) return 1;
  return findSqrt(n);

  
    
}
ouble Sq
int main()
{
  int ans = floorSqrt(6);
  cout << ans;
}