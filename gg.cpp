
    void delte(int key)
    {
            temp = head;
            while(temp->next != head)
            {
                if(temp->next->value == key)
                {
                    temp2 = temp;
                    temp = temp->next;
                    temp2->next=temp->next ;
                    delete temp;
                    temp=NULL;
                    return;
                }
                temp = temp->next;
            }
            if(temp->next == head && temp->value == key)
            {
                temp2 = temp;
                temp = temp->next;
                delete temp2;
                temp2 = NULL;
            }
    }
};
