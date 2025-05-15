#include <iostream>
#include <vector>
#include <string>

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long sum = 0;
    for (int ele : arr) sum += ele;
    cout << sum << endl;
    return 0;
} 
