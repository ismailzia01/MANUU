#include <stdio.h>

struct car {
    int fuel_tank_capacity;
    int seating_capacity;
    float city_mileage;
};
int main()
{
    struct car c[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("Enter car %d fuel tank capacity ", i+1);
        scanf("%d", &c[i].fuel_tank_capacity);
        printf("Enter car %d seating capacity ", i+1);
        scanf("%d", &c[i].seating_capacity);
        printf("Enter car %d city mileage ", i+1);
        scanf("%f", &c[i].city_mileage);
    }
    printf("\n");
    for(i = 0; i < 2; i++)
    {
        printf("\nCar %d details :", i+1);
        printf("\nFuel tank capacity : %d", c[i].fuel_tank_capacity);
        printf("\nSeating capaity : %d", c[i].seating_capacity);
        printf("\nCity mileage : %f\n", c[i].city_mileage);
    }
    return 0;
}