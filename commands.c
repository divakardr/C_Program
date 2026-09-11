#include <stdio.h>

int main() {

    int row = 2;
    int col = 2;

    char direction;
    int steps;

    int n;

    printf("Enter number of commands: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        printf("Enter direction and steps: ");
        scanf(" %c %d", &direction, &steps);

        if (direction == 'U') {
            if (row - steps >= 0) {
                row = row - steps;
            }
        }

        else if (direction == 'D') {
            if (row + steps <= 4) {
                row = row + steps;
            }
        }

        else if (direction == 'L') {
            if (col - steps >= 0) {
                col = col - steps;
            }
        }

        else if (direction == 'R') {
            if (col + steps <= 4) {
                col = col + steps;
            }
        }

        else {
            printf("Invalid direction!\n");
        }
    }

    printf("Final Position: (%d, %d)\n", row, col);

    return 0;
}