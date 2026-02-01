#include <stdio.h>

int main() {
    int n_orders;
    scanf("%d", &n_orders);

    int i = 0;
    int order;
    int success_orders = 0;
    int cancel_orders = 0;

    while (i < n_orders) {
        scanf("%d", &order);

        if (order == 1) {
            success_orders++;
        } else if (order == 0) {
            cancel_orders++;
        }

        i++;
    }

    printf("Successful: %d\n", success_orders);
    printf("Cancelled: %d\n", cancel_orders);

    if (cancel_orders > success_orders) {
        printf("Status: Risk");
    } else {
        printf("Status: Safe");
    }

    return 0;
}
