class Solution{

    public:
    bool issubstring(string s2, string s1)
    {
        int x = s1.length();
        int y = s2.length();
   
 
    for (int i = 0; i <= x - y; i++) {
        int j;
 
        for (j = 0; j < y; j++)
            if (s1[i + j] != s2[j])
                break;
 
        if (j == y) 
            return true;
    }
 
    return false; 
    }

    int repeatedStringMatch(string A, string B) 
    {
        int ans = 1;
     
    string S = A;
    
    while(S.size() < B.size())
    {
        S += A;
        ans++;
    }
    
    if (issubstring(B, S)) return ans;
    
    if (issubstring(B, S+A))
        return ans + 1;
    return -1;
    }
  
};
