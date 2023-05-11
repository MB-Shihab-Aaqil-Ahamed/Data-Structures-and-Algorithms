## Average Score

A new employee has joined a company. As part of Training, he/she is given a few assignments. On completion of the assignments, each of them is scored. The score report must be sent to the Team Lead. This report consists of the average score of the assignments, and his eligibility for the project allocation.  The new employee is eligible for deployment to projects if his average score is equal to or above 80%.  Write program to generate the score report.

Note:
- The no. of assignments should be between 1 and 10.  If it exceeds 10, display the message:   "No. of assignments must not be more than 10" and terminate the program.
- Average score should be float type
- Observe the highlighted output statements in the sample input and output statements for more clarifications.
- Do not change the code template given.  Write your code in the provided places alone.
- Avoid the usage of exit(0) in your code.  

Sample input statement 1:
Enter no. of assignments:
8

Enter the scores:
23
89
89
96
81
78
88
97

Sample output statement 1:
The average score is 80.12
Eligible for projects

Sample input statement 2:
Enter no of assignments:
5

Enter the scores:20
56
34
67
78

Sample output statement 2:
The average score is 51.00
Not eligible for projects

Sample input statement 3:
Enter no of assignments:
11

Sample output statement 3:
No. of assignments must not be more than 10
