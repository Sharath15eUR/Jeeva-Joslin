
#include<stdio.h>
#include<stdlib.h>

void rearrange(int *arr, int size)
{
        for (int *i = arr ; i<arr+size ;++i)
        {
                if(*i % 2 ==0)
                {
                        int even = *i;
                        int *j =i;
                        while(j > arr && (*(j-1)%2 !=0))
                        {
                                *j = *(j-1);
                                --j;
                        }
                        *j = even;
                }
        }
}

int main()
{
        int size,val;
        printf("Enter the number if elements in the array:  ");
        scanf("%d",&size);
        int *arr =(int *)malloc(size * sizeof(int));
        for (int i = 0;i < size;i++)
        {
                scanf("%d",&val);
                *(arr+i)=val;
        }
        printf("\nARRAY\n");
        for(int i=0;i<size;i++)
        {
                printf("%d  ",*(arr+i));
        }
        rearrange(arr,size);
        printf("\nRearranged Array\n");
        for(int i=0;i<size;i++)
        {
                printf("%d ",*(arr+i));
        }
        free(arr);
        return 0;
}
