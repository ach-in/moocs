#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  double tot_weight = 0;
  // write your code here

  vector<pair<double, double>> v(values.size());
  for(int i=0; i<weights.size(); i++){
    v[i].first = double(values[i]) / double(weights[i]);
    v[i].second = weights[i];
  }

  sort(v.begin(), v.end());
  for(int i=weights.size()-1; i>-1; i--){
    if(capacity-tot_weight < v[i].second){
      value += v[i].first * (double(capacity) - tot_weight);
      // cout<<v[i].first<<" ";
      break;
    }
    else{
      value += v[i].first * v[i].second;
      tot_weight += v[i].second;
    }
  }

  return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
