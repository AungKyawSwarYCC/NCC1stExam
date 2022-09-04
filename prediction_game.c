//Sunday, September 4, 2022
//in Yangon (West)
//Aung Kyaw Swar
//Perdiction Game
#include<stdio.h>
int prize_fun (int Gtimes_f , int money_f);
int main()
{
    printf("~~~~Prediction Game NCC~~~~\n");
    printf("   Rules \n 1. Only for adults \n 2. Age limit is between 18 to 80 \n 3. Greater reward relates to guess times \n 4. only 10 guesses allow to win prize \n 5. Don't be mad if you wrong guess :p ");
    int test=1;
    while(test==1)
    {
        char ch;
        printf("\n Do you agree this agreement Y/N?");
        scanf("%c",&ch);
        switch(ch)
        {
            case 'Y':
                printf("You can login now.\n");
                char name[20];
                int age   = 0;
                printf("Name    : ");
                scanf(" %[^\n]%*c",&name);
                printf("Age     : ");
                scanf(" %d",&age);
            if(age>80)
                {
                    printf("Wow..!!, you are too old to play");
                }
            else if(age>=18)
                {
                    int money;  //User's money
                    int Gtimes; //Guess times
                    int answer; //Answer number of this game
                    int guess;  //User's guess number
                    int prize;  //Winner prize.
                    printf("Your User Name is %s \n",name);
                    printf("Your are adult and qualified to play game");
                    printf("\nAdd your Money : ");
                    scanf("%d",&money);
                    answer=(money/2)+5;

                    do
                        {
                            printf("\n Enter a guess : ");
                            scanf("%d",&guess);
                            if (guess<answer)
                            {
                                printf("Answer is greater\n");
                            }
                            else if(guess>answer)
                            {
                                printf("Answer is lesser\n");
                            }
                            else
                            {
                                printf("Congratulations.!!\n");
                            }
                            Gtimes++;
                        }
                    while(guess!=answer);
                    printf("Times of predictions :%d \n",Gtimes);
                    prize=prize_fun(Gtimes ,money);
                    printf("Your prize is : %d \n ",prize);
                    int i;  //row
                    int j;  //column
                    int x=Gtimes;  //height of pyramid
                    printf("I will show your Bonus Pyramid ha.. ha.. ;");
                    printf("Height of pyramid : %d \n",x);
                    for(i=1;i<=x;i++)
                    {
                        for(j=1;j<=(2*x-1);j++)
                        {
                            if(j>=x-(i-1))
                                {
                                    if(j<=x+(i-1))
                                    {
                                        printf("*");
                                    }
                                }
                            else
                                {
                                    printf(" ");
                                }
                        }
                        printf("\n");
                    }
                }
            else
                {
                    printf("Your are too young to play game");
                }
                break;
            case 'N':
                printf("Sorry :( ..!!");
                break;
            default:
                printf("Invalid input");
                break;
        }
        break;
    }
    return 0;
}
int prize_fun (int Gtimes_f , int money_f)
{
    int a;
    if (Gtimes_f<10)
    {
        a=(15- Gtimes_f)*money_f;
    }
    else
    {
        a=0;
    }
    return a;
}
