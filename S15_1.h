#pragma once
#include <iostream>
#include <algorithm>
#include <vector>;
using namespace std;
class S15_1
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int third = length - 1;
        for (int first = 0; first < length; first++) {
            if (first == 0 || nums[first]!=nums[first-1]) {
                for (int second = first + 1; second < length; second++) {
                    if (nums[second] != nums[second - 1]) {
                        while ((nums[first] + nums[second] + nums[third])>0) {
                            third--;
                        }
                        if ((nums[first] + nums[second] + nums[third]) == 0) {
                            result.push_back({ nums[first],nums[second], nums[third] });
                        }
                    }
                }
            }
        }
        return result;
    }
    void printResult(vector<vector<int>>& result) {
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << ' ' << result[i][j];
            }
            cout << '\n';
        }

    }
    void printVector(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            cout << " " << *it;
        }
        cout << "\n";
        for (int i=0; i < nums.size(); i++) {
            cout << " " << nums[i];
        }
        cout << "\n";
    }
};