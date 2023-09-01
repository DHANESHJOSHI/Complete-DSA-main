#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &num)
    {
        int n = num.size();        // Dynamic Array
        vector<int> runningSum(n); // create a Vector to store Running Sum

        int currentSum = 0;

        for (int i = 0; i < n; ++i)
        {
            // Add the current Element to the runnning sum
            currentSum += num[i];
            runningSum[i] = currentSum;
        }
        return runningSum;
    }
};

int main()
{
    Solution solution;
    vector<int> num = {1, 2, 3, 4};
    vector<int> result = solution.runningSum(num);

    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}