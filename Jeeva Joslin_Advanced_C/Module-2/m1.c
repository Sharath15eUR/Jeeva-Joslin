
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<stdbool.h>
#include<time.h>


int n;

bool prime(int num)
{
        if (num <=1)
                return false;
        for(int i=2;i * i<=num;i++)
        {
                if(num % i ==0)
                        return false;
        }
        return true;
}

void *sum(void *arg)
{
        int c=0,num=2,sum=0;
        while(c<n)
        {
                if(prime(num))
                {
                        sum+=num;
                        c++;
                }
                num++;
        }
        int *res = malloc(sizeof(int));
        *res = sum;
        pthread_exit(res);
}

void *thread1(void *arg)
{
        time_t start = time(NULL);
        while(difftime(time(NULL),start)<100)
        {
                printf("Thread 1 running\n");
                sleep(2);
        }
        pthread_exit(NULL);
}


void *thread2(void *arg)
{
        time_t start = time(NULL);
        while(difftime(time(NULL),start)<100)
        {
                printf("Thread 2 running\n");
                sleep(3);
        }
        pthread_exit(NULL);
}


int main()
{
        pthread_t threadA,threadB,threadC;
        printf("Enter the value of n: \n");
        scanf("%d",&n);
        pthread_create(&threadA,NULL,sum,NULL);
        pthread_create(&threadB,NULL,thread1,NULL);
        pthread_create(&threadC,NULL,thread2,NULL);

        int *prime_sum;
        pthread_join(threadA,(void **)&prime_sum);
        printf("Sum of first %d prime numbers is %d\n",n,*prime_sum);
        free(prime_sum);
        pthread_join(threadB,NULL);
        pthread_join(threadC,NULL);
        return 0;
}
