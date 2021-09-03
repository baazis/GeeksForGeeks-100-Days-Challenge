class Solution {
  public:
    int getCount(int N) {
    //     code here
    // Time Limit Exceeded
        int i=1,  count = 0;
        while(i<N ){
            int sum=0;
            for(int j=i; j<=(N/2)+1;j++){
                sum +=j;
                if(sum == N) {count++; continue;}
                else if(sum > N) continue;
            }
            i++;
        }
    }
};
