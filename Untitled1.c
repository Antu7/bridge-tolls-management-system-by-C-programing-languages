//project-perfect//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int creat1();
void creat(j);
void push();
int sequrity();
int lexit();
struct node * pop();
struct node
{
    int data;
    struct  node * next;
}*first,*second;
struct snode
{
    struct node * data;
    struct snode * next;
}*start=NULL,*temp=NULL;
int main()
{
    int num=0,t=1,i,j,k=0,l,m,x,a=0,b=0,c=0,sum=0,tamount=0,lamount=0,mamount=0,hamount=0,ysum=0,ytamount=0;
    printf("\n           Welcome to the PODMA BRIDGE    \n         -------------------------------\n\nThis is the toll management system for PADMA Bridge.\n");

     i=sequrity();

     while (i==1){
    printf("\n\nThank you for starting the program.\n\n");
    break;
   }
   while (i==1)
   {
       k=creat1(num);

       for (l=0;l<k;l++){
        second=pop();
       m=second->data;
       if (m==1){
        a=a+1;
       }
       if (m==2){
        b=b+1;
       }
       if (m==3){
        c=c+1;
       }
}
       sum=a+b+c;
       tamount=((a*50)+(b*100)+(c*150));
       lamount= (a*50);
       mamount=(b*100);
       hamount=(c*150);
       ysum=ysum+sum;
       ytamount=ytamount+tamount;
        printf("\n\n        *The latest calculation of the day :-\n        -----------------------------------\n");
        printf("\n\n==================================================\n");
        printf("|| car type  ||  total car   ||   total amount  ||\n");
        printf("==================================================\n\n");
        printf(" *   Light  ----      %d    -------     %d /=     \n\n",a,lamount);
        printf(" *   Medium ----      %d    -------     %d /=   \n\n",b,mamount);
        printf(" *   Heavy  ----      %d    -------     %d /=     \n\n",c,hamount);
         printf("\n=====================================\n");
         printf("||  total car   ||   total amount  ||\n");
         printf("=====================================\n");
         printf("***********************************************\n");
         printf("\n       %d    --------    %d /=\n",sum,tamount);
       printf("\n\n*The latest calculation from the starting day:-\n---------------------------------------------\n");
       printf("\n=====================================\n");
    printf("||  total car   ||   total amount  ||\n");
    printf("=====================================\n");
      printf("\n       %d    --------    %d /=\n",ysum,ytamount);
      printf("\n\DO you want to continue the program?\n");
      printf("\npress 1 to continue or press 0 to EXIT - ");
      scanf("%d",&i);
     while(i<0 ||  i>1){
       printf(" \nWrong direction.\npress 1 to continue or press 0 to EXIT - ");
      scanf("%d",&i);
     }
     while(i==1){
        a=0,b=0,c=0,sum=0,tamount=0;
        break;
     }
    if (i==0){
        i=lexit();
    }
     while(i==0){
        printf("\nThank You.\n\nGood Bye.\n");
        break;
     }
}
}
int creat1(num){
       int t=1,j,nom=num;
       while(t==1)
       {
           nom=nom+1;
           printf("What type of car is in front of  you?\n\n");
           printf("\nIf it is LIGHT press 1\n");
           printf("\nIf it is MEDIUM press 2\n");
           printf("\nIf it is HEAVY press 3\n");
           scanf("%d",&j);
           while(j>3 || j<1){
            printf("Wrong insert.\n\npress the right key - ");
            scanf("%d",&j);
            while(j==j){
                printf("\n");
                break;
            }
           }
           creat(j);
           printf("\nTHANK YOU.\n\n");
           printf("\nDo you want to continue the program?press 1 to continue\npress 0 to stop\n");
           scanf("%d",&t);
           while(t<0 || t > 1){
            printf("\nWrong insert.\n\nPlease follow the direction properly.\n\n");
            printf("press 1 to continue\npress 0 to stop\n");
            scanf("%d",&t);
           }
       }
       return nom;
}
int sequrity(){
   int p,i=0;
     printf("\n\nPress the password to start the program - ");
     scanf("%d",&p);
     while(p==p){
      printf("\n");
      break;
     }
     for (i=0;i<4;i++){
        if(p==1971){
            printf("\nPASSWORD MATCH.\n\n");
            return 1;
        }
        if(p!=1971){
            printf("\nWrong password !!!\n\n");
            if (i==0){
                printf("\nYou can try 2 times more.\nPress the exiting password.\n");
           scanf("%d",&p);
            }
            if (i==1){
                printf("\nYou can try 1 times more.\nPress the exiting password.\n");
            scanf("%d",&p);
            }
            if (i==2){
                printf("\nYou can not use program.\nTry again later\n");
                return 0;
            }
        }

     }
}
int lexit(){
     int p,i=0;
     printf("\nPress the exiting password.");
     scanf("%d",&p);
     printf("\n");
     for (i=0;i<4;i++){
        if(p==1952){
            printf("\nPASSWORD MATCH.\n\n");
            return 0;
        }
        if(p!=1952){
            printf("\nWrong password !!!\n\n");
            if (i==0){
                printf("\nYou can try 2 times more.\nPress the exiting password.\n");
           scanf("%d",&p);
            }
            if (i==1){
                printf("\nYou can try 1 times more.\nPress the exiting password.\n");
            scanf("%d",&p);
            }
            if (i==2){
                printf("\nYou can try no more.\nTry again later\n");
                return 1;
            }
        }

     }
}
void creat(j)
{
    int y=j;
    first = (struct node*)malloc(sizeof(struct node));
    if (y==1){
        first->data=1;
    }
    if (y==2){
        first->data=2;
    }
    if (y==3){
        first->data=3;
    }
    first->next= NULL;

    push(first);

}
void push(struct node *ptr)
{
    temp=start;
    start=(struct snode*)malloc(sizeof(struct snode));
    start->data=ptr;
    start->next=temp;

}
struct node * pop()
{
    temp=start;
    start=start->next;
    return temp->data;
}
