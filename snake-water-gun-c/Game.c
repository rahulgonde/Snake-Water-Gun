#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char,char);
void main()
{
    int result,number;
    char akash,computer,Quit;
      do{
    printf("Enter s for snake:\nEnter w for water:\nEnter g for gun:\n\n");
     fflush(stdin);
    scanf("%c",&akash);

                srand(time(0));
            number=rand()%100+1;
            if(number>0 && number<33)
                computer='s';
            else if(number>=33 && number<66)
                computer='w';
            else if(number>=66 && number>=100)
                computer='g';

            printf("\n\t\t\tAkash=%c VS computer=%c\n",akash,computer);
            result=game(akash,computer);
        if(result==1)
            printf("\n\t\t\tYOU ARE LOSS THE GAME!\n");
        else if(result==-1)
            printf("\n\t\t\tYOU WON THW GAME!");
        else
            printf("\n\t\t\tGAME DROW!");
    printf("\n\n\nDo you want to continue(y/n): ");
    fflush(stdin);
    scanf("%c",&Quit);
}while(Quit!='n');
printf("\n\n\t\tI HOPE YOU ENJOY THE GAME\n\n\t\tPress any key to exit the game:\n\n\n");
getchar();
}
int game(char akash,char computer)
{
  if(akash==computer)
    return 0;

    if(akash=='s' && computer=='w')
        return 1;
    else if(akash=='s' && computer=='g')
        return -1;


    if(akash=='w' && computer=='g')
        return -1;
    else if(akash=='w' && computer=='s')
        return 1;

    if(akash=='g' && computer=='s')
        return -1;
    else if(akash=='g' && computer=='w')
        return 1;

}
