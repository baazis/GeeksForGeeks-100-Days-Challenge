class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {
        // Your code here
        //create a hashmap to store sum at each index
        unordered_map<int,int> mp;
        int sum=0,count=0,k;
        for(int i=0;i<n;i++){
            sum += A[i];
            //take size of array if sum is 0
            if(sum == 0)
            count=i+1;
            //if sum exists in map then size of subarray
            // with sum 0 is idx-(prev_sum_idx+1)
            if(mp.find(sum) == mp.end())
            mp[sum]=i;
            else{
                k=mp[sum];
                count=max(count,i-k);
            }
        }
        return count;
    }
};
