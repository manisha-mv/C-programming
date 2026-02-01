#include <stdio.h>

int main() {
    int totalData;
    scanf("%d", &totalData);

    int n;
    scanf("%d", &n);

    int usage;
    int i = 0;
    int daysUsed = 0;

    while (i < n && totalData > 0) {
        scanf("%d", &usage);

        if (totalData >= usage) {
            totalData = totalData - usage;
            daysUsed++;
        } else {
            totalData = 0;   
            break;
        }

        i++;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}
