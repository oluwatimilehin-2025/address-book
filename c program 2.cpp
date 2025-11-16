#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0;
    int choice;

    do {
        printf("\n=== ADDRESS BOOK ===\n");
        printf("1. Add Contact\n2. View Contacts\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter name: ");
            scanf(" %[^\n]", contacts[count].name);
            printf("Enter phone: ");
            scanf("%s", contacts[count].phone);
            count++;
        } else if(choice == 2) {
            printf("\n--- CONTACTS ---\n");
            for(int i=0; i<count; i++) {
                printf("%d. %s - %s\n", i+1, contacts[i].name, contacts[i].phone);
            }
        } else if(choice != 3) {
            printf("Invalid choice!\n");
        }
    } while(choice != 3);

    return 0;
}
