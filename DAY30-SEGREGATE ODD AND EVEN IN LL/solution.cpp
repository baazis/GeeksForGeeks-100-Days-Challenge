class Solution{
public:
    Node* divide(int N, Node *head){
         Node*oddstart=NULL;
       Node*oddend=NULL;
       Node*evenstart=NULL;
       Node*evenend=NULL;
       Node*temp=head;
       while(temp!=NULL){
           if(temp->data%2==0){
               if(evenstart==NULL){
                   evenstart=temp;
                   evenend=temp;
               
               }else{
                   evenend->next=temp;
                   evenend=temp;
               }
           }
           else{
               if(oddstart==NULL){
                   oddstart=temp;
                   oddend=temp;
               }
               else{
                   oddend->next=temp;
                   oddend=temp;
               }
           }
           temp=temp->next;
       }
       
       if(oddstart!=NULL&& evenend!=NULL){
           evenend->next=oddstart;
           oddend->next=NULL;
           return evenstart;
       }
       if(oddstart==NULL && evenstart!=NULL){
           evenend->next=NULL;
           return evenstart;
       }
       if(oddstart!=NULL && evenstart==NULL){
           oddend->next=NULL;
           return oddstart;
       }
       else
       return evenstart;
    }
};