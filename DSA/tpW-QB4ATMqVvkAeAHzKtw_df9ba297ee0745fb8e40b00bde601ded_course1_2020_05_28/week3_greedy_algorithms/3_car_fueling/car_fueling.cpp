#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here

    int fuel_left = tank;
    // stops.push_back(dist);
    int count = 0, n=stops.size();


    if(tank >= stops[n-1]){
        return 0;
    }

    if(fuel_left < stops[0]){
        return -1;
    }
    fuel_left -=stops[0];
    count++;

    
    for(int i=0; i<n-1; i++){
        if(fuel_left < stops[i+1] - stops[i]){
            if(stops[i+1] - stops[i]>tank){
                return -1;
            }
            fuel_left = tank;
            count++;
            continue;
        }
        else{
            fuel_left -=stops[i+1] - stops[i];
        }
    }

    if(fuel_left <  dist-stops[n-1] )
        if(tank >=dist - stops[n-1]) count++;
        else return -1;
    // else
    //     count++;

    return count;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
