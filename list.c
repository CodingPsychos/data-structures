struct list_node
{
    int data;
    list_node *next;
};

list_node *list_new_node(int data)
{
    list_node *temp = malloc(sizeof(list_node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void list_print(list_node *head)
{
    list_node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void list_print_in_reverse(list_node *head)
{
    if (head == NULL)
        return;
    list_print_in_reverse(head->next);
    printf("%d  ", head->data);
}

void list_push(list_node **head, list_node **tail, int data)
{
    list_node *new_node = list_new_node(data);

    if ((*head) == NULL)
    {
        (*head) = new_node;
        (*tail) = (*head);
    }
    else if ((*head)->next == NULL)
    {
        (*head)->next = new_node;
        (*tail)->next = (*head)->next;
        (*tail) = (*tail)->next;
    }
    else
    {
        (*tail)->next = new_node;
        (*tail) = (*tail)->next;
    }
}

int list_pop(list_node **head, list_node **tail)
{
    int res = 0;
    if (*head == NULL)
    {
    }
    else if (*head == *tail)
    {
        res = (*head)->data;
        (*head) = NULL;
        (*tail) = NULL;
    }
    else if ((*head)->next == (*tail))
    {
        res = (*tail)->data;
        (*head)->next = NULL;
        (*tail) = (*head);
    }
    else
    {
        res = (*tail)->data;
        list_node *p = (*head);
        while (p->next->next != NULL)
            p = p->next;
        (*tail) = p;
        (*tail)->next = NULL;
    }
    return res;
}

void list_shift(list_node **head, list_node **tail, int data)
{
    if ((*head) == NULL)
    {
        (*head) = list_new_node(data);
        (*tail) = (*head);
    }
    else
    {
        list_node *p = list_new_node(data);
        p->next = (*head);
        (*head) = p;
    }
}

int list_unshift(list_node **head, list_node **tail)
{
    int res = 0;
    if ((*head) == NULL)
    {
    }
    else if (*head == *tail)
    {
        res = (*head)->data;
        (*head) = NULL;
        (*tail) = NULL;
    }
    else
    {
        res = (*head)->data;
        (*head) = (*head)->next;
    }
    return res;
}

int list_insert(list_node **head, list_node **tail, int p, int n)
{
    list_node *temp = *head;
    list_node *new_node = list_new_node(n);
    int count = 0;
    while (count != p - 2)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;

    return new_node->data;
}

int list_delete(list_node **head, list_node **tail, int p)
{
    list_node *temp = *head;
    int count = 1;
    if (p == 1)
        list_unshift(head, tail);
    else
    {
        while (count != p - 1)
        {
            temp = temp->next;
            count++;
        }
    }
    temp->next = temp->next->next;
    return p;
}

void list_reverse(list_node **head)
{
    list_node *currn = (*head);
    list_node *prevn = NULL;
    list_node *nextn = NULL;
    while (currn != NULL)
    {
        nextn = currn->next;
        currn->next = prevn;
        prevn = currn;
        currn = nextn;
    }
    (*head) = prevn;
}

