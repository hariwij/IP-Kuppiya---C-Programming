struct Employee {
    char EmployeeID[20];
    char name[20];
    int exp;
    float salary;
};
int main(void) {
	
    struct Employee Employee[3];
    
    int i;
    float increment = 0;
    for (i = 0; i < 3; i++) {
        printf("Enter %d Employee ID : ", i + 1);
        scanf("%s", Employee[i].EmployeeID);
        printf("Enter %d Name : ", i + 1);
        scanf("%s", Employee[i].name);
        printf("Enter experince(in year) : ");
        scanf("%d", & Employee[i].exp);
        printf("Enter %d Salary : ", i + 1);
        scanf("%f", & Employee[i].salary);
        puts(" ");
    }

    printf("\nEmpoyee ID \t Name \t\t Increment \n");
    for (i = 0; i < 3; i++) {
        if (Employee[i].exp > 2) {
            increment = Employee[i].salary / 100 * 10.0;
        } else {
            increment = 0;
        }
        printf("%s \t \t %s \t\t %.2f \n", Employee[i].EmployeeID, Employee[i].name,
            increment);
    }
    return 0;
}
