class Solution
{
    public:
    int md=INT_MAX;
    int dfs(int start,unordered_map<int,int> arr,unordered_map<int,int> mp,vector<bool>& vis){
        if(arr[start]==0)
        return start;

        vis[start]=true;
        if(md>mp[start])
        md=mp[start];

        return dfs(arr[start],arr,mp,vis);
    }

    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        // code here
        vector<bool> vis(n+1,false);
        unordered_map<int,int> arr;
        unordered_map<int,int> mp;

        for(int i=0;i<p;i++){
            arr[a[i]]=b[i];
            mp[a[i]]=d[i];
            vis[b[i]]=true;
        }

        vector<int> root;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
            root.push_back(i);
            }
            vis[i]=false;
        }

        vector<vector<int>> ans;
        for(int i:root){
            if(!vis[i]){
                md=INT_MAX;
                int x = dfs(i,arr,mp,vis);
                if(i==x)
                continue;
                ans.push_back({i,x,md});
            }
        }
        return ans;
    }
};
