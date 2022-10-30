#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

int main()
{
    //1.Check number positive or negative or zero.
    int Number;
    printf("Enter the Number: ");
    scanf("%d",&Number);
    if(Number>0)
    {
        printf("Positive Number.");
    }
    else if(Number==0)
    {
        printf("Zero.");
    }
    else
    {
        printf("Negative.");
    }

    //2.Integers are equal or not
    int Num1,Num2;
    printf("Enter the first number: ");
    scanf("%d",&Num1);
    printf("Enter the second number: ");
    scanf("%d",&Num2);
    if(Num1==Num2)
    {
    printf("Equal.");
    }
    else
    {
    printf("Not equal.");
    }

    //3.Floating point numbers are equal or not
    float Nu1,Nu2,epsilon=0.01f;
    printf("Enter the first number: ");
    scanf("%f",&Nu1);
    printf("Enter the second number: ");
    scanf("%f",&Nu2);
    if((Nu1-Nu2)<epsilon)
    {
    printf("Equal.");
    }
    else
    {
        printf("Not equal.");
    }

    //4.Odd or even
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    if(N==0)
    {
        printf("Zero.");
    }
    else if(N%2==0)
    {
        printf("Even.");
    }
    else
    {
        printf("Odd.");
    }

    //5.Check leap year
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("Leap year.");
    }
    else
    {
        printf("Not leap year.");
    }

    //6.Eligiblr or not for voting
    int Age;
    printf("Enter the age value: ");
    scanf("%d",&Age);
    if(Age<=0)
    {
        printf("Wrong input.");
    }
    else if(Age>18)
    {
        printf("Eligible.");
    }
    else
    {
        printf("Not eligible.");
    }

    //7.Categorize the person
    float heightInCm;
    printf("Enter height of the person: ");
    scanf("%f",&heightInCm);
    if(heightInCm>160)
    {
        printf("Tall.");
    }
    else if(heightInCm<160&&heightInCm>140)
    {
        printf("Medium.");
    }
    else if(heightInCm<140&&heightInCm>80)
    {
        printf("Short.");
    }
    else
    {
        printf("Wrong input!");
    }

    //8.1.Largest number (Two numbers)
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
    {
        printf("Equal.");
    }
    else if(num1>num2)
    {
        printf("Largest number: %d",num1);
    }
    else
    {
        printf("Largest number: %d",num2);
    }


    //9.1.Find the smallest number
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    if(n1==n2)
    {
        printf("Equal.");
    }
    else if(n1<n2)
    {
        printf("Smallest number: %d",n1);
    }
    else
    {
        printf("Smallest number: %d",n2);
    }


    //8.2.Largest number (Three numbers)
    int i1,i2,i3,largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&i1,&i2,&i3);
    largest=i1;
    if(i2>largest)
    {
        largest=i2;
    }
    if(i3>largest)
    {
        largest=i3;
    }
    printf("Largest number is: %d",largest);

    //9.2.Smallest number (Three numbers)
    int a,b,c,smallest;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    smallest=a;
    if(smallest>b)
    {
        smallest=b;
    }
    if(smallest>c)
    {
        smallest=c;
    }
    printf("Smallest number: %d",smallest);

    //10.Largest number among four number
    int v,x,y,z,largestNumber;
    printf("Enter the four numbers: ");
    scanf("%d %d %d %d",&v,&x,&y,&z);
    largestNumber=v;
    if(largestNumber<x)
    {
        largestNumber=x;
    }
    if(largestNumber<y)
    {
        largestNumber=y;
    }
    if(largestNumber<z)
    {
        largestNumber=z;
    }
    printf("Largest number: %d",largestNumber);

    //11.Closer number
    int Number01,Number02,Number03,c1,c2,c3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&Number01,&Number02,&Number03);
    c1=abs(Number01-Number02);
    c2=abs(Number02-Number03);
    c3=abs(Number03-Number01);
    if(c1<c2&&c1<c3)
    {
        printf("%d %d",Number01,Number02);
    }
    else if(c2<c1&&c2<c3)
    {
        printf("%d %d",Number02,Number03);
    }
    else if(c3<c1&&c3<c2)
    {
        printf("%d %d",Number03,Number01);
    }

    //12.Farther number
    int Num01,Num02,Num03,C1,C2,C3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&Num01,&Num02,&Num03);
    C1=abs(Num01-Num02);
    C2=abs(Num02-Num03);
    C3=abs(Num03-Num01);
    if(C1>C2&&C1>C3)
    {
        printf("%d %d",Num01,Num02);
    }
    else if(C2>C3&&C2>C1)
    {
        printf("%d %d",Num02,Num03);
    }
    else if(C3>C2&&C3>C1)
    {
        printf("%d %d",Num03,Num01);
    }

    //13.Sort three numbers
    int nu1,nu2,nu3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&nu1,&nu2,&nu3);
    if(nu1>nu2)
    {
        swap(&nu1,&nu2);
    }
    if(nu1>nu3)
    {
        swap(&nu1,&nu3);
    }
    if(nu2>nu3)
    {
        swap(&nu2,&nu3);
    }
    printf("%d %d %d",nu1,nu2,nu3);

    //14.Triangle form
    int side1,side2,side3,totalsidevalue;
    printf("Enter values of three sides: ");
    scanf("%d %d %d",&side1,&side2,&side3);
    totalsidevalue=side1+side2+side3;
    if(totalsidevalue==180)
    {
        printf("Triangle.");
    }
    else
    {
        printf("Not triangle.");
    }

    //15.XY quadrant
    int X,Y;
    printf("Enter the values of X,Y: ");
    scanf("%d %d",&X,&Y);
    if(X>0&&Y>0)
    {
        printf("1st.");
    }
    else if(X>0&&Y<0)
    {
        printf("2nd.");
    }
    else if(X<0&&Y>0)
    {
        printf("3rd.");
    }
    else if(X<0&&Y<0)
    {
        printf("4th.");
    }

    //16.Vowel or Consonant
    char C;
    printf("Enter the alphabet: ");
    scanf("%c",&C);
    if(C=='A'||C=='E'||C=='I'||C=='O'||C=='U'||C=='a'||C=='e'||C=='i'||C=='o'||C=='u')
    {
        printf("Vowel.");
    }
    else
    {
        printf("Consanant.");
    }

    //17.Name of shape
    int NumberOfSides;
    printf("Enter the number of sides: ");
    scanf("%d",&NumberOfSides);
    if(NumberOfSides==3)
    {
        printf("trigon.");
    }
    else if(NumberOfSides==4)
    {
        printf("tetragon.");
    }
    else if(NumberOfSides==5)
    {
        printf("pentagon.");
    }
    else if(NumberOfSides==6)
    {
        printf("hexagon.");
    }
    else if(NumberOfSides==7)
    {
        printf("heptagon.");
    }
    else if(NumberOfSides==8)
    {
        printf("octagon.");
    }
    else if(NumberOfSides==9)
    {
        printf("enneagon");
    }
    else if(NumberOfSides==10)
    {
        printf("decagon.");
    }

    //19.Day of week
    int Day;
    printf("Enter the date: ");
    scanf("%d",&Day);
    switch(Day%7)
    {
    case 1:
        {
            printf("Monday");
            break;
        }
        case 2:
            {
                printf("Tuesday");
                break;
            }
            case 3:
                {
                    printf("Wednessday");
                    break;
                }
                case 4:
                    {
                        printf("Thursday");
                        break;
                    }
                    case 5:
                        {
                            printf("Friday");
                            break;
                        }
                        case 6:
                            {
                                printf("Saturday");
                                break;
                            }
                            case 7:
                                {
                                    printf("Sunday");
                                    break;
                                }
    }

    //20.Triangle name
    int FirstSide,SecondSide,ThirdSide;
    printf("Enter three side values of triangle: ");
    scanf("%d %d %d",&FirstSide,&SecondSide,&ThirdSide);
    if(FirstSide==SecondSide&&SecondSide==ThirdSide)
    {
        printf("Equilateral");
    }
    else if(FirstSide!=SecondSide&&SecondSide!=ThirdSide)
    {
        printf("Scalene");
    }
    else
    {
        printf("Isosceles");
    }

    //21.Grade points to letter grades
    int GradeMark;
    printf("Enter the mark: ");
    scanf("%d",&GradeMark);
    if(GradeMark>=90&&GradeMark<=100)
    {
        puts("A");
    }
    else if(GradeMark>=80)
    {
        puts("B");
    }
    else if(GradeMark>=60)
    {
        puts("C");
    }
    else if(GradeMark>=50)
    {
        puts("D");
    }
    else if(GradeMark<=50&&GradeMark>=0)
    {
        puts("F");
    }
    else
    {
        puts("Wrong input.");
    }

    //22.Chess board sqaure color
    int row;
    char coloumn;
    puts("Enter values of row(1 to 8) and coloumn(a to h): ");
    scanf("%d %c",&row,&coloumn);
    if(row<9&&row>0)
    {
        if((row+coloumn)%2==0)
        {
            puts("Black");
        }
        else
        {
            puts("White");
        }
    }
    else
    {
        puts("Wrong Input.");
    }

    //24.Profit or loss
    double CostPrice,SellingPrice;
    puts("Enter the cost price: ");
    scanf("%lf",&CostPrice);
    puts("Enter the selling price: ");
    scanf("%lf",&SellingPrice);
    if(CostPrice>0&&SellingPrice>0)
    {
        if(CostPrice>SellingPrice)
        {
            puts("Loss");
        }
        else if(CostPrice==SellingPrice)
        {
            puts("No Profit No Loss");
        }
        else if(SellingPrice>CostPrice)
        {
            puts("Profit");
        }
    }
    else
    {
        puts("Wrong input!");
    }

    //25.Menu-Driven Calculator
    int Choice,FirstNum,SecNum;
    puts("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulo Division\n");
    puts("Enter your choice: ");
    scanf("%d",&Choice);
    puts("Enter first and second numbers: ");
    scanf("%d %d",&FirstNum,&SecNum);
    if(Choice==1)
    {
        printf("%d",FirstNum+SecNum);
    }
    else if(Choice==2)
    {
        printf("%d",FirstNum-SecNum);
    }
    else if(Choice==3)
    {
        printf("%d",FirstNum*SecNum);
    }
    else if(Choice==4)
    {
        printf("%d",FirstNum/SecNum);
    }
    else if(Choice==5)
    {
        printf("%d",FirstNum%SecNum);
    }
    else
    {
        puts("Wrong input choice!");
    }

    //26.RPS Game
    time_t time1;
    srand((unsigned)time(&time1));
    int randomNumber,PlayerChoice;
    randomNumber=rand()%3+1;
    puts("1.Rock\n2.Paper\n3.Scissor");
    puts("Enter your choice: ");
    scanf("%d",&PlayerChoice);
    if(PlayerChoice<4&&0<PlayerChoice)
    {
        printf("Computer Choice: %d\n",randomNumber);
        if(randomNumber==1)
        {
            if(PlayerChoice==1)
            {
                puts("Tie");
            }
            else if(PlayerChoice==2)
            {
                puts("Player Win");
            }
            else if(PlayerChoice==3)
            {
                puts("Computer Win");
            }
        }
        else if(randomNumber==2)
        {
            if(PlayerChoice==1)
            {
                puts("Computer Win");
            }
            else if(PlayerChoice==2)
            {
                puts("Tie");
            }
            else if(PlayerChoice==3)
            {
                puts("Player Win");
            }
        }
        else if(randomNumber==3)
        {
            if(PlayerChoice==1)
            {
                puts("Player Win");
            }
            else if(PlayerChoice==2)
            {
                puts("Computer Win");
            }
            else if(PlayerChoice==3)
            {
                puts("Tie");
            }
        }
    }
    else
    {
        puts("Wrong Input!");
    }
    return 0;
}
