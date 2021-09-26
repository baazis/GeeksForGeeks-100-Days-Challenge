class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n = txt.length();
	    //store pattern in map
	    unordered_map<char,int> mp;
	    for(auto x: pat){
	        mp[x]++;
	    }
	    int c = mp.size();
	    int k = pat.length();
	    int ans = 0;
	    int i=0,j=0;
	    //sliding window approach
	    while(i<n){
	        if(mp.find(txt[i]) != mp.end()){
	            mp[txt[i]]--;
	            if(mp[txt[i]] == 0)
	            c--;
	        }
	        if(i-j+1 < k)
	        i++;
	        else if(i-j+1 == k){
	            if(c == 0)
	            ans++;

	            if(mp.find(txt[j]) != mp.end()){
	                mp[txt[j]]++;
	                if(mp[txt[j]] == 1)
	                c++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};
