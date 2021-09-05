class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int> > matcop;
        // for(int i=0; i<n;i++){
        //     for(int j=0; j<m;j++){
        //         matcop[i][j]= matrix[i][j];
                
        //     }
        // }
        matcop = matrix;
        
        for(int i=0; i<n;i++){
            
            for(int j=0; j<m;j++){
                if (matcop[i][j] == 0){
                    if(i-1 >=0){ 
                        matrix[i][j]  +=  matcop[i-1][j];
                         matrix[i-1][j] =0;}
                         
                    if(i+1 < n){ 
                        matrix[i][j]  +=  matcop[i+1][j];
                        matrix[i+1][j] =0;}
                         
                    if(j-1 >=0){ 
                        matrix[i][j]  +=  matcop[i][j-1];
                         matrix[i][j-1] =0;}
                         
                    if(j+1 < m){ 
                        matrix[i][j]  +=  matcop[i][j+1];
                         matrix[i][j+1] =0;}

                }
                
                
            }
        }
        
        
    }
};
