#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;


    int temp_int;

    long long previous = 0;
    long long current  = 1;
    int count = 0;
    string s = "01", temp;

    vector<pair<int, int>> v(n,make_pair(0, -1));

    v[1].first = 1; v[1].second = 1;
    v[0].second = 0;
    for(int i=2; i<=n; i++){
        v[i].first = (v[i-1].first%m + v[i-2].first%m)%m;
        // v[i].second = v[i].first%m;


        if(v[i-1].second == 0 && v[i].second == 1){
            // cout<<"here"<<i<<"\n";
            return v[n%(i-1)].second;
        }
    }





    // for (long long i = 0; i < n - 1; ++i) {
    //     long long tmp_previous = previous;
    //     previous = current;
    //     current = tmp_previous + current;
    // }

    return (v[n].second);
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
