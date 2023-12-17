// Q4: Find the output of the following code snippet.
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;
cout<<*ptr<<endl<<*ptr2;
(a) ptr now points to b
(b) ptr2 now points to a
(c) a gets value of b
(d) b gets value of a

ANSWER : (c) a gets value of b