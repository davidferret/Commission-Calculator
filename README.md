# Commission Calculator

This program calculates employee commissions based on sales, categorizes them into salary ranges, and generates a report.

- **Commission Calculation**: Computes earnings as a base salary of $200 plus 9% commission on sales.
- **Salary Range Distribution**: Categorizes employees based on their commission earnings.
- **Report Generation**: Saves commission statistics to a text file.
- **User-Friendly Input Handling**: Allows multiple employee sales entries before generating the final report.

## Example Usage
```
Enter employee gross sales (-1 to end): 5000
Employee Commission is $650.00

Would you like to enter another employee's sales? (y/n): y
Enter employee gross sales (-1 to end): 8000
Employee Commission is $920.00

Would you like to enter another employee's sales? (y/n): n

Number of employees in the salary range:
$200 - $299: 0
$300 - $399: 0
$400 - $499: 0
$500 - $599: 0
$600 - $699: 1
$700 - $799: 0
$800 - $899: 0
$900 - $999: 1
Over $1000: 0
Commission report saved to 'commission_report.txt'.
Thank you for using the commission calculator!

```
