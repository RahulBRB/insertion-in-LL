// Insert at beginning

struct Node * ptr = (struct Node)malloc(sizeof(struct Node));
ptr->next=head;
head=ptr;
return head;

// Insert between
ptr->next=p->next;
p->next=ptr;

// Insert at end
p->next=ptr;
ptr->next=NULL;

// Insert after a node
ptr->next=q->next;
p->next=ptr;
