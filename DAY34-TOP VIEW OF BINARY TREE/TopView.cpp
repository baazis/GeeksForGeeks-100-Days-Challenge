class Solution
{
    public:
   
    vector<int> topView(Node *root)
    {
        vector<int>v; 
       if(root==NULL) 
       return v;
       map<int,int>m;  
       queue<pair<Node*,int>>q;  
       q.push({root,0}); 
       while(!q.empty())  
{
   auto it=q.front();  
   q.pop();
   Node* node =it.first; 
   int h =it.second;
   if(m.find(h)==m.end())

 m[h]=node->data;
   if(node->left!=NULL)  
   
   {
       q.push({node->left,h-1});
       
   }
   if(node->right!=NULL)
   {
       q.push({node->right,h+1});
       
   }
}  
for(auto it:m)
{
   v.push_back(it.second);
}
return v;
     
    }

};
