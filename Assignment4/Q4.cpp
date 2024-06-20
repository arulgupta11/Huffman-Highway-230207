void rotate(listnode*& head,int k){
    listnode* test=head;
    int length=1;
    while(test->next!=NULL){
        length+=1;
        test=test->next;
    }
    k=k%length;
    listnode* head2=head;
    for (int i=0; i<=k; i++){
        head=head->next;
    }
    listnode* head3=head;
    while (head3->next!=NULL){
        head3=head3->next;
    }
    head3->next=head2;
    while (head2->next!=head){
        head2=head2->next;
    }
    head2->next=NULL;
    
}
