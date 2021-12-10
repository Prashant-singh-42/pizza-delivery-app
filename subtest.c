#include<stdio.h>
void main(){

    int a[5],b[5],c[10],count=0;




    //22222222222222222222222
    /* for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==j)
            {
                continue;
            }
            else if(a[i]==a[j]){
                printf("the duplicate is %d",a[j]);
                
            }
            
        }
        
    } */





    //33333333333333333333   and    444444444444444(sorting in ascending order)
    /* printf("input the elements for array a\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("input the elements for array b\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        c[i+5] = b[i];
    }

    printf("elements in array c are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",c[i]);
    }
    
    printf("after sorting the array the elements are");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (c[j]<c[j+1])                              //sorting algoritm
            {
                int temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }else
            {
                continue;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",c[i]);
    } */






    //555555555555555
    /* for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (a[j]<a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ",a[i]);
    } 

    printf("\n\n\n");

    int j=0;

    for (int i = 0; i < 5; i++)
    {
        int n = a[i];
        count = 0;
        while (a[j]==n)
        {
            count += 1;
            j += 1;
        }
        printf("%d has the frequency of %d\n",a[i],count);
        i += (j-1);
    } */
    






    //6666666666
    /* for (int i = 0; i < 10; i++)
    {
        scanf("%d",&c[i]);
    }

    int n;
    for (int i = 0; i < 10/2; i++)
    {
        a[i] = c[i];
        n=i;
    }
    
    for (int j = n; j < 10; j++)
    {
        b[j-n] = c[j];
    }
    

    //operations on the two seperate arrays
    for (int k = 0; k < 5; k++)
    {
        for (int j = 0; j < 4-k; j++)
        {
            if (a[j]<a[j+1])                              //sorting algoritm
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }else
            {
                continue;
            }
        }
    }
    printf("the first half of the main array in sorted fashion is\n");

    for (int k = 0; k < 5; k++)
    {
        printf("%d  ",a[k]);
    }
    printf("\n\n");


    for (int k = 0; k < 5; k++)
    {
        for (int j = 0; j < 4-k; j++)
        {
            if (b[j]<b[j+1])                              //sorting algoritm
            {
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }else
            {
                continue;
            }
        }
    }
    printf("the second half of the main array in sorted fashion is\n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d  ",b[k]);
    }
    printf("\n\n"); */







    //7777777
    /* for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum = 0 ;

    for (int i = 0; i < 4; i++)
    {
        int n = a[i+1];
        count = 0;
        while (n!=0)
        {
            count += 1;
            n/=10;
        }
        
        sum = sum + a[i];

        for (int j = 0; j < count; j++)
        {
            sum  = sum * 10;
        }
        
    }
    sum = sum + a[4];
    printf("%d \n",sum); */







    //88888888
    /* for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int k = 0; k < 5; k++)
    {
        for (int j = 0; j < 4-k; j++)
        {
            if (a[j]>a[j+1])                              //sorting algoritm
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    printf("the fourth largest value in the array is %d",a[4-1]); */






    //999999
   /*  int arr[] = {90,89,30};
    

    for (int i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int s = sizeof(arr);
    printf("%d size\n",s);
    int elements;

    elements = s/sizeof(arr[0]);

    printf("the size of the array is or number of the elements in the array are %d",elements); */







    //10101010101010
    /* printf("input the elements in a");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d",&a[i]);
    }

    printf("input the elements in b");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    
    if (sizeof(a)==sizeof(b))
    {
        for (int i = 0; i < 5; i++)
        {
            c[i] = a[i]*b[i];
        }
    }else
    {
        printf("the arrays are of different size\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",c[i]);
    } */
    






    
    //reverse of the array by actually altering the array
    /* for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < (5/2); i++)
    {
        int temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    } */
    
    
}


