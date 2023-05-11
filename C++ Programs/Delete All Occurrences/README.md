## Delete All Occurrences

Given a singly linked list and an integer x, your task is to complete the function deleteAllOccurrences() which deletes all occurrences of a key x present in the linked list. The function takes one argument: an integer key x and the function need not return anything.

Note:
- Define the 'Node' class with the below-mentioned public attributes:
       1. An integer attribute with the name: 'data'
       2. A reference to the next node with the name: 'next';

- Please include the statement '#include <cstdlib>' to deallocate/free the memory using 'free()' method.  Otherwise, use the 'delete' operator instead of 'free()' to deallocate/free the memory. 
- Observe the highlighted output statements in the sample input and output statements for more clarifications.
- Do not change the code template given.  Write your code in the provided places alone.
- Avoid the usage of exit(0) in your code.  

Input:
The first line of input contains an integer N denoting the no. of elements of the linked list.
The next line is N values of the linked list.
The third line of the input is the value (integer x) to be deleted.

Output:
The elements in the list after deleting all the occurrence of the given value.

Sample input statement:
5
2 2 1 4 4
Enter the element to be deleted: 4

Sample output statement:
The list after deletion: 2 2 1
