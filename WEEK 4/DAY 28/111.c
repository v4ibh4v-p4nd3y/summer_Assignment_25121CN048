//Program to Create ticket booking system
#include <stdio.h>
void main() {
    int totalSeats = 50;// Total number of seats available
    int choice, tickets;
    // Menu-driven interface for ticket booking operations
    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Handle user choice for ticket booking operations
        switch(choice) {
            // Case for booking tickets
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);
                if(tickets <= totalSeats) {
                    totalSeats -= tickets;
                    printf("%d ticket(s) booked successfully!\n", tickets);
                    printf("Remaining Seats: %d\n", totalSeats);
                } else {
                    printf("Sorry! Only %d seats are available.\n", totalSeats);
                }
                break;
                //Case for checking available seats
            case 2:
                printf("Available Seats: %d\n", totalSeats);
                break;
            case 3:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 3);
}