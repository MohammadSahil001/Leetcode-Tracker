class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int f=nums[i];
            for(int j=i+1;j<nums.size();j++){
                int s=nums[j];
                sum=f+s;
                if(sum==target){
                    ans.push_back(i);
                    ans.push_back(j);

                }

            }
        }
        return ans;
        
    }
};