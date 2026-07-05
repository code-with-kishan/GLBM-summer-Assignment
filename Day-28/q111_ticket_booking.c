/*
 * GL Bajaj Summer Assignment — Day 28
 * Problem : Ticket booking system
 * Author  : Kishan Nishad
 */
#include <stdio.h>
#include <string.h>

#define SEATS 10

int main() {
    int seats[SEATS] = {0};
    int choice, seatNo;
    char name[50];
    printf("=== Ticket Booking System (Seats 1-%d) ===\n", SEATS);
    do {
        printf("\n1. Book Seat  2. Cancel Seat  3. View Status  4. Exit\nChoice: ");
        scanf("%d", &choice); getchar();
        switch (choice) {
            case 1:
                printf("Seat number (1-%d): ", SEATS); scanf("%d", &seatNo); getchar();
                if (seatNo < 1 || seatNo > SEATS) printf("Invalid seat.\n");
                else if (seats[seatNo-1]) printf("Seat already booked.\n");
                else { seats[seatNo-1] = 1; printf("Seat %d booked!\n", seatNo); }
                break;
            case 2:
                printf("Seat to cancel: "); scanf("%d", &seatNo);
                if (seatNo < 1 || seatNo > SEATS) printf("Invalid.\n");
                else if (!seats[seatNo-1]) printf("Seat not booked.\n");
                else { seats[seatNo-1] = 0; printf("Cancelled.\n"); }
                break;
            case 3:
                printf("\nSeat Status:\n");
                for (int i = 0; i < SEATS; i++)
                    printf("Seat %2d: %s\n", i+1, seats[i] ? "BOOKED" : "Available");
                break;
            case 4: printf("Thank you!\n"); break;
        }
    } while (choice != 4);
    return 0;
}
