#include<stdio.h>
int main ()
{
    system("cls");
    char ch;
    int i,n;
    printf("\t\t\t1.For searching the element and its position in an array.");
    printf("\n\t\t\t2.For adding an element in the array.");
    printf("\n\t\t\t3.For deleting an element from the array.");
    printf("\n\t\t\t4.For sorting array elements in asccending order.");
    printf("\n\nEnter the number you want to run: ");
    scanf("%c",&ch);
    printf("\nEnter the size of the array.");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    switch(ch)
    {
        //for searching the element in an array
        case '1':                    
        {
            int key,flag=0,pos;
            printf("\nEnter the elements to be searched:\n");
            scanf("%d",&key);
            for(i=0;i<n;i++)
            {
                if(arr[i]==key)
                {
                flag=1;
                pos=i;
                break;
                }
            }
            if(flag==1){
            printf("\nThe element %d is present at %d position.",key,pos+1);
            }
           else
           {
           printf("The element is not present.");
           }
           break;
        }
        //for adding an element in the array
        case'2':
        {
            int key,pos;
            printf("Enter the position of the array:\t");
            scanf("%d",&pos);
            printf("Enter the element to be added:\t");
            scanf("%d",&key);
            if(pos<=n && pos>=1)
            {
                for (i = n - 1; i >= pos; i--)
                {
                 arr[i] = arr[i - 1];
                 arr[pos - 1] = key;
                 }
                printf("\nThe new array is \n");
                for(i=0;i<n;i++)
                    {
                        printf("%d\t",arr[i]);
                    }
            }
            else 
            {
                printf("Invalid position");
            }
            break;
        }
        //deleting the element from the array
        case '3':
        {
            int key;
            printf("\nEnter the key element.");
            scanf("%d",&key);
             int index=-1;
            for(i=0;i<n;i++)
            {
        
                if(arr[i]==key)
                {
                    index=1;
                    break;
                }
            }
            if(index!=-1)
                {
                    for(int j=i;j<n-1;j++)
        
                    arr[j]=arr[j+1];
        
                    n=n-1;
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t",arr[i]);
                    }
                }
             else
                {
                    printf("Element not found");
                }
                     break;
        //For sorting array elements in asccending order.
        case '4':
        {
            for(i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        int temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            printf("The sorted array is :");
            for(i=0;i<n;i++)
            {
                printf("%d\t",arr[i]);
            }
            break;
        }            
    }  
     default:
        printf("Error! operator is not correct");

    }
    return 0;
}