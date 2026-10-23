class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int> (n,0));
        int k=1;
        vector<int> b;
        int srow=0,scol=0,erow=n-1,ecol=n-1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                v[srow][i]=k++;

            }
            for(int i=srow+1;i<=erow;i++){
                v[i][ecol]=k++;
            }
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow) {
                    break;
                }
                v[erow][i]=k++;
            }
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol){
                    break;
                }
                v[i][scol]=k++;
            }
            srow++;
            scol++;
            ecol--;
            erow--;
        }
        return v;

        
    }
};