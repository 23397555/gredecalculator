#include <stdio.h>

int main() 
{
    int score;
    char grade;

    printf("Enter your score : ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' : 
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
                            'F' ;

    printf("Your grade is : %c\n", grade);
    
    switch (grade)
    {
        case 'A':
            printf("Excellent work!\n");
            break;

        case 'B':
            printf("Well done!\n");
            break;

        case 'C':
            printf("Good job!\n");
            break;  
            
        case 'D':
            printf("You passed, but there's room for improvement.\n");
            break;
            
        case 'F':
            printf("sorry, you failed.\n");    
            break;
        }
        

    if(grade>='A' && grade<='D')
        {
            printf("Congratulations! you are eligible for the next level.\n");
        }
        else
        {
            printf("Please try again next time.\n");
        }

        return 0;
}