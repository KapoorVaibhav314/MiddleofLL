Node* getMiddle(Node* head){
    if(head == NULL || head-> next = NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head -> next;
    while(fast!= NULL){
        fast = fast -> next; //we move it one forward
        //we must check if it is NULL or not as well
        if(fast != NULL){
            fast = fast -> next;
        }
        //slow will move forward only once, unlike fast
        slow = slow -> next;
    }
    return slow;
}
