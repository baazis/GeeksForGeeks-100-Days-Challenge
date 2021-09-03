class Solution {
  public:
    int getCount(int N) {
    
        int count =0;
        for(int i =1; i<N;i++){
            int a = N;
            a  = a - ((i*(i+1))/2);
            if(a<=0) break;
            // dividing with length
            if(a%(i+1)==0) count++;
        }
        
       return count;
    }
    
};
