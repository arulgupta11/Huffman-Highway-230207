int checkpal(listnode* head){
    listnode* head2=head;
    int c=1;
    for (int i=0; (head2)->next !=NULL ; i++){
        c+=1;
        head2=head2->next;
    }
    listnode* head3=head;
    for (int i=0; i<c/2 ; i++){
        
        head3=head->next;
    }
    int d=0;
    for (int i=0; i=c/2; i++){
        if ((head->data)==(head3->data)){
            d+=1;
            head=head->next;
            head3=head3->next;
        }
    }
    if (d==c/2){
        return 1;
    }
    else {
        return 0;
    }
}
