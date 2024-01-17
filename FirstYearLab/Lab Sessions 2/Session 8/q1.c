#include <stdio.h>
#include <string.h>

typedef struct mobile_info
{
    char brand[20];
    int quantity;
    int price;
} mobile;

int main()
{
    printf("Yogesh Kumar Bhatt");
    int choice, count = 0;
    char mob[20];
    mobile mobile[20];
    printf("\nMenu\n1. Storing\n2. Searching\n3. Exit");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice == 3)
            return 0;
        if(choice == 1)
        {
            printf("\nMobile Brand: ");
            scanf("%s", &mobile[count].brand);
            
            printf("\nQuantity: ");
            scanf("%d", &mobile[count].quantity);

            printf("\nPrice (Rs):");
            scanf("%d", &mobile[count].price);

            count++;
        }
        if(choice == 2)
        {
            printf("\nEnter Mobile Brand to search: ");
            scanf("%s", &mob);

            for(int i = 0; i < 20; i++)
            {
                if(strcmp(mobile[i].brand , mob) == 0)
                {
                    printf("\nStock in hand: %d\n",mobile[i].quantity);
                    printf("\nTotal Cost of Inventory(Rs): %d\n",(mobile[i].price * mobile[i].quantity));
                }
            }
            
        }
    }while(choice != 3);
}