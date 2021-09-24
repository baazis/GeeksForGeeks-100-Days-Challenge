class Solution{
    public:
    int search(int arr[], int x, int n)
    {
        for (int i = 0; i < n; i++)
            if (arr[i] == x)
                return i;
        return -1;
    }
    void solve(int in[], int pre[], int n, vector<int> &v)
    {
        int root = search(in, pre[0], n);
        if(root == -1) return;

        if (root != 0)
            solve(in, pre+1, root, v);

        if (root != n - 1)
            solve(in+root+1, pre+root+1, n-root-1, v);

        v.push_back(pre[0]);
    }
    bool checktree(int preorder[], int inorder[], int postorder[], int N)
    {
    	// Your code goes here
    	vector<int> v;
    	solve(inorder,preorder,N,v);
    	for(int i=0;i<N;i++){
    	    if(v[i] != postorder[i])
    	    return 0;
    	}
    	return 1;

    }

};
