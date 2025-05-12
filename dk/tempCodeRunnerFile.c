#include <stdio.h>
int main()

{
    char name[50];
    int age;
    char sex[15];
    char address[200];
    int contact[14];
    char email[30];

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your Age: ");
    scanf("%d", &age);
    getchar();

    printf(" Enter your sex: ");
    fgets(sex, sizeof(sex), stdin);

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter your number: ");
    scanf("%d", &contact);

    printf("Enter your mail Address: ");
    fgets(email, sizeof(email), stdin);

    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Sex: %s",  sex);
    printf("Address: %s", address);
    printf("Phone Number: %d", contact);
    printf("Email: %s", email);
    return 0;
}