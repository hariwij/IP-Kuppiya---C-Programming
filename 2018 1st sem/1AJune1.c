#include <stdio.h>

int main(void)
{
    int c1_count = 0, c2_count = 0, c3_count = 0;
    char _course;
    
	printf("Instructions :\n\t1. Enter 'e' if you want to exit.\n\t2. At the end of the program, program will display the total registations for each courses.\n\nAvaliable courses :\n\t'H'/'h' - Diploma in Hospitality Management\n\t'M'/'m' - Diploma in Mearketing\n\t'F'/'f' - Diploma in Finance\n\n");
	
    while (c1_count + c2_count + c3_count < 100)
    {
        printf("Enter course type for student %d to register : ", c1_count + c2_count + c3_count + 1);
        scanf(" %c", &_course);

        if (_course == 'H' || _course == 'h')
            c1_count++;
        else if (_course == 'M' || _course == 'm')
            c2_count++;
        else if (_course == 'F' || _course == 'f')
            c3_count++;
        else if (_course == 'E' || _course == 'e')
            break;
        else
            printf("Course type is invalid!\n");
    }

    printf("\n\nCourse type\tCourse name\t\t\t\tTotal registrations\tTotal Earnings\n");
    printf("%c\t\t%s\t%d\t\t\t%.2f\n", 'H', "Diploma in Hospitality Management", c1_count, c1_count * 1500.0);
    printf("%c\t\t%s\t\t\t%d\t\t\t%.2f\n", 'M', "Diploma in Mearketing", c2_count, c2_count * 2000.0);
    printf("%c\t\t%s\t\t\t%d\t\t\t%.2f\n", 'F', "Diploma in Finance", c3_count, c3_count * 2500.0);

    return 0;
}
