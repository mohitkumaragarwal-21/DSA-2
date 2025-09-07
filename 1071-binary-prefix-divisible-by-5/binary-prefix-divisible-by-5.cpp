class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
    int remainder = 0;  // track number mod 5
    
    for (int bit : nums) {
        remainder = ((remainder << 1) + bit) % 5;  // append new bit
        ans.push_back(remainder == 0);
    }
    
    return ans;

    }
};