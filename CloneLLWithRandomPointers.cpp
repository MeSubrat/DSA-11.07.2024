//ONLY THE ALGORITHM I CAN WRITE CAUSE I DON'T KNOW HOW TO CREATE A LL WITH RANDOM POINTERS.

//INSERT NODES IN BETWEEN
void insertNode(Node* head)
{
    Node* temp=head;
    whiel(temp!=NULL)
    {
        Node* copyNode=new Node(-1);
        copyNode->next=temp->next;
        temp->next=copyNode;
        temp=temp->next->next;
    }
}

void connectRandomPointers(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        Node* copyNode=temp->next;
        copyNode->random=temp->random->next;
        temp=temp->next->next;
    }
}

Node* conectNextPointers(Node* head){
    Node* dNode=new Node(-1);
    Node* res=dNode;
    Node* temp=head;
    while(temp!=NULL)
    {
        res->next=temp->next;
        temp->next=temp->next->next;
        res=res->next;
        temp=temp->next;
    }
    return dNode->next;
}

//TC: O(3N)
//SC: 0(N);