#include<stdio.h>
#include<string.h>

typedef struct student
{
    /* data */
    int roll;
    float cgpa;
    char name[100];
}stu;
struct address
{
    /* data */
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void padds(struct address add);


int main(){
    struct address adds[5];
    printf("Enter info for person 1: ");
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("Enter info for person 3: ");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("Enter info for person 4: ");
    scanf("%d",&adds[3].houseNo);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("Enter info for person 5: ");
    scanf("%d",&adds[4].houseNo);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    padds(adds[0]);
    padds(adds[1]);
    padds(adds[2]);
    padds(adds[3]);
    padds(adds[4]);


   return 0;
}

void padds(struct address add)
{
    /* data */
    printf("address is : %d\t,%d\t,%s\t,%s\n",add.houseNo,add.block,add.city,add.state);
}
