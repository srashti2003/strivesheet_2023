class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m =matrix[0].size();
        set<int> x,y;
        for(int i=0; i<n;i++){           
            for(int j=0; j<m;j++){
                if(matrix[i][j]==0) {
                    x.insert(i);
                    y.insert(j);
                }
            }
        }

        for(int i=0; i<n;i++){           
            for(int j=0; j<m;j++){
                if(x.count(i)==1 || y.count(j)==1) {
                    matrix[i][j]=0;
                }
            }
        }

    }
};
