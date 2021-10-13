#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int item1 = 3, item2 = 6, item3 = 8;

    int pass=0, i=1, k;

    int flag , item_1, item_2, item_3;

    int user_pass = 1234, user_item = 1, temp;

    int admin_pass = 2223, admin_masterloop = 1, admin_item=1;

    int total_cost = 0, cost_of_1 = 30, cost_of_2 = 40, cost_of_3 = 50;

    char str[10];

    flag = 9;

    while (flag!=3)
    {

        switch (flag)
        {
        case 1:
            printf("user\n");
            printf("entre the password to sign in \n");
            scanf("%d",&pass);
            if(pass == user_pass)
            {
                printf("\t\t   ***WELCOME TO PIZZA MENU***\n");
                while (i!=0)
                {
                    total_cost = 0;
                    printf("for menu press [1]\t\t for ordering press [2]\t\t for exiting press [3]\n");
                    scanf("%d",&k);
                    switch (k)
                    {
                    case 1:
                        printf("item1: %d\t\t item2: %d\t\t item3: %d\n",item1,item2,item3);
                        break;
                    case 2:
                            item_1 = 0;
                            item_2 = 0;
                            item_3 = 0;
                        while (user_item!=0)
                        {
                            int amount = 0;
                            printf("for item1 press [1]\t\t for item2 [2]\t\t for item3 [3]\t\t for exiting press [4]\n");
                            scanf("%d", &temp);
                            switch (temp)
                            {
                            case 1:
                                printf("how many\n");
                                scanf("%d", &amount);
                                item1 = item1 - amount;
                                if(item1<0){
                                        printf("not enough stock\n");
                                        item1 = item1 + amount;
                                        break;
                                    }else
                                    {
                                        item_1 = item_1 + amount; 
                                    }
                                    total_cost = total_cost + item_1 * cost_of_1;
                                    
                                break;
                            
                            case 2:
                                printf("how many\n");
                                scanf("%d", &amount);
                                item2 = item2 - amount;
                                if(item2<0){
                                        printf("not enough stock\n");
                                        item2 += amount;
                                        break;
                                    }
                                    else
                                    {
                                        item_2 = item_2 + amount;
                                        total_cost = total_cost + item_2 * cost_of_2;
                                    }
                                    
                                break;
                            
                            case 3:
                                printf("how many\n");
                                scanf("%d", &amount);
                                item3 = item3 -amount;
                                
                                if(item3<0){
                                        printf("not enough stock \n");
                                        item3 += amount;
                                        break;
                                    }else
                                    {
                                        item_3 += amount;
                                        total_cost = total_cost + item_3 * cost_of_3;
                                    }
                                    
                                break;
                            
                            case 4:
                                user_item = 0;
                                printf("\t\t   ***summary of your order***\n");
                                printf("item1 : %d          item2 : %d          item3 : %d\n",item_1, item_2, item_3);
                                printf("\n");
                                printf("\t\t    ***total cost of the order is: %d***",total_cost);
                                printf("\n");
                                flag = 9;
                                break;
                            
                            default:
                                printf("wrong input, please re-entre the correct input\n");
                                break;
                            }

                        }
                        break;


                    case 3:
                        i= 0;
                        break;
                    
                    default:
                        printf("wrong input, please re-entre the correct input\n");
                        break;
                    }
                }
                break;
                
            }else
            {
                printf("wrong password, going back to account page\n");
                flag = 9;
            }
            break;   
            

        case 2:
            printf("admin\n");
            printf("entre the password to sign in \n");
            scanf("%d",&pass);
            if(pass == admin_pass)
            {
                printf("\t\t   ***WELCOME TO STOCK MANAGEMENT***\n");
                while (admin_masterloop !=0)
                {
                    printf("for viewing stocks press [1]\t\t for altering stocks press [2]\t\t for exiting press [3]\n");
                    scanf("%d",&k);
                    switch (k)
                    {
                    case 1:
                        printf("item1: %d\t\t item2: %d\t\t item3: %d\n",item1,item2,item3);
                        break;
                    case 2:
                            item_1 = 0;
                            item_2 = 0;
                            item_3 = 0;
                        while (admin_item != 0)
                        {
                            int amount = 0;
                            printf("for item1 press [1]\t\t for item2 [2]\t\t for item3 [3]\t\t for exiting press [4]\n");
                            scanf("%d", &temp);
                            switch (temp)
                            {
                            case 1:
                                printf("how much is to be added\n");
                                scanf("%d", &amount);
                                item1 = item1 + amount;
                                item_1 = item_1 + amount;
                                break;
                            
                            case 2:
                                printf("how much is to be added\n");
                                scanf("%d", &amount);
                                item2 = item2 + amount;
                                item_2 = item_2 + amount;
                                break;
                            
                            case 3:
                                printf("how much is to be added\n");
                                scanf("%d", &amount);
                                item3 = item3 + amount;
                                item_3 += amount;
                                break;
                            
                            case 4:
                                admin_item = 0;
                                printf("\t\t   ***TOTAL NUMBER OF STOCKS***\n");
                                printf("item1 : %d          item2 : %d          item3 : %d\n",item1, item2, item3);
                                printf("\t\t   ***NUMBER OF STOCKS ADDDED***\n");
                                printf("item1 : %d          item2 : %d          item3 : %d\n",item_1, item_2, item_3);
                                flag = 9;
                                break;
                            
                            default:
                                printf("wrong input, please re-entre the correct input\n");
                                break;
                            }

                        }
                        break;


                    case 3:
                        admin_masterloop = 0;
                        break;
                    
                    default:
                        printf("wrong input, please re-entre the correct input\n");
                        break;
                    }
                }
                break;
                
            }else
            {
                printf("wrong password, going back to account page\n");
                flag = 9;
                break;
            }
            break;

        case 3:
            flag = 3;
            break;

        case 0:
            printf("looks like you have written some character in not valid input\n");
            flag = 9;
            break;

        case 9:
            printf("type [1] for user and type [2] for admin and press [3] for exiting the login menu\n");

            fflush(stdin);

            gets(str);
            
            printf("value of string is: %s\n", str);
            
            flag = atoi(str);
            
            printf("value of flag is: %d\n", flag);

            break;
        
        default:
            printf("sorry wrong input\n");
            flag = 9;
            break;
        }

    }

    return 0;
}