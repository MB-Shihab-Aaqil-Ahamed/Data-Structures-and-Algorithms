## Chocolate Boxes

'Camp Wonder' is a summer camp program organized for kids for 5 days. The organizers have planned to conduct various games for the kids each day. On the last day, they planned a different game, where each kid is given an N number of boxes. Each box contains a bunch of chocolates. The kids will get the box one after another and whenever they get a box with an odd number of chocolates, then they have to destroy the first box they got. After getting all the boxes, they have to display the number of chocolates in each box they have. How will you implement the above scenario using a C++ data structure?

Input Format
The first input is the number of boxes which should be > 0 and <=10. The second input is the number of chocolates in each box.

Output Format
The output should print the number of chocolates in the box available.

If the number of boxes <=0 or >10, then print 'Invalid input'.

If the first box contains an odd number or negative value, then print 'Sorry!!! The first box always should contain positive even no. of chocolates'.

Note
The first box always contains an even number of chocolates.
The input and output statements in the program should exactly match with the sample input and output statements given below.

Sample Input 1:
Enter the no. of boxes: 5
Enter the no. of chocolates in box 1:4
Enter the no. of chocolates in box 2:2
Enter the no. of chocolates in box 3:3
Enter the no. of chocolates in box 4: 6
Enter the no. of chocolates in box 5:1

Sample Output 1:
No. of chocolates in each box: 3 6 1

Sample Input 2:
Enter the no. of boxes: 0

Sample Output 2:
Invalid input

Sample Input 3:
Enter the no. of boxes: 5 
Enter the no. of chocolates in box 1:3

Sample Output 3:
Sorry!!! The first box always should contain positive even no. of chocolates

Sample Input 4:
Enter the no. of boxes: 5
Enter the no. of chocolates in box 1:-1

Sample Output 4:
Sorry!!! The first box always should contain positive even no. of chocolates

Sample Input 5:
Enter the no. of boxes: 11

Sample Output 5:
Invalid input
