#include<bits/stdc++.h>
using namespace std;

struct node
{
    int head;

     struct node* next;

};

void push_node(struct node** head, int new_data)
{

    struct node* new_node = (struct node*) malloc(sizeof(struct node));


}
int main()
{
   //printf("Hasan");

    struct node* head = NULL;

    push_node(&head,1);
    push_node(&head,2);

    return 0;
}
