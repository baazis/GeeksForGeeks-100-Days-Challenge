      class Solution {
      public:
          vector<int> factorial(int N){
              // code here
              vector<int> result = {1};
              // result.push_back(1);
              for(int i = 1; i<=N;i++){
                  int carry = 0;
                  // this j loop will run as many times the size of array
                  for(int j = 0; j< result.size();j++){
                      int cal = result[j]*i + carry;
                      result[j] = cal % 10;
                      carry = cal /10;

                  }
                  // after previous for loop ends this while loop 
                  // checks for carry and push in array if not equal to 0
                  while(carry){
                      result.push_back(carry%10);
                      carry /=10;
                  }
              }
              // in loop we were storing backwards so reversing it before sending
              reverse(result.begin(), result.end());
              return result;
          }

      };
