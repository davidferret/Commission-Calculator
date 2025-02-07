# Commission Calculator

This C project is designed to help you calculate employee commissions based on sales and categorize them into different salary ranges. The way it works is by taking the sales data you input, calculating the earnings with a base salary of $200 plus 9% commission on sales, and then categorizing employees based on their commission earnings. The program also generates a report and saves commission statistics to a text file. You can enter sales data for multiple employees before generating the final report. I created this project to simplify commission calculations for businesses. Inspired by the need for quick and accurate payroll management, I wanted to provide a tool that makes it easy for you to track and categorize employee earnings based on their performance.

## Example Output
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
