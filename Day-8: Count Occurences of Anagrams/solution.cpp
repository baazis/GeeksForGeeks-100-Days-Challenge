// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
          class Solution{
          public:
            int search(string pat, string txt) {
                // code here
                int patlen = pat.length(), txtlen = txt.length();  
                int result =0;
                vector<int> maptxt(26, 0 );  // two vectors to store characters of the strings and keeping their count
                vector<int> mappat(26, 0 );

                // looping till patlen and checking for the first three letters of both pat and txt,if matched result++
                for(int i=0; i<patlen;i++){
                    mappat[pat[i]-'a']++;
                    maptxt[txt[i]-'a']++;
                }
                if(mappat == maptxt) result++;

                //sliding window approach i.e from txt we are checking for (len of pat) chars by adding next char at end and removing a char from back
                for(int i=patlen; i<txtlen;i++){
                    maptxt[txt[i]-'a']++;
                    maptxt[txt[i-patlen]-'a']--;

                    if(maptxt == mappat) result++;
                }

                return result;
            }

          };

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
