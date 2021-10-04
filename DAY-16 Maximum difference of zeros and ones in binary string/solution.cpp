class Solution{
public:
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int arr[S.length()];
	    for(int i=0;i<S.length();i++){
	        if(S[i] == '1')
	        arr[i] = -1;
	        if(S[i] == '0')
	        arr[i] = 1;
	    }
	    int currSum=0,maxSum=INT_MIN;
	    for(int i=0;i<S.length();i++){
	        currSum += arr[i];
	        if(currSum > maxSum)
	        maxSum = currSum;
	        if(currSum < 0)
	        currSum = 0;
	    }
	    return maxSum;
	}
};
