class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int x=0;
        int m=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==m){
                x++;

            }else{
                m=nums[i];


            }
        }
        return x;
        
    }
};