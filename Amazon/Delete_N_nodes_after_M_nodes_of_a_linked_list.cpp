void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        Node *temp=head,*prev=NULL;
        int t1=M,t2=N;
        while(temp!=NULL){
         if(t1!=0){
            --t1;
            prev=temp;
            temp=temp->next;
            }
            else{
                if(t2==0){
                    t1=M;
                    continue;
                }
                --t2;
                prev->next=temp->next;
                temp=temp->next;
                if(t2==0){
                    t1=M;
                    t2=N;
                } 
            }
        }
    }
