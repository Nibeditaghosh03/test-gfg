class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;

        int long long expectedSum = (long long) n * (n + 1) / 2;

        int long long actualSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            actualSum += arr[i];
        }

        return (int) expectedSum - actualSum;
    }
};