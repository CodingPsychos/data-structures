struct list_node   {
    int data;
    list_node *next;
};

struct list {
    list_node* head;
    list_node* tail;
    int count;
};

list* create_list() {
    list* l = malloc(sizeof(list));
    l->head = NULL;
    l->tail = NULL;
    l->count = 0;
    return l;
}

list_node *list_new_node(int data)
{
    list_node *temp = malloc(sizeof(list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void list_print(list* l)
{
    list_node *p = l->head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void list_print_in_reverse(list* l)
{
    list_print_in_reverve_recursive_part(l->head);
}

void list_print_in_reverve_recursive_part(list_node* head)  {
    if (head == NULL)
        return;
    list_print_in_reverve_recursive_part(head->next);
    printf("%d  ", head->data);
}

void list_push(list* l, int data)
{
    list_node *new_node = list_new_node(data);

    if ((l->head) == NULL)
    {
        (l->head) = new_node;
        (l->tail) = (l->head);
    }
    else if ((l->head)->next == NULL)
    {
        (l->head)->next = new_node;
        (l->tail)->next = (l->head)->next;
        (l->tail) = (l->tail)->next;
    }
    else
    {
        (l->tail)->next = new_node;
        (l->tail) = (l->tail)->next;
    }
    (l->count)++;
}

int list_pop(list* l)
{
    int res = 0;
    if (l->head == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else if ((l->head)->next == (l->tail))
    {
        res = (l->tail)->data;
        (l->head)->next = NULL;
        (l->tail) = (l->head);
        (l->count)--;
    }
    else
    {
        res = (l->tail)->data;
        list_node *p = (l->head);
        while (p->next->next != NULL)
            p = p->next;
        (l->tail) = p;
        (l->tail)->next = NULL;
        (l->count)--;
    }
    return res;
}

void list_shift(list* l, int data)
{
    if ((l->head) == NULL)
    {
        (l->head) = list_new_node(data);
        (l->tail) = (l->head);
    }
    else
    {
        list_node *p = list_new_node(data);
        p->next = (l->head);
        (l->head) = p;
    }
    (l->count)++;
}

int list_unshift(list* l)
{
    int res = 0;
    if ((l->head) == NULL)
    {
    }
    else if (l->head == l->tail)
    {
        res = (l->head)->data;
        (l->head) = NULL;
        (l->tail) = NULL;
        (l->count)--;
    }
    else
    {
        res = (l->head)->data;
        (l->head) = (l->head)->next;
        (l->count)--;
    } 
    return res;
}

int list_insert(list* l, int p, int n)
{
    list_node *temp = l->head;
    list_node *new_node = list_new_node(n);
    int count = 0;
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    (l->count)++;
    return new_node->data;
}

int list_delete(list* l, int p)
{
    list_node *temp = l->head;
    int count = 1;
    if (p == 1)
        list_unshift(l);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    (l->count)--;
    return p;
}

void list_reverse(list* l)
{
    list_node *currn = (l->head);
    list_node *prevn = NULL;
    list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (l->head) = prevn;
}

void list_clear(list* l) 
{ 
   list_node* current = l->head; 
   list_node* next; 
  
   while (current != NULL)  
   { 
       next = current->next; 
       free(current); 
       current = next; 
   } 
    l->head = NULL; 
} 
