#include <iostream>
#include<bits/stdc++.h>

int gcd_naive(int a, int b) {
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

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
