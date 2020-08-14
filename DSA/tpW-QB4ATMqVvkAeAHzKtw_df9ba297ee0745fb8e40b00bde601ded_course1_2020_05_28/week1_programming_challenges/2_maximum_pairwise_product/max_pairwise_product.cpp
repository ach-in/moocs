#include <iostream>
#include <vector>
#include <algorithm>

long long int MaxPairwiseProduct(std::vector<long long int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    sort(numbers.begin(), numbers.end());

    return numbers[n-1]*numbers[n-2];
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
