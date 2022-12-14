#include <stdio.h>
#include <string.h>

typedef struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
} ads;
int main()
{
    ads vivek;
    vivek.houseno = 101;
    vivek.block = 1;
    strcpy(vivek.city, "Budaun");
    strcpy(vivek.state, "Uttar Pradesh");

    printf("House No.: %d\n", vivek.houseno);
    printf("Block No.: %d\n", vivek.block);
    printf("City: %s\n", vivek.city);
    printf("State: %s\n\n", vivek.state);

    ads dakshita;
    dakshita.houseno = 101;
    dakshita.block = 2;
    strcpy(dakshita.city, "Budaun");
    strcpy(dakshita.state, "Uttar Pradesh");

    printf("House No.: %d\n", dakshita.houseno);
    printf("Block No.: %d\n", dakshita.block);
    printf("City: %s\n", dakshita.city);
    printf("State: %s\n\n", dakshita.state);

    ads om;
    om.houseno = 101;
    om.block = 3;
    strcpy(om.city, "Budaun");
    strcpy(om.state, "Uttar Pradesh");

    printf("House No.: %d\n", om.houseno);
    printf("Block No.: %d\n", om.block);
    printf("City: %s\n", om.city);
    printf("State: %s\n\n", om.state);

    ads aditya;
    aditya.houseno = 101;
    aditya.block = 1;
    strcpy(aditya.city, "Lucknow");
    strcpy(aditya.state, "Uttar Pradesh");

    printf("House No.: %d\n", aditya.houseno);
    printf("Block No.: %d\n", aditya.block);
    printf("City: %s\n", aditya.city);
    printf("State: %s\n\n", aditya.state);

    ads shashwat;
    shashwat.houseno = 101;
    shashwat.block = 1;
    strcpy(shashwat.city, "Vanarasi");
    strcpy(shashwat.state, "Uttar Pradesh");

    printf("House No.: %d\n", shashwat.houseno);
    printf("Block No.: %d\n", shashwat.block);
    printf("City: %s\n", shashwat.city);
    printf("State: %s\n\n", shashwat.state);
    return 0;
}
