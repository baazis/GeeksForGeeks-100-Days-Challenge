class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {   
        
        unordered_map <int, int> Mapp;
        for(int i=0; i<size;i++){
            Mapp[a[i]]++;
        }
        int cnt = 0;
        for(auto i:Mapp){
            if(i.second > size/2) {
                cnt =1;
                return i.first; break;
            }
        } if(cnt == 0) return -1;
    }
    
};
