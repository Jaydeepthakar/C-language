#include <stdio.h>

int main() {
    int choice;


        printf("Telecom Call Service Conversation\n");
        printf("1. Start Call\n");
        printf("2. End Call\n");
        printf("3. Mute Call\n");
        printf("4. Unmute Call\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Starting call...\n");
                break;
            case 2:
                printf("Ending call...\n");
                break;
            case 3:
                printf("Call muted...\n");
                break;
            case 4:
                printf("Call unmuted...\n");
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }

    return 0;
}
