#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool search(int **mat,int n,int k)
{
        int r=0;
        int c=n-1;
        while(r<n && c>=0)
        {
                if(mat[r][c] ==k)
                        return true;
                else if(mat[r][c] > k)
                        c--;
                else
                        r++;
        }
        return false;
}
int main()
{
        int n,k;
        //int **mat = (int **)malloc(n * sizeof(int *));
        //for(int i=0;i<n;i++)
                //mat[i]=(int *)malloc(n * sizeof(int));
        printf("\nEnter the matrix dimension: ");
        scanf("%d",&n);
        printf("\nEnter the key to be searched: ");
        scanf("%d",&k);
        int **mat=(int **)malloc(n* sizeof(int*));
        for(int i=0;i<n;i++)
                mat[i]=(int *)malloc(n* sizeof(int));
        printf("\nEnter the array elements\n");
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        scanf("%d",&mat[i][j]);
                }
        }
        if(search(mat,n,k))
                printf("Key Found\n");
        else
                printf("Key not found\n");
        for(int i=0;i<n;i++)
        {
                free(mat[i]);
        }
        free(mat);
        return 0;
}
