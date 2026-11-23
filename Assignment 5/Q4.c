#include <stdio.h>

/*
 * Program: A library charges a fine for every book return late. For first 5 days the fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. WAP to accept no. of days the member is late to return the book and display the fine or appropriate message.
 */
int main()
{
    int days;

    printf("Enter number of days the book is late: ");
    scanf("%d", &days);

    if (days <= 0)
        printf("Book returned on time. No fine.\n");
    else if (days <= 5)
        printf("Fine: 50 paisa\n");
    else if (days <= 10)
        printf("Fine: 1 rupee\n");
    else if (days <= 30)
        printf("Fine: 5 rupees\n");
    else
        printf("Membership cancelled.\n");

    return 0;
}
