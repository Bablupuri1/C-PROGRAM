#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float celcious, faheranhite, s, area;
    int s1, s2, exit, s3, s4, s5, arr[10], sum = 0, greater = 0, mimimum = arr[0], evennumber, oddnumber;
    int a, b, c, small, npr, ncr, lcm, even = 0, odd = 0, sumeven = 0, sumodd = 0, sumprime = 0, count = 0;
    int r, arm = 0, rev = 0, rem = 0;
    int i, j;
    int f = 1, k = 0;

    // code start//

    while (1 != 0)

    {

        printf("click 1 for assignment1\n");
        printf("click 2 for assignment2\n");
        printf("click 3 for assignment 3\n");
        printf("click 4 for assignment4\n");
        printf("click 5 exit\n");
        printf("Please choice number\n");
        scanf("%d", &s1);

        switch (s1)
        {
        case 1:
            printf("Press 1 For to convert centigrate into fahernhite\n");
            printf("prees 2 For to find area of triangle.if triangle is form\n");
            printf("Prees 3 For to Find HCF of two given number a and b\n");
            printf("Prees 4 For to check given no. n is armstrong or not\n");
            printf("Prees 5 For Exit assiment 1\n");
            printf("Please enter your choice\n");
            scanf("%d", &s2);

            switch (s2)
            {
            case 1:
                printf("Enter temprature in celcius\n");
                scanf("%f", &celcious);
                faheranhite = (1.8 * celcious) + 32;
                printf("faheranhite=%f", faheranhite);
                break;

            case 2:
                printf("Enter input value of a,b,c\n");
                scanf("%d%d%d", &a, &b, &c);
                s = (a + b + c) / 2;
                area = sqrt(s * (s - a) * (s - b) * (s - c));
                printf("area of traingle=%f\n", area);
                break;

            case 3:
                printf("Enter two number\n ");
                scanf("%d%d", &a, &b);
                if (a < b)
                    small = a;
                else
                    small = b;

                while (small > 0)
                {
                    if (a % small == 0 && b % small == 0)
                        break;
                    small--;
                }

                printf("%d %d  hcf=%d\n", small, a, b);
                break;

            case 4:
                printf("Enter any number\n");
                scanf("%d", &a);
                c = a;
                while (a > 0)
                {
                    r = a % 10;
                    arm = (r * r * r) + arm;
                    a = a / 10;
                }
                if (c == arm)
                    printf("Number is arm strong\n");
                else
                    printf("Number is not arm strong\n");
                break;
            }

        case 2:
            printf("1. Find factor of given given number n\n");
            printf("2. Find  factorial number n\n");
            printf("3. Find calculate the npr where n and r by user\n");
            printf("4.Find ncr where n and r given by user\n");
            printf("5. Genrate pattern\n");
            printf("6.Please enter your choice number\n");
            scanf("%d", &s3);

            switch (s3)
            {
            case 1:
                printf("Enter your number\n");
                scanf("%d", &a);
                for (i = 1; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        printf(" factor is=%d\n", i);
                    }
                }

                break;

            case 2:
                printf("Enter any number\n");
                scanf("%d", &a);
                for (i = 1; i <= a; i++)
                {
                    f = f * i;
                }
                printf("factorial number is =%d\n", f);
                break;

            case 3:
                printf("Enter input the value of a\n");
                scanf("%d", &a);
                printf("Enter input the value of b\n");
                scanf("%d", &b);
                r = a - b;
                for (i = 1; a > 0; a--)
                {
                    i = i * a;
                }
                for (c = 1; r > 0; r--)
                {
                    c = c * r;
                }
                npr = i / c;
                printf("Factorial of npr=%d\n", npr);
                break;

            case 4:
                printf("Enter input the value of n and r");
                scanf("%d%d", &a, &b);
                r = a - b;
                for (i = 1; a > 0; a--)
                {
                    i = i * a;
                }
                for (c = 1; b > 0; b--)
                {
                    c = c * b;
                }
                for (j = 1; r > 0; r--)
                {
                    j = j * r;
                }
                ncr = i / (c * j);
                printf("ncr=%d\n", ncr);
                break;

            case 5:
                printf("Genrate pattern\n");
                for (i = 1; i < 5; i++)
                {
                    for (j = 1; j <= i; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
            }

        case 3:
            printf("1.Find sum of two number\n");
            printf("2.Find substractin of two number\n");
            printf("3.Find multiplication of two number\n");
            printf("4.Find dividing of two number\n");
            printf("5.Find greatrer than between 2  number\n");
            printf("6.Find smallest between two number\n");
            printf("7.Find npr\n");
            printf("8.Find ncr\n");
            printf("9.Find hcf of two number\n");
            printf("10.Find lcm of two number\n");
            printf("11.Find prime number and not prime number between to number\n");
            printf("12.Find given number n divisible or not\n");
            printf("13.Please enter your choice number\n");
            scanf("%d", &s4);
            switch (s4)
            {
            case 1:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                printf("sum of two number=%d\n", a + b);
                break;

            case 2:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                printf("substraction of two number=%d\n", a - b);
                break;

            case 3:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                printf("multiplication of two number=%d\n", a * b);
                break;

            case 4:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                printf("dividing of two number=%d\n", a / b);
                break;

            case 5:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);

                if (a > b)
                {
                    printf("greater number=%d\n", a);
                }
                else
                    printf("greater number=%d\n", b);
                break;

            case 6:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                if (a > b)
                {
                    printf("smallest number=%d\n", b);
                }
                else
                    printf("smallest number=%d\n", a);
                break;

            case 7:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                k = a - b;
                for (i = 1; a > 0; a--)
                {
                    i = i * a;
                }
                for (j = 1; k > 0; k--)
                {
                    j = j * k;
                }
                npr = i / j;
                printf("npr=%d\n", npr);
                break;

            case 8:
                printf("Enter two number\n");
                scanf("%d%d", &a, &b);
                k = a - b;
                for (i = 1; a > 0; a--)
                {
                    i = i * a;
                }
                for (j = 1; b > 0; b--)
                {
                    j = j * b;
                }
                for (c = 1; k > 0; k--)
                {
                    c = c * k;
                }
                ncr = i / c;
                printf("ncr=%d\n", ncr);
                break;

            case 9:
                printf("Enter two number\n ");
                scanf("%d%d", &a, &b);

                for (i = a; i > 0 || i < b; i--)
                {
                    if (a % i == 0 && b % i == 0)
                    {
                        break;
                    }
                }
                printf("hcf=%d\n", i);
                break;

            case 10:
                printf("enter two number\n");
                scanf("%d%d", &a, &b);
                for (i = 1; i <= a && i <= b; i++)
                {
                    c = i;
                }
                lcm = (a * b) / c;
                printf("lcm of two number %d and %d is= %d\n", a, b, lcm);
                break;

            case 11:
                printf("enter two number\n");
                scanf("%d%d", &a, &b);
                for (i = 2; i <= b; i++)
                {
                    for (j = 2; j <= b; j++)
                    {
                        if (i % j == 0)
                            break;
                    }
                    if (i == j)
                        printf("%d number is prime\n", i);
                }
            }

            /*write a program in c language which ten number store in array*/

        case 4:
            printf("1.Find  ten number sum of in array\n");
            printf("2. Find greatest ten  number in array\n");
            printf("3.Find smallest ten  number in array\n");
            printf("4. Find count even number and odd ten number in array\n ");
            printf("5. Find sum of even number and s of odd\n");
            printf("6. Find sum of prime  ten number in array\n");
            printf("7. Find count prime bumberten number in array\n ");
            printf("8. Find compositive number ten number in array\n");
            printf("9. sum of compositive number ten numbee in array\n");
            printf("10.Please enter your choice\n");
            scanf("%d", &s4);

            switch (s4)
            {
            case 1:
                printf("Emter ten number \n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf(" ***************Sum of ten number in arry****************************\n");

                for (i = 0; i < 10; i++)
                {
                    sum = sum + arr[i];
                }
                printf("sum of ten number=%d\n", sum);
                break;

            case 2:
                printf("Enterer ten number in array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }

                printf("@@@@@@@@@@@@find greatest 10 number in array@@@@@@@@@@\n");
                for (i = 0; i < 10; i++)
                {
                    if (arr[i] > greater)
                        ;
                    {
                        greater = arr[i];
                    }
                }
                printf("maximum value of aray=%d\n", greater);
                break;

            case 3:
                printf(" Enter ten number in array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("$$$$$$$$$$print to smaller number ten number in array$$$$$$$$4\n");
                int minimum = arr[0];
                for (i = 0; i < 10; i++)
                {
                    if (arr[i] < minimum)
                    {
                        minimum = arr[i];
                    }
                }
                printf("smaller number=%d\n", minimum);
                break;

            case 4:
                printf("enter ten number in array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("Count even number and odd number ia array \n");
                for (i = 0; i < 10; i++)
                {
                    if (arr[i] % 2 == 0)
                        even++;
                    else
                        odd++;
                }
                printf("\nTotal number even=%d", even);
                printf("\n Total odd number=%d\n", odd);
                break;

            case 5:
                printf("Enter ten number ia array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("Sum of even number and sum of odd number\n");
                for (i = 0; i < 10; i++)
                {
                    if (arr[i] % 2 == 0)
                        sumeven = sumeven + arr[i];
                    else
                        sumodd = sumodd + arr[i];
                }
                printf("Sum of even number=%d", sumeven);
                printf("Odd of sum number=%d", sumodd);
                break;

            case 6:
                printf("Enter ten number in array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                for (i = 0; i < 10; i++)
                {
                    for (j = 2; j <= arr[i] / 2; j++)
                    {
                        if (arr[i] % j == 0)
                        {
                            count++;
                        }
                    }

                    if (count == 0)
                    {
                        sum = sum + arr[i];
                    }
                }
                printf("sum of prime number=%d\n", sum);

                break;

            case 7:
                printf("Enter ten number in array\n");
                for (i = 0; i < 10; i++)
                {
                    scanf("%d", &arr[i]);
                }
                for (i = 0; i < 10; i++)
                {
                    for (j = 1; j <= arr[i] / 1; j++)
                    {
                        if (arr[i] % j == 0)
                        {
                            count++;
                        }
                    }

                    if (count == 2)
                        printf("prime number=%d\n", count);
                }
                break;
            }

        case 5:
            printf("@@@@@@@@@ASSIGNMENT FIVE ALLL QUESTION SOLUTION@@@@@@@@\n");
            printf("1.N number is even or odd\n");
            printf("2.Find the summation of all difit of given number\n");
            printf("3.Find the reverse number of given number\n ");
            printf("4.given number is palindrome number\n");
            printf("5.Find number is n of arm strong\n");
            printf("6.Find number is perfect given number n\n");
            printf("7.Find the factorial  given number n\n ");
            printf("8.Find given number is prime number or not prime\n");
            printf("9.Find given number is composiive number\n");
            printf("10Find number n is ve+ -ve or neither +ve or ve-\n");
            printf("11.Genrate fibonancci series of given number n\n");
            printf("12.Given no is that time of present digits\n");
            printf("13convert decimal into binary\n");
            printf("14. sum of two number using funcation\n");
            printf("15.Please  enter your choice number\n");
            scanf("%d", &s2);
            switch (s2)
            {
            case 1:
                printf("enter any number\n");
                scanf("%d", &a);
                if (a % 2 == 0)
                {
                    printf("%d number is even\n");
                }
                else
                {
                    printf("%d number is odd\n");
                }
            case 2:
                printf("enter any number\n");
                scanf("%d", &a);
                while (a > 0)
                {
                    c = a % 10;
                    a = a / 10;
                    sum = sum + c;
                }
                printf("Summation of digit=%d\n", sum);
                break;

            case 3:
                printf("Enter any number\n");
                scanf("%d", &a);
                while (a > 0)
                {
                    c = a % 10;
                    rev = rev * 10 + c;
                    a = a / 10;
                }
                printf(" reverse number is %d\n", rev);
                break;

            case 4:
                printf("enter any number\n");
                scanf("%d", &a);
                c = a;
                while (a > 0)
                {
                    rem = a % 10;
                    s = (s * 10) + rem;
                    a = a / 10;
                }
                if (c == s)
                    printf("number is palindrome\n");
                else
                    printf("Number is not palindrome\n");
                break;

            case 5:
                printf("Enter any number\n");
                scanf("%d", &a);
                c = a;
                while (a > 0)
                {
                    rem = a % 10;
                    arm = arm + (rem * rem * rem);
                    a = a / 10;
                }
                if (c == arm)
                {
                    printf("number is arm strong\n");
                }
                else
                {
                    printf("number is not arm strong\n");
                }
                break;

            case 6:
                printf("Enter any number\n");
                scanf("%d", &a);
                for (i = 1; i < a; i++)
                {
                    if (a % i == 0)
                    {
                        sum = sum + i;
                    }
                }
                if (sum == a)
                    printf("perfect number\n");
                else
                    printf("not perfect number\n");
                break;

            case 7:
                printf("Emnter any number\n");
                scanf("%d", &a);
                for (i = 1; a > 0; a--)
                {
                    i = i * a;
                }
                printf("factorial=%d\n", i);
                break;

            case 8:
                printf("Enter any number\n");
                scanf("%d", &a);
                for (i = 1; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        count++;
                    }
                }
                if (count == 2)
                    printf("numjber is prime\n");
                else
                    printf("number is not prime\n");
                break;

            case 9:
                printf("Enter any number\n");
                scanf("%d", &a);
                for (i = 1; i <= a; i++)
                {
                    if (a % i == 0)
                    {
                        count++;
                    }
                }
                if (count > 2)
                    printf("Number is compositive\n");
                else
                    printf("number is not compositive\n");
                break;

            case 10:
                printf("enter any number\n");
                scanf("%d", &a);
                if (a > 0)
                {
                    printf("Number is possitive\n");
                }
                if (a == 0)
                {
                    printf("Number is possitive or non negative\n");
                }
                if (a < 0)
                {
                    printf("number is negative\n");
                }
                break;
            }
        }
    }
    return 0;
}
