#include <stdio.h>

struct node NewNode(struct node lastNode, int val);

struct node {
    int val;
    struct node* next;
};

int main()
{
    struct node first = {1, NULL};
    struct node nxt = NewNode(first, 24);
    struct node last = NewNode(nxt, 48);
    printf("%d\n", first.val);
    printf("%d\n", nxt.val);
    printf("%d\n", last.val);

    return 0;
}

struct node NewNode(struct node lastNode, int val)
{
    struct node newnode = {val, NULL};  // create new node with val
    lastNode.next = &newnode;
    return newnode;
}
