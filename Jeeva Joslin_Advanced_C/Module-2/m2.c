#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<stdbool.h>
#include<signal.h>
#include<time.h>

int n;
volatile sig_atomic_t sigint_received = 0;

void sigint_handler(int sig)
{
        sigint_received = 1;
        printf("SIGINT Caught\n");
}
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
        time_t start = time(NULL);
        printf("[THREAD A] Started at %s",ctime(&start));
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
        time_t end = time(NULL);
        printf("[Thread A] Completed at %s",ctime(&end));
        printf("[Thread A] Time Taken %.2f seconds\n",difftime(end,start));

        int *res = malloc(sizeof(int));
        *res = sum;
        pthread_exit(res);
}

void *thread1(void *arg)
{
        time_t start = time(NULL);
        printf("[Thread B ] Started at %s ",ctime(&start));
        while(difftime(time(NULL),start)<100)
        {
                if(sigint_received)
                        printf("[Thread B SIGINT found\n");
                printf("Thread 1 running\n");
                sleep(2);

        }
        time_t end = time(NULL);
        printf("[Thread B ] Completed at %s",ctime(&end));
        printf("[Thread B ] Time taken %.2f seconds\n",difftime(end,start));
        pthread_exit(NULL);
}


void *thread2(void *arg)
{
        time_t start = time(NULL);
        printf("[Thread C] Started at %s",ctime(&start));
        while(difftime(time(NULL),start)<100)
        {
                if(sigint_received)
                        printf("[Thread C ] SIGINT found\n");
                printf("Thread 2 running\n");
                sleep(3);
        }
        time_t end = time(NULL);
        printf("[Thread C ] Completed at %s",ctime(&end));
        printf("[Thread C ] Time taken : %.2f seconds\n",difftime(end,start));

        pthread_exit(NULL);
}


int main()
{
        pthread_t threadA,threadB,threadC;
        signal(SIGINT,sigint_handler);
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
