#include <stdio.h>
int main()
{
    int vajok, vajjo, vagfol, vagses;

    printf("Enter vajok:");
    scanf("%d", &vajok);

    printf("Enter vajjo:");
    scanf("%d", &vajjo);

    vagfol = vajjo / vajok;
    vagses = vajjo - (vajok*vagfol);

    printf("Vagfol holo: %d\n", vagfol);

    printf("Vagses holo: %d\n", vagses);


    return 0;
}
