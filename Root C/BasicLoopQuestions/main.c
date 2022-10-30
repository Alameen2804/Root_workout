#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.Print All Numbers 1 upto N
    int Number;
    puts("Enter the Number: ");
    scanf("%d",&Number);
    for(int i=1;i<=Number;i++)
    {
        printf("%d\n",i);
    }

    //2.Print All Numbers M upto N
    int M,N;
    puts("Enter M and N values: ");
    scanf("%d %d",&M,&N);
    for(int i=M;i<=N;i++)
    {
        printf("%d\n",i);
    }

    //3.Print All Even Numbers 1 upto n
    int n;
    puts("Enter the Number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }

    //4.Print All Odd Numbers 1 upto N
    int num;
    puts("Enter the N value: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i=i+2)
    {
        printf("%d\n",i);
    }

    //5.Print Even Numbers a upto b
    int a,b;
    puts("Enter a and b Values: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }

    //6.Print Odd Numbers A upto B
    int A,B;
    puts("Enter A and B Values: ");
    scanf("%d %d",&A,&B);
    for(int i=A;i<=B;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }

    //7.Print 1 Upto 100 that are divisible by a given Number
    int InNumber;
    puts("Enter the Number: ");
    scanf("%d",&InNumber);
    for(int i=1;i<=100;i++)
    {
        if(i%InNumber==0)
        {
            printf("%d\n",i);
        }
    }

    //8.Multiplication table upto 20 for a given Number
    int GivenNumber;
    puts("Enter the Number: ");
    scanf("%d",&GivenNumber);
    for(int i=1;i<=20;i++)
    {
        printf("%d X %d = %d\n",i,GivenNumber,i*GivenNumber);
    }

    //9.Multiplication Tables for 1,2,3,4,5 Upto 20 Rows in Each
    for(int i=1;i<=20;i++)
    {
        printf("%d*%d=%d\t\t%d*%d=%d\t\t%d*%d=%d\t\t%d*%d=%d\t\t%d*%d=%d\n",i,1,i*1,i,2,i*2,i,3,i*3,i,4,i*4,i,5,i*5);
    }

    //10.Sum of all numbers bw 1 and GivenN
    int SumValue=0,GivenN;
    puts("Enter the Number: ");
    scanf("%d",&GivenN);
    for(int i=1;i<=GivenN;i++)
    {
        SumValue+=i;
    }
    printf("%d",SumValue);

    //11.Sum of all Even numbers 1 upto N
    int EvenSum=0,GivenNumber;
    puts("Enter the Number: ");
    scanf("%d",&GivenNumber);
    for(int i=2;i<=GivenNumber;i=i+2)
    {
        EvenSum+=i;
    }
    printf("%d",EvenSum);

    //12.Sum of all Odd numbers 1 upto N
    int OddSum=0,GivNumber;
    puts("Enter the Number: ");
    scanf("%d",&GivNumber);
    for(int i=1;i<=GivNumber;i=i+2)
    {
        OddSum+=i;
    }
    printf("%d",OddSum);

    //13.Sum of multiples of K bw 1 and Given Number
    int MulSum=0,GivenNo,K;
    puts("Enter the Number: ");
    scanf("%d",&GivenNo);
    puts("Enter the K Value: ");
    scanf("%d",&K);
    for(int i=1;i<=GivenNo;i++)
    {
        if(i%K==0)
        {
            MulSum+=i;
        }
    }
    printf("%d",MulSum);

    //14.FizzBuzz
    int GivenNumber1;
    puts("Enter the Number: ");
    scanf("%d",&GivenNumber1);
    for(int i=1;i<=GivenNumber1;i++)
    {
        if(i%3==0&&i%5==0)
        {
            puts("FizzBuzz");
        }
        else if(i%3==0)
        {
            puts("Fizz");
        }
        else if(i%5==0)
        {
            puts("Buzz");
        }
        else
        {
            printf("%d\n",i);
        }
    }

    //15.Fcatorial of Given Number
    int givenNumber,Factorial=1;
    puts("Enter the Number: ");
    scanf("%d",&givenNumber);
    for(int i=1;i<=givenNumber;i++)
    {
        Factorial=Factorial*i;
    }
    printf("%d",Factorial);

    //16.Students Mark Calculation
    int NumberOfSubjects,TotalMark=0,Average=0,Mark;
    puts("Enter the Number of Subjects: ");
    scanf("%d",&NumberOfSubjects);
    for(int i=1;i<=NumberOfSubjects;i++)
    {
        printf("Subject %d:",i);
        scanf("%d",&Mark);
        TotalMark+=Mark;
    }
    Average=TotalMark/NumberOfSubjects;
    printf("Total Mark: %d",TotalMark);
    printf("Average: %d",Average);

    //17.Running Score
    int NumberOfRounds,totalScore=0,Score;
    puts("Enter the Number of Rounds: ");
    scanf("%d",&NumberOfRounds);
    for(int i=0;i<NumberOfRounds;i++)
    {
        printf("Enter the score %d: ",i);
        scanf("%d",&Score);
        totalScore+=Score;
        printf("Score: %d\n",totalScore);
    }
    printf("Total Score: %d",totalScore);

    //19.RPS Game
    int X,PlayerWinCount,ComputerWinCount=0,DrawCount=0,randomNumber,PlayerChoice;
    puts("Enter the value of number of rounds: ");
    scanf("%d",&X);
    puts("1.Rock\n2.Paper\n3.Scissor");
    time_t time1;
    srand((unsigned)time(&time1));
    randomNumber=rand()%3+1;
    for(int i=0;i<X;i++)
    {
        puts("Enter your choice: ");
        scanf("%d",&PlayerChoice);
        if(PlayerChoice>0&&PlayerChoice<4)
        {
            if(randomNumber==1)
            {
                if(PlayerChoice==1)
                {
                    puts("Tie");
                }
                else if(PlayerChoice==2)
                {
                    puts("Player Win");
                    PlayerWinCount++;
                }
                else if(PlayerChoice==3)
                {
                    puts("Computer Win");
                    ComputerWinCount++;
                }
            }
            else if(randomNumber==2)
            {
                if(PlayerChoice==1)
                {
                    puts("Computer Win");
                    ComputerWinCount++;
                }
                else if(PlayerChoice==2)
                {
                    puts("Tie");
                }
                else if(PlayerChoice==3)
                {
                    puts("Player Win");
                    PlayerWinCount++;
                }
            }
            else if(randomNumber==3)
            {
                if(PlayerChoice==1)
                {
                    puts("Player Win");
                    PlayerWinCount++;
                }
                else if(PlayerChoice==2)
                {
                    puts("Computer Win");
                    ComputerWinCount++;
                }
                else if(PlayerChoice==3)
                {
                    puts("Tie");
                }
            }
        }
        else
        {
            puts("Wrong input!");
            i--;
        }
    }
    if(PlayerWinCount>ComputerWinCount)
    {
        puts("Player Win!");
    }
    else if(ComputerWinCount>PlayerWinCount)
    {
        puts("Computer Win!");
    }
    else
    {
        puts("Tie");
    }

    //20.Guessing Game
    int randomNumber,Guess,NumberOfAttempts=0;
    time_t time1;
    srand((unsigned)time(&time1));
    randomNumber=rand()%3+1;
    for(int i=0;;i++)
    {
        puts("Enter your choice: ");
        scanf("%d",&Guess);
        if(Guess<randomNumber)
        {
            printf("The answer is greater than %d\n",Guess);
            NumberOfAttempts++;
        }
        else if(Guess>randomNumber)
        {
            printf("The answer is less than %d\n",Guess);
            NumberOfAttempts++;
        }
        else if(Guess==randomNumber)
        {
            printf("Correct Answer in %d Attempts!",NumberOfAttempts);
            break;
        }
    }
    return 0;
}
