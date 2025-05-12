#include <stdio.h>

int main()
{
    char name[50];
    int age;
    char sex[15];
    char address[200];
    char contact[14];
    char email[30];

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your Age: ");
    scanf("%d", &age);
    getchar(); // To consume the newline character left by scanf

    printf("Enter your Sex: ");
    fgets(sex, sizeof(sex), stdin);

    printf("Enter your Address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter your Phone Number: ");
    fgets(contact, sizeof(contact), stdin);

    printf("Enter your Email Address: ");
    fgets(email, sizeof(email), stdin);

    printf("\n--- User Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Sex: %s", sex);
    printf("Address: %s", address);
    printf("Phone Number: %s", contact);
    printf("Email: %s", email);

    return 0;
}