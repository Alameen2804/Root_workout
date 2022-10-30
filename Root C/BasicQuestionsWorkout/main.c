#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //SUM,DIFF,PRO
    int number1,number2,sum,difference,product;
    printf("Enter number1: \n");
    scanf("%d",&number1);
    printf("Enter number2:\n");
    scanf("%d",&number2);
    sum=number1+number2;
    difference=number1-number2;
    product=number1*number2;
    printf("Sum: %d\n",sum);
    printf("Difference: %d\n",difference);
    printf("Product: %d\n",product);

    //A RAISED O THE POWER OF B
    int a,b,powervalue=1;
    printf("Enter a value: \n");
    scanf("%d",&a);
    printf("Enter b value: \n");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        powervalue*=a;
    }
    printf("Power Value: %d\n",powervalue);

    //VOLUME OF RECTANGULAR WATER TANK
    double l,w,h,volume;
    printf("Enter values of length,widh,height");
    scanf("%lf %lf %lf",&l,&w,&h);
    volume=l*w*h;
    printf("Volume of rectangular water tank: %lf\n",volume);

    //PERIMETER OF A CIRCLE
    double r,perimeter,pi=3.14159;
    int temp=2;
    printf("Enter the radius value: ");
    scanf("%lf",&r);
    printf("Perimeter of circle: %lf\n",temp*pi*r);

    //FIND QUOTIENT AND REMINDER
    int numerator,denominator;
    printf("Enter the numerator and denominator: ");
    scanf("%d %d",&numerator,&denominator);
    printf("Quotient: %d\n",numerator/denominator);
    printf("Reminder: %d\n",numerator%denominator);

    //SQUARE OF A NUMBER
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Square value: %d",number*number);

    //SQUARE ROOT OF NUMBER
    double num,squareroot;
    printf("Enter the number: ");
    scanf("%lf",&num);
    squareroot=sqrt(num);
    printf("Square root value: %lf",squareroot);

    //AREA OF TRIANGLE
    double base,height;
    printf("Enter the base and height of area: ");
    scanf("%lf %lf",&base,&height);
    printf("Area of triangle: %lf",(base*height)/2);

    //KM TO MILES
    double km;
    printf("Enter km: ");
    scanf("%lf",&km);
    printf("In Miles: %lf",km/1.60934);

    //CELCIUS TO FAHRENHEIT
    double cel;
    printf("Enter the celcius value: ");
    scanf("%lf",&cel);
    printf("Fahrenheit: %lf",(cel*9/5)+32);

    //SWAP TWO VARIABLES
    int no1,no2,te;
    scanf("%d %d",&no1,&no2);
    te=no1;
    no1=no2;
    no2=te;
    printf("%d %d",no1,no2);

    //SWAP TWO VARIABLES WITHOUT USING TEMP
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    number1=n1+n2;
    number2=n1-n2;
    number1=n1-n2;
    printf("%d %d",n1,n2);

    //SWAP TWO VARIABLES WITHOUT OVERFLOW
    int numb1,numb2;
    scanf("%d %d",&numb1,&numb2);
    number1=numb1^numb2;
    number2=numb1^numb2;
    number1=numb1^numb2;
    printf("%d %d",numb1,numb2);

    //GENERATE RANDOM NUMBER BETWEEN 1 TO 100
    time_t time1;
    srand((unsigned)time(&time1));
    printf("Random Number: %d",rand()%100+1);

    //AREA OF FIELD IN ACRES
    double feet;
    printf("Enter the area of field in feet: ");
    scanf("%Lf",&feet);
    printf("Acres: %Lf",feet/43560);

    //SUM OF NATURAL NUMBERS
    int number123;
    printf("Enter the number: ");
    scanf("%i",&number123);
    printf("Sum of number: %d",number*(number+1)/2);

    //AVERAGE OF THREE NUMBERS
    int nn1,nn2,nn3,sum123;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&nn1,&nn2,&nn3);
    sum123=nn1+nn2+nn3;
    printf("Average: %d",sum123/3);

    //CALCULATE THE TIP AMOUNT
    double BillAmount;
    printf("Enter the bill amount: ");
    scanf("%lf",&BillAmount);
    printf("Tip Amount: %lf",BillAmount*5/100);

    //CALCULATE NET AMOUNT
    double totalAmount,tax,netAmount;
    printf("Enter the total amount and tax amount: ");
    scanf("%Lf %Lf",&totalAmount,&tax);
    printf("Net Amount: %Lf",totalAmount/(1+tax/100));

    //CALCULATE THE GROSS PAY
    double BasicPay,DA,TA,PF;
    printf("Enter Basic pay,DA,TA: ");
    scanf("%Lf %Lf %Lf",&BasicPay,&DA,&TA);
    DA=BasicPay*DA/100;
    TA=BasicPay*TA/100;
    PF=BasicPay*0.08;
    printf("Gross pay: %Lf",BasicPay+DA+TA-PF);

    //SIMPLE INTEREST
    double p,n,r1;
    printf("Enter P, N and R values: ");
    scanf("%Lf %Lf %Lf",&p,&n,&r1);
    printf("Simple interest: %Lf",(p*n*r1)/100);

    //COMPUND INTEREST
    double P,N,R,t1,t2,t3,ans;
    int t;
    printf("Enter p, n, r and t values: ");
    scanf("%Lf %Lf %Lf %d",&P,&N,&R,&t);
    t1=1+(R/N);
    t2=N*t;
    t3=P*pow(t1,t2);
    printf("Compound interest value: %Lf",t3);

    //BMI
    float hei,weight;
    printf("Enter height: ");
    scanf("%f",&hei);
    printf("Enter weight: ");
    scanf("%f",&weight);
    double bmi=weight/(hei*hei);
    printf("BMI value: %f",bmi);

    //CALCULATE TOTAL AND AVERAGE
    int rollno;
    float m1,m2,m3,total,avg;
    char name[50];
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter roll no: ");
    scanf("%d",rollno);
    printf("Enter sub1, sub2 and sub3");
    scanf("%f %f %f",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("Name: %s\nRollNo: %d\n Subject1: %.2f\n Subject2: %.2f\n Subject3: %.2f\n",name,rollno,m1,m2,m3);
    printf("Total: %.2f\n Average: %.2f\n",total,avg);
    return 0;
}
