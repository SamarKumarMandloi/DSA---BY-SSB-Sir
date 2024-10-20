#include<iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k;

    cout << "Enter value of k: ";
    cin >> k;

    cout << "The " << k << "th largest element is: " << findKthLargest(nums, k) << endl;

    return 0;
}

