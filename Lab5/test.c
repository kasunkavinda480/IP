#include <stdio.h>

void printfun(char a[10], char b[5])
{
    printf("Name id : %s\n", a);
    printf("Color is : %s\n", b);
}
char stringcon(char a[10], char b[5])
{
    // char n[10];
    printf("FunPas Data %s", a);
    return strcat(a, b);
}

char givegrade(int mark)
{
    char g;
    switch (mark)
    {
    case 1:
        g = 'A';
        break;
    case 2:
        g = 'B';
        break;
    case 3:
        g = 'C';
        break;
    default:
        g = 'F';
        break;
    }
    return g;
}
int main()
{
    char name[10];
    int grade;
    char g ="a";
    printf("%s",g);
    
    printf("Enter Your Name :");
    scanf("%s", &name);
    printf("\n");
    printf("Enter Your Grade :");
    scanf("%d", &grade);
    printf("\n");
    /*
    if (grade >= 75)
        g = givegrade(1);
    else if (grade >= 65)
        g = givegrade(2);
    else if (grade >= 50)
        g = givegrade(3);
    else
        g = givegrade(4);
    */  
    printf("Your Name is %s , Your Grade is %c , Your Mark : %d",name,g,grade);
    
    return 0;
}
