class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size() , n=mat[0].size();
        int srow=0,erow=m-1 , scol=0,ecol=n-1;
        vector<int> a;
        while(srow<=erow && scol<=ecol){
            for(int j=scol;j<=ecol;j++){
                a.push_back(mat[srow][j]);
            }
            for(int i=srow+1;i<=erow;i++){
                a.push_back(mat[i][ecol]);
            }
            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                a.push_back(mat[erow][j]);
            }
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol){
                    break;
                }
                a.push_back(mat[i][scol]);

            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return a;
    }
};