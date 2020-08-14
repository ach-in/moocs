#include <iostream>

#include<bits/stdc++.h>

long long int gcd_naive(int a, int b) {
  if(a == 0){
    return b;
  }
  else if(b == 0){
    return a;
  }
  else if(a>b){
    // int div = a/b;
    gcd_naive(std::max(b, a%b), std::min(b, a%b));
  }
  else if(a==b){
    return a;
  }
  else{
    gcd_naive(b,a);
  }
  
  // return current_gcd;
}

long long lcm_naive(int a, int b) {
  // for (long l = 1; l <= (long long) a * b; ++l)
  //   if (l % a == 0 && l % b == 0)
  //     return l;

  return (long long) a * b / gcd_naive(a,b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
