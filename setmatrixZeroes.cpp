class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> a1,a2;
        for(int i=0; i<matrix.size();i++){           
            for(int j=0; j<matrix[i].size();j++){
                if(matrix[i][j]==0) {
                    a1.insert(i);
                    a2.insert(j);
                }
            }
        }

        for(int i=0; i<matrix.size();i++){           
            for(int j=0; j<matrix[i].size();j++){
                if(a1.count(i) || a2.count(j)) {
                    matrix[i][j]=0;
                }
            }
        }

    }
};
