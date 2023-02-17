#include <stdio.h>
#define NUM_NOTES 9

struct Note {
    int denomination;
    int count;
};

void get_notes(int amount, struct Note notes[])
{
    int notes_denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    int temp = amount;

    for (int i = 0; i < NUM_NOTES; i++) {
        notes[i].denomination = notes_denominations[i];
        notes[i].count = temp / notes_denominations[i];
        temp = temp % notes_denominations[i];
    }
}

int main()
{
    int amount;
    struct Note notes[NUM_NOTES];

    printf("Enter the amount: ");
    scanf("%d", &amount);

    get_notes(amount, notes);

    for (int i = 0; i < NUM_NOTES; i++) {
        printf("%d Taka Notes: %d\n", notes[i].denomination, notes[i].count);
    }

    return 0;
}
