#include <stdio.h>

void displaySalaryRanges(int counter[]);
void saveCommissionReportToFile(int counter[]);

int main(void) {
    float sales, comm;
    int counter[9] = {0}, index;
    char choice;

    do {
        printf("\nEnter employee gross sales (-1 to end): ");
        scanf("%f", &sales);

        if (sales == -1) {
            break;
        }

        comm = 200 + 0.09 * sales;
        index = ((int)comm / 100) - 2;
        if (index > 8) {
            index = 8;
        }
        counter[index]++;

        printf("Employee Commission is $%.2f\n", comm);
        
        printf("\nWould you like to enter another employee's sales? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    displaySalaryRanges(counter);
    saveCommissionReportToFile(counter);
    
    printf("Thank you for using the commission calculator!\n");
    return 0;
}

void displaySalaryRanges(int counter[]) {
    printf("\nNumber of employees in the salary range:\n");
    for (int i = 0; i < 8; i++) {
        printf("$%d00 - $%d99: %d\n", i + 2, i + 2, counter[i]);
    }
    printf("Over $1000: %d\n", counter[8]);
}

void saveCommissionReportToFile(int counter[]) {
    FILE *file = fopen("commission_report.txt", "w");
    if (!file) {
        printf("Error creating report file!\n");
        return;
    }
    
    fprintf(file, "Employee Commission Report:\n");
    for (int i = 0; i < 8; i++) {
        fprintf(file, "$%d00 - $%d99: %d\n", i + 2, i + 2, counter[i]);
    }
    fprintf(file, "Over $1000: %d\n", counter[8]);
    
    fclose(file);
    printf("Commission report saved to 'commission_report.txt'.\n");
}
