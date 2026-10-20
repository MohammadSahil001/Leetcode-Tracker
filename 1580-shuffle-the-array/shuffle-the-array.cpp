class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);

        }
        vector<int> a;
        for(int i=n;i<nums.size();i++){
            a.push_back(nums[i]);
        }
        vector<int> a1;

        for(int i=0;i<n;i++){
            a1.push_back(ans[i]);
            a1.push_back(a[i]);
        }
        return a1;
    }
};