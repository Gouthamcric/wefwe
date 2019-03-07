#include <stdio.h>
void main()
{
    int block_size[10],process_size[10],block_num,process_num,flags[10],allocation[10];
    for(int i=0;i<10;i++)
    {
        flags[i] = 0;
        allocation[i] = -1;
    }
    printf("enter the number of blocks : ");
    scanf("%d",&block_num);
    printf("enter the size of each block : ");
    for(int i=0;i<block_num;i++)
    {
        scanf("%d",&block_size[i]);
    }
    printf("enter the number of process : ");
    scanf("%d",&process_num);
    printf("enter the size of processes : ");
    for(int i= 0;i<process_num;i++)
    {
        scanf("%d",&process_size[i]);
    }

    for(int i=0;i<process_num;i++)
    {
        for(int j=0;j<block_num;j++)
        {
            if(flags[j] == 0&& block_size[j]>=process_size[i])
            {
                allocation[j] = i;
                flags[j] = 1;
                break;
            }
        }
    }
    printf("\nBlock_num\tsize\t\tprocess_num\t\tsize");
    for(int i=0;i<block_num;i++)
    {
        printf("\n%d \t\t %d \t\t",i+1,block_size[i]);
        if(flags[i] == 1)
        {
            printf("%d \t\t\t %d",allocation[i]+1,process_size[allocation[i]]);
        }
        else
        {
            printf("not allocated");
        }
    }
}


