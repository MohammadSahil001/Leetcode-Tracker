class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        int n=grid.size();
        int actsum=0;
        int expsum=0;
        int a,b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];

                }else{
                    s.insert(grid[i][j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 actsum+=grid[i][j];
            }
        }
            expsum=n*n*(n*n+1)/2;
            b=expsum+a-actsum;

        
        return {a,b};
        
    }
};