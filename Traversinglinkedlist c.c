#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *root, *temp, *p;
    int value, n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of nodes must be greater than 0.\n");
        return 0;
    }

    // Create the first node
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter value for node 1: ");
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;
    
    root = temp; // Root points to the first node
    p = temp;    // p is used to traverse to the end

    // Loop to create remaining n-1 nodes
    // ERROR FIX 1: Removed the semicolon after the for loop
    for (i = 2; i <= n; i++) { 
        temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter value for node %d: ", i);
        scanf("%d", &value);
        
        temp->data = value;
        temp->next = NULL;
        
        p->next = temp; // Link previous node to new node
        p = temp;       // Move p to the new last node
    }

    // ERROR FIX 2: Moved the printing logic INSIDE main (before the closing brace)
    printf("\nLinked List Data:\n");
    p = root;
    while (p != NULL) { 
        printf("%d\n", p->data);
        p = p->next;
    }

    // Optional: Free memory here in a real application
    
    return 0;
} // Main function ends here