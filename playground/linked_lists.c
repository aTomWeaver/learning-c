#include <stdio.h>

struct node {
    int val;            // value of node
    struct node* next;  // pointer to next node
};
typedef struct node node_t; // typedef for simplicity

void print_vals_in_list(node_t *head);

int main()
{
    node_t n1, n2, n3;
    node_t *HEAD;

    n1.val = 101;
    n2.val = 202;
    n3.val = 303;

    HEAD = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    print_vals_in_list(HEAD);

    return 0;
}

/* assumes head node has no value */
void print_vals_in_list(node_t *head)
{
    node_t *cur;                            // create ptr for walking
    cur = head;                             // set ptr to head node
    printf("Value:\t%d\n", cur->val);       // print val of head node
    while ((cur = cur->next) != NULL) {     // set ptr to addr of "next" node
        printf("Value:\t%d\n", cur->val);   // print value of node
    }
}
