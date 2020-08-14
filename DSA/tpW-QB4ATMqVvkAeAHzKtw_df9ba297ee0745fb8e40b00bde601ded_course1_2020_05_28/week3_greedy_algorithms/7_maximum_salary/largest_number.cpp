#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using  namespace std;

using std::vector;
using std::string;



int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
} 


string largest_number(const vector<int> &A) {

    vector<string> B(A.size()) ;
    string ans;
    int j=0;
    for(auto i:A){
        if(i%10 !=0)
            B[j] = to_string(i);
        else
            B[j] = to_string(i);
        j++;
    }
    
    sort(B.begin(), B.end(), myCompare);
    for(int i=0; i<A.size(); i++){
        ans += B[i];
    }
    while(ans[0] == 0){
        ans.erase(ans.begin());
    }
    
    return ans;
    
    
}





// string largest_number(vector<string> a) {
//   //write your code here
//   std::stringstream ret;
//   for (size_t i = 0; i < a.size(); i++) {
//     ret << a[i];
//   }
//   string result;
//   ret >> result;
//   return result;
// }

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
