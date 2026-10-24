class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        long long n=grid.size();
        long long actsum=0;
        long long expsum=0;
        long long a,b;
        for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];

                }else{
                    s.insert(grid[i][j]);
                }
            }
        }
        for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                 actsum+=grid[i][j];
            }
        }
            expsum=n*n*(n*n+1)/2;
            b=expsum+a-actsum;

        
        return {(int)a,(int)b};
        
    }
};