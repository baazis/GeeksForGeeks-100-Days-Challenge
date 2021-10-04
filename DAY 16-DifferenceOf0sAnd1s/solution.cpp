class Solution{
public:	
	int maxSubstring(string s)
	{
	    int sum =0;
	    int ans=0;
	    for(int i=0; i<s.length(); i++)
	     {  
	         if(s[i] == '0')
	           sum += 1;
	         else if(s[i] == '1')
	           sum -=1;
	        if(sum < 0)
	           sum =0;
	         ans = max(ans,sum);
	     }
	     if(ans!=0)
	         return ans;
	     
	     else
	        return -1;
	}
};