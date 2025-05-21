#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define DAYS 7
#define TASKS 3
#define TASK_LENGTH 100

struct day {
        char *dayName;
        char *tasks[TASKS];
        int taskcount;
};

void addTask(struct day *week)
{
        int d;
        char buffer[TASK_LENGTH];
        printf("Enter day [0-6]\n");
        scanf("%d",&d);
        if (d < 0 || d >=DAYS)
        {
                printf("Invalid day\n");
                return;
        }
        if (week[d].taskcount >= TASKS)
        {
                printf("Task Limit Reached\n");
                return;
        }
        printf("Enter Task:  ");
        getchar();
        scanf("%[^\n]s",buffer);
        week[d].tasks[week[d].taskcount] = malloc(strlen(buffer) + 1);
        strcpy(week[d].tasks[week[d].taskcount],buffer);
        week[d].taskcount++;
}

void showTask(const struct day *week)
{
        printf("WEEKLY TASKS\n");
        for(int i=0;i<DAYS;i++)
        {
                printf("----------------------\n");
                printf("%s:\n",week[i].dayName);
                printf("----------------------\n");
                if (week[i].taskcount == 0)
                {
                        printf("No Tasks\n\n");
                }
                else
                {
                        for(int j=0;j<week[i].taskcount;j++)
                        {
                                printf("--->%s \n",week[i].tasks[j]);
                        }
                        printf("\n");
                }
        }
}

int main()
{
        struct day week[DAYS];
        int choice;
        static const char *dayNames[DAYS] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        for (int i=0;i<DAYS;i++)
        {
                week[i].dayName = (char *)dayNames[i];
                week[i].taskcount=0;
                for (int j=0;j<TASKS;j++)
                {
                        week[i].tasks[j]=NULL;
                }
        }
        while(1)
        {
                printf("\n1.Add Task\n2.Show Tasks\n3.Exit\nEnter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                addTask(week);
                                break;
                        case 2:
                                showTask(week);
                                break;
                        case 3:
                                exit(0);
                        default:
                                printf("Enter a valid choice[1-4]\n");
                                break;
                }
        }
}
