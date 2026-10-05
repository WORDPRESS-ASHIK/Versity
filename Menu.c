#include <stdio.h>

int main()
{
    int choice, more;

    do
    {
        printf("1. Chicken Nuggets\n");
        printf("2. Onion Rings\n");
        printf("3. Shawarma\n");
        printf("4. Nachos\n");
        printf("5. Spring Rolls\n");
        printf("6. Potato Chips\n");
        printf("7. Momo\n");
        printf("8. Chotpoti\n");
        printf("9. Fuchka\n");
        printf("10. Halim\n");
        printf("Enter your choice (1-10): ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("You selected Burger.\n");
                break;

            case 2:
                printf("You selected Pizza.\n");
                break;

            case 3:
                printf("You selected Fried Chicken.\n");
                break;

            case 4:
                printf("You selected Pasta.\n");
                break;

            case 5:
                printf("You selected Sandwich.\n");
                break;

            case 6:
                printf("You selected French Fries.\n");
                break;

            case 7:
                printf("You selected Biryani.\n");
                break;

            case 8:
                printf("You selected Noodles.\n");
                break;

            case 9:
                printf("You selected Chicken Wings.\n");
                break;

            case 10:
                printf("You selected Ice Cream.\n");
                break;

            default:
                printf("Invalid choice! Please select 1-10.\n");
        }

        printf("\nDo you want anything else?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter your choice: ");
        scanf("%d", &more);

    } while(more == 1);
    printf("Thank you for ordering!\n");

    return 0;
}