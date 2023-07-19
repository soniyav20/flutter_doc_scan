1

Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

INPUT(s):

11

10 9 7 6 5 1 2 3 8 4 7

OUTPUT(s):

7

INPUT(s):

5

1 2 3 4 4

OUTPUT(s):

4

INPUT(s):

5

1 1 2 3 4

OUTPUT(s):

1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    //getting input
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //checking for duplicate using brute force
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
                break;
            }
        }
    }
    //space- order of 1
    //time- order of n sq
}


Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

INPUT(s):

11

10 9 7 6 5 1 2 3 8 4 7

OUTPUT(s):

7

INPUT(s):

5

1 2 3 4 4

OUTPUT(s):

4

INPUT(s):

5

1 1 2 3 4

OUTPUT(s):

1


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    //input
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n-1];
    for(int i=0;i<n-1;i++)
    b[i]=0;
    for(int i=0;i<n;i++){
        if(b[a[i]-1]!=0){
            printf("%d",a[i]);
            break;
        }
        b[a[i]-1]++;
    }
    //time order of n
    //space order of n
}

Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

INPUT(s):

11

10 9 7 6 5 1 2 3 8 4 7

OUTPUT(s):

7

INPUT(s):

5

1 2 3 4 4

OUTPUT(s):

4

INPUT(s):

5

1 1 2 3 4

OUTPUT(s):

1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=0,a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    int sum=(((n-1)*(n))/2);
    printf("%d",s-sum);
    //time n
    //space 1
}

Given a read only array of n + 1 integers between 1 and n, find one number that repeats.

INPUT(s):

11

10 9 7 6 5 1 2 3 8 4 7

OUTPUT(s):

7

INPUT(s):

5

1 2 3 4 4

OUTPUT(s):

4

INPUT(s):

5

1 1 2 3 4

OUTPUT(s):

1

#include<stdio.h>
int main(){
    int n,a=0,b=0; //2 auxiliary var
    scanf("%d",&n);
    int ar[n]; //input array
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=1;i<n;i++){
        a=a^i;
    }
    for(int i=0;i<n;i++){
        b=b^ar[i];
    }
    printf("%d",a^b);
    //time complexity - O(n) [No nested Loops]
    //space complexity - O(1) [No new array declared]
}

Given an unsorted integer array, find the first missing positive integer. 

Example:

Given [1,2,0] return 3,

Given [3, 4, -1, 1] return 2,

Given [-8, -7, -6] return 1

Your algorithm should run in O(n) time and use constant space.

INPUT(s):

10

-9 -8 -7 -4 -3 -1 0 1 4 8

OUTPUT(s):

2

INPUT(s):

10

2 18 17 10 3 0 7 5 6 12

OUTPUT(s):

1

INPUT(s):

10

-80 -74 -72 -59 -56 -51 -40 -33 -12 -11

OUTPUT(s):

1

For example:

Input	Result
3
1 2 0
3
4
3 4 -1 1
2
3
-8 -7 -6
1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[50];
    for(int i=0;i<n;i++)
    b[i]=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b[a[i]]++;
        }
    }
    for(int i=1;i<50;i++){
        if(b[i]==0){
            printf("%d",i);
            break;
        }
    }
}

You are given a read only array of n integers from 1 to n. 

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Note that in your output A should precede B.

Example:

Input: [3 1 2 5 3]

Output: [3, 4]

A = 3, B = 4

INPUT(s):

5

3 1 2 5 3

OUTPUT(s):

3 4

INPUT(s):

5

1 4 5 3 3

OUTPUT(s):

3 2

INPUT(s):

5

1 4 2 5 5

OUTPUT(s):

5 3


For example:

Input	Result
5
3 1 2 5 3 
3 4
5
1 4 5 3 3 
3 2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n]; //input array
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m,r; //auxiliary vars
    //space complexity O(1)
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    } //time complexity - O(n^2)
    for(int i=0,j=1; i<n-1 && j<n;i++,j++){
        if(a[i]==a[j])
        r=a[i];
        if(a[j]-a[i]>1)
        m=a[i]+1;
    }
    printf("%d %d",r,m);
}

2

Find the intersection of two sorted arrays.

OR in other words,

Given 2 sorted arrays, find all the elements which occur in both the arrays. 

Input Format

·       The first line contains T, the number of test cases. Following T lines contain:

1.     Line 1 contains N1, followed by N1 integers of the first array

2.     Line 2 contains N2, followed by N2 integers of the second array

Output Format

The intersection of the arrays in a single line

Example

Input:

1

3 10 17 57

6 2 7 10 15 57 246

Output:

10 57

Input:

1

6 1 2 3 4 5 6

2 1 6

Output:

1 6

#include<stdio.h>
int find(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j])
            printf("%d ",a[i]);
        }
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    find();
}

Find the intersection of two sorted arrays.

OR in other words,

Given 2 sorted arrays, find all the elements which occur in both the arrays. 

Input Format

·       The first line contains T, the number of test cases. Following T lines contain:

1.     Line 1 contains N1, followed by N1 integers of the first array

2.     Line 2 contains N2, followed by N2 integers of the second array

Output Format

The intersection of the arrays in a single line

Example

Input:

1

3 10 17 57

6 2 7 10 15 57 246

Output:

10 57

Input:

1

6 1 2 3 4 5 6

2 1 6

Output:

1 6

#include<stdio.h>
int find(){
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
        printf("%d ",a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
        j++;
        else
        i++;
    }
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    find();
}
//time complexity m+n

Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

Example:

Input:

3

1 3 5

4

Output:

1

Explanation:

YES as 5 - 1 = 4

Return 0 / 1 (0 for false, 1 for true) for this problem.


INPUT(s):

10

1 4 6 8 12 14 15 20 21 25

1

OUTPUT(s):

1

INPUT(s):

10

1 2 3 5 11 14 16 24 28 29

0

OUTPUT(s):

0

INPUT(s):

10

0 2 3 7 13 14 15 20 24 25

10

OUTPUT(s):

1

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==k){
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    printf("0");
    else
    printf("1");
}

Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.

Example:

Input:

3

1 3 5

4

Output:

1

Explanation:

YES as 5 - 1 = 4

Return 0 / 1 (0 for false, 1 for true) for this problem.


INPUT(s):

10

1 4 6 8 12 14 15 20 21 25

1

OUTPUT(s):

1

INPUT(s):

10

1 2 3 5 11 14 16 24 28 29

0

OUTPUT(s):

0

INPUT(s):

10

0 2 3 7 13 14 15 20 24 25

10

OUTPUT(s):

1

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    int i=0,j=1;
    if(k==0)
    printf("0");
    else{
    while(i<n && j<n){
        if(abs(a[i]-a[j])==k){
        flag=1;
        break;}
        else if(abs(a[i]-a[j])>k)
        i++;
        else
        j++;
    }
    printf("%d",flag);}
}

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1: 

Input:

s = "abc", t = "ahbgdc"

Output:

true

Example 2:

Input:

s = "axc", t = "ahbgdc"

Output:

false

Constraints:

0 <= s.length <= 100

0 <= t.length <= 104

s and t consist only of lowercase English letters.


For example:

Input	Result
abc
ahbgdc
true
axc
ahbgdc
false

#include<stdio.h>
#include<string.h>
int main(){
    char s[100],str[10000];
    int count=0;
    scanf("%s",s);
    scanf("%s",str);
    int l1=strlen(s);
    int l2=strlen(str);
    int i=0,j=0;
    while(j<l2){
        if(s[i]==str[j]){
            count+=1;
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(count==l1){
        printf("true");
    }else{
        printf("false");
    }
}
//No new array or string taken - Space complexity = O(1)
//No nested loops used- Time complexity = O(t) where t is l2 here

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

· Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.

· Return k.

Example 1:

Input:

nums = [1,1,2]

Output:

2, nums = [1,2,_]

Explanation:

Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.

It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:

Input:

nums = [0,0,1,1,1,2,2,3,3,4]

Output:

5, nums = [0,1,2,3,4,_,_,_,_,_]

Explanation:

Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.

It does not matter what you leave beyond the returned k (hence they are underscores).

Constraints:

1 <= nums.length <= 3 * 10^4

-100 <= nums[i] <= 100

nums is sorted in non-decreasing order.


For example:

Input	Result
3
1 1 2
2

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=0,j=1; //Two pointers
    while(j<n){
        if(a[k]==a[j]){
            j++;
        }else{
            k++;
            a[k]=a[j];
            j++;
        }
    }
    printf("%d",k+1);
    //No new arrays used - Space complexity O(1)
    //No nested loops - Time complexity O(n)
}

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.
Input:

9 

1 8 6 2 5 4 8 3 7

Output: 

49

Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

Input: 

2

11

Output: 

1

Example 3:

5

4 3 2 1 4

Output: 

16

Example 4:

Input:

3 

1 2 1

Output: 

2

Constraints:

n == height.length

2 <= n <= 10^5

0 <= height[i] <= 10^4

#include<stdio.h>
int min(int a,int b){
    return a<b?a:b;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    int maxArea=0,area;
    while(i<n){
        area=(j-i)*min(a[i],a[j]);
        if(area>maxArea)
        maxArea=area;
        if(a[i]<a[j])
        i++;
        else
        j--;
    }
    printf("%d",maxArea);
}
//No new array taken - Space complexity O(1)
//No nested loops - Time complexity O(n)

3

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

Example 1:



Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output:

[[7,4,1],[8,5,2],[9,6,3]]

Example 2:



Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

Output:

[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

Constraints:

n == matrix.length == matrix[i].length

1 <= n <= 20

-1000 <= matrix[i][j] <= 1000



For example:

Input	Result
3
1 2 3
4 5 6
7 8 9
7 4 1
8 5 2
9 6 3

#include<stdio.h>
void swap(int* a,int* b){
    int t;
    t= *a;
    *a = *b;
    *b =t;
}
// void rev(int* a[],int n){
// int i=0;
// int j=n-1;
// while(i<j){
//     swap(&a[i],&a[j]);
// }
// }
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          swap(&a[i][j],&a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(&a[i][j],&(a[i][n-j-1]));
        }
    }
    // for(int j=0;j<n;j++){
    // int c=0,b=n-1;
    // while(c<b){
    //     swap(&a[j][c],&a[j][b]);
    // }
        
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(j==n-1){
                printf("\n");
            }
        }
    }
}

ou are given a square matrix of dimension N. Let this matrix be called A. Your task is to rotate A in clockwise direction by S degrees, where S is angle of rotation. On the matrix, there will be 3 types of operations viz.

1.      Rotation

Rotate the matrix A by angle S, presented as input in form of A S

2.      Querying

Query the element at row K and column L, presented as input in form of Q K L

3.      Updation

Update the element at row X and column Y with value Z, presented as input in form of U X Y Z

Print the output of individual operations as depicted in Output Specification.

Input Format:

Input will consist of three parts, viz.

1.      Size of the matrix (N)

2.      The matrix itself (A = N * N)

3.      Various operations on the matrix, one operation on each line. (Beginning either with A, Q or U)

4.      -1 will represent end of input

Note:

· Angle of rotation will always be multiples of 90 degrees only.

· All Update operations happen only on the initial matrix. After update all the previous rotations have to be applied on the updated matrix

Output Format:

For each Query operation print the element present at K-L location of the matrix in its current state.

Constraints:

1<=N<=1000

1<=Aij<=1000

0<=S<=160000

1<=K, L<=N

1<=Q<=100000

Sample Input and Output

Input 

2

1 2

3 4

A 90

Q 1 1

Q 1 2

A 90

Q 1 1

U 1 1 6

Q 2 2

-1

Output

3

1

4

6

Explanation:

Initial Matrix

1 2

3 4

After 90-degree rotation, the matrix will become

3 1

4 2

Now the element at A11 is 3 and A12 is 1.

Again the angle of rotation is 90 degrees, now after the rotation the matrix will become

4 3

2 1

Now the element at A11 is 4.

As the next operation is Update, update initial matrix i.e.

6 2

3 4

After updating, apply all the previous rotations (i.e. 180 = two 90 degree rotations)

The matrix will now become

4 3

2 6

Now A22 is 6.


For example:

Input	Result
2
1 2
3 4
A 90
Q 1 1
Q 1 2
A 90
Q 1 1
U 1 1 6
Q 2 2
-1

#include<stdio.h>
int n,a[1000][1000],t[1000][1000];
void rotate(int an){
    int rot=(an/90)%4;
    while(rot){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=t[i][j];
        }
    }
    rot--;
    }
}
int main(){
    int tot=0,r,c,angle,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    scanf(" %d",&a[i][j]);
        }}
    char ch;
    while(1){
        scanf(" %c",&ch);
        if(ch=='A'){
            scanf(" %d",&angle);
            rotate(angle);
            tot+=angle;
        }else if(ch=='Q'){
            scanf(" %d %d",&r,&c);
            printf("%d\n",a[r-1][c-1]);
        }else if(ch=='U'){
            scanf(" %d %d %d",&r,&c,&v);
            int org= 360-(tot%360);
            rotate(org);
            a[r-1][c-1]=v;
            rotate(tot);
        }else{
            break;
        }
    }
}

Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

Example 1:



Input:

mat = [[0,1],[1,0]], target = [[1,0],[0,1]]

Output:

true

Explanation:

We can rotate mat 90 degrees clockwise to make mat equal target.

Example 2:



Input:

mat = [[0,1],[1,1]], target = [[1,0],[0,1]]

Output:

false

Explanation:

It is impossible to make mat equal to target by rotating mat.

Example 3:



Input:

mat = [[0,0,0],[0,1,0],[1,1,1]], target = [[1,1,1],[0,1,0],[0,0,0]]

Output:

true

Explanation:

We can rotate mat 90 degrees clockwise two times to make mat equal target.

Constraints:

n == mat.length == target.length

n == mat[i].length == target[i].length

1 <= n <= 10

mat[i][j] and target[i][j] are either 0 or 1.



For example:

Input	Result
2
0 1
1 0
1 0
0 1
true
2
0 1
1 1
1 0
0 1
false

#include<stdio.h>
int n;
int a[10][10];
void rotate(int a[10][10]){
    int tom[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tom[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=tom[i][j];
        }
    }
}
int check(int t[10][10]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=t[i][j]){
             return 0;}
        }
    }
    return 1;
}

int process(){
    scanf("%d",&n);
    int t[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&t[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        rotate(a);
        int c=check(t);
        if(c==1){
            return 1;
        }
    }
   return 0;
}
int main(){
    int a=process();
    if(a==0)
    printf("false");
    else
    printf("true");
}

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.

Each column must contain the digits 1-9 without repetition.

Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

Note:

·         A Sudoku board (partially filled) could be valid but is not necessarily solvable.

·         Only the filled cells need to be validated according to the mentioned rules.

Example 1:

Input: board =

[["5","3",".",".","7",".",".",".","."]

,["6",".",".","1","9","5",".",".","."]

,[".","9","8",".",".",".",".","6","."]

,["8",".",".",".","6",".",".",".","3"]

,["4",".",".","8",".","3",".",".","1"]

,["7",".",".",".","2",".",".",".","6"]

,[".","6",".",".",".",".","2","8","."]

,[".",".",".","4","1","9",".",".","5"]

,[".",".",".",".","8",".",".","7","9"]]

Output:

true

Example 2:

Input: board =

[["8","3",".",".","7",".",".",".","."]

,["6",".",".","1","9","5",".",".","."]

,[".","9","8",".",".",".",".","6","."]

,["8",".",".",".","6",".",".",".","3"]

,["4",".",".","8",".","3",".",".","1"]

,["7",".",".",".","2",".",".",".","6"]

,[".","6",".",".",".",".","2","8","."]

,[".",".",".","4","1","9",".",".","5"]

,[".",".",".",".","8",".",".","7","9"]]

Output:

false

Explanation:

Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.

Constraints:

board.length == 9

board[i].length == 9

board[i][j] is a digit 1-9 or '.'.


For example:

Input	Result
53..7....
6..195...
.98....6.
8...6...3
4..8.3..1
7...2...6
.6....28.
...419..5
....8..79
true
83..7....
6..195...
.98....6.
8...6...3
4..8.3..1
7...2...6
.6....28.
...419..5
....8..79
false

#include<stdio.h>
int row(char ar[9]){
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(ar[i]==ar[j] && ar[i]!='.'){
            return 0;}
        }
    }
    return 1;
}
int grid(int ri,int ci,char a[9][9]){
    char new[9];
    int c=0;
    for(int i=ri;i<ri+3;i++){
        for(int j=ci;j<ci+3;j++){
            new[c]=a[i][j];
            // printf("%d %d \n",i,j);
            c++;
        }
    }
    // for(int i=0;i<9;i++)
    // printf("%c here\n",new[i]);
    // printf("\n");
    return row(new);
}
int process(){
    char a[9][9];
    // int g[3][3];
    char o;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%c",&a[i][j]);
            if(j==o){
                scanf("%c",&o);
                scanf("%c",&o);
            }
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]!='.'){
                int r=row(a[i]);
                int c=row(a[j]);
                int ri=i/3;
                int ci=j/3;
                int g=grid(ri,ci,a);
                if(!(r && c && g)){
                    return 0;
                }
                // printf("%d",grid(ri,ci,a));
                // printf("%d %d herre\n",ri,ci);
                // int p=ri;
                // int q=ci;
                // for(int m=0;m<3 && p<ri+3;m++){
                //     for(int n=0;n<3 && q<ci+3;n++){
                //         g[m][n]=a[p][q];
                //         printf("%d %d %d %d")
                //         q++;
                //         printf("%c ",g[m][n]);
                //     }
                //     p++;
                // }
              
            }
        }
    }
    return 1;
}
int main(){
    if(process())
    printf("true");
    else
    printf("false");
}

You are given an n x n 2D matrix representing an image, rotate the image by given degrees (90 / 180 / 270 / 360) (clockwise).

Example 1:



Input: 

matrix = [[1,2,3],[4,5,6],[7,8,9]]

degree = 90

Output:

[[7,4,1],[8,5,2],[9,6,3]]

Example 2:



Input: 

matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

degree = 90

Output:

[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

Constraints:

n == matrix.length == matrix[i].length

1 <= n <= 20

-1000 <= matrix[i][j] <= 1000


For example:

Input	Result
3
1 2 3
4 5 6
7 8 9
90
7 4 1
8 5 2
9 6 3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],t[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int ag;
    scanf("%d",&ag);
    int c=(ag/90)%4;
    for(int k=0;k<c;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                t[j][n-i-1]=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=t[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(j==n-1)
            printf("\n");
        }
    }
}

4

Given an n x n matrix, return all elements of the matrix in spiral order.

Example 1:



Input:

matrix = [[1,2,3],[4,5,6],[7,8,9]]

Output:

[1,2,3,6,9,8,7,4,5]

Constraints:

n == matrix.length

n == matrix[i].length

1 <= n <= 10

-100 <= matrix[i][j] <= 100
For example:

Input	Result
3
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s=0,st,e;
    while(s<n/2){
        st=s;
        e=n-s-1;
        for(int j=st;j<e;j++)
        printf("%d ",a[st][j]);
        for(int i=st;i<e;i++)
        printf("%d ",a[i][e]);
        for(int j=e;j>st;j--)
        printf("%d ",a[e][j]);
        for(int i=e;i>st;i--)
        printf("%d ",a[i][st]);
        s++;
    }
    if(n%2!=0)
    printf("%d ",a[n/2][n/2]);
}
//st - start index in each square which is equal to square index
//e - end index in each square which is equal to n-s-1

Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

Example 1:



Input:

n = 3

Output:

[[1,2,3],[8,9,4],[7,6,5]]

Example 2:

Input:

n = 1

Output:

[[1]]

Constraints:

1 <= n <= 20


For example:

Input	Result
3
1 2 3
8 9 4
7 6 5
1
1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    int s=0,st,e,c=1;
    while(s<n/2){
        st=s;
        e=n-s-1;
        for(int j=st;j<e;j++)
        a[st][j]=c++;
        for(int i=st;i<e;i++)
        a[i][e]=c++;
        for(int j=e;j>st;j--)
        a[e][j]=c++;
        for(int i=e;i>st;i--)
        a[i][st]=c++;
        s++;
    }
    if(n%2!=0)
    a[n/2][n/2]=c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(j==n-1)
            printf("\n");
        }
    }
}
// st - index of square an the starting index
// e - end index and n-s-1

During the battle of Mahabharat, when Arjuna was far away in the battlefield, Guru Drona made a Chakravyuha formation of the Kaurava army to capture Yudhisthir Maharaj. Abhimanyu, young son of Arjuna was the only one amongst the remaining Pandava army who knew how to crack the Chakravyuha. He took it upon himself to take the battle to the enemies.

Abhimanyu knew how to get power points when cracking the Chakravyuha. So great was his prowess that rest of the Pandava army could not keep pace with his advances. Worried at the rest of the army falling behind, Yudhisthir Maharaj needs your help to track of Abhimanyu’s advances. Write a program that tracks how many power points Abhimanyu has collected and also uncover his trail

A Chakravyuha is a wheel-like formation. Pictorially it is depicted as below:



A Chakravyuha has a very well-defined co-ordinate system. Each point on the co-ordinate system is manned by a certain unit of the army. The Commander-In-Chief is always located at the center of the army to better co-ordinate his forces. The only way to crack the Chakravyuha is to defeat the units in sequential order.

A Sequential order of units differs structurally based on the radius of the Chakra. The radius can be thought of as length or breadth of the matrix depicted above. The structure i.e. placement of units in sequential order is as shown below:



The entry point of the Chakravyuha is always at the (0,0) co-ordinate of the matrix above. This is where the 1st army unit guards. From (0,0) i.e. 1st unit Abhimanyu has to march towards the center at (2,2) where the 25th i.e. the last of the enemy army unit guards. Remember that he has to proceed by destroying the units in sequential fashion. After destroying the first unit, Abhimanyu gets a power point. Thereafter, he gets one after destroying army units which are multiples of 11. You should also be a in a position to tell Yudhisthir Maharaj the location at which Abhimanyu collected his power points.

Input Format

First line of input will be length as well as breadth of the army units, say N

Output Format

· Print NxN matrix depicting the placement of army units, with unit numbers delimited by (\t) Tab character

· Print Total power points collected

· Print coordinates of power points collected in sequential fashion (one per line)

Constraints

0 < N <=100

Sample Input & Output

Input

2

Output

1 2

4 3

Total Power points : 1

(0,0)

Input

5

Output

1 2 3 4 5

16 17 18 19 6

15 24 25 20 7

14 23 22 21 8

13 12 11 10 9

Total Power points : 3

(0,0)

(4,2)

(3,2)


For example:

Input	Result
2
1 2
4 3
Total Power points : 1
(0,0)
5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
Total Power points : 3
(0,0)
(4,2)
(3,2)

#include<stdio.h>
int main(){
    int n,st,e,c=1;
    scanf("%d",&n);
    int a[n][n];
    int s=0;
    int ans[(((n*n)/11)+2)*2];
    ans[0]=0;
    ans[1]=0;
    int t=2;
    while(s<n/2){
        st=s;
        e=n-s-1;
        for(int j=st;j<e;j++){
        a[st][j]=c++;
        if(a[st][j]%11==0){
            ans[t++]=st;
            ans[t++]=j;
        }
        }
        for(int i=st;i<e;i++){
        a[i][e]=c++;
        if(a[i][e]%11==0){
            ans[t++]=i;
            ans[t++]=e;
        }
        }
        for(int j=e;j>st;j--){
        a[e][j]=c++;
        if(a[e][j]%11==0){
            ans[t++]=e;
            ans[t++]=j;
        }
        }
        for(int i=e;i>st;i--){
        a[i][st]=c++;
        if(a[i][st]%11==0){
            ans[t++]=i;
            ans[t++]=st;
        }
        }
        s++;
    }
    if(n%2!=0){
        a[n/2][n/2]=n*n;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(j==n-1)
            printf("\n");
        }
    }
    printf("Total Power points : %d\n",t/2);
    for(int i=0;i<t;i+=2){
        printf("(%d,%d)\n",ans[i],ans[i+1]);
    }
}

Your password cracking abilities were greatly appreciated by Chhota Bheem. Just as he was about to induct you into his team, he got a call from his friend Perry the Platypus. This was quite alarming, because Perry hardly speaks - a phone call is only in emergency situations.

Perry has an important password to crack. Unfortunately, his arch-enemy has hidden this password in a 2D grid of size N x N:



These are the instructions given to you by Perry:

1.      The highlighted parts above are the generators. The rest of the grid is not useful, only the generators are. The generators are found by starting from bottom left corner, moving to middle of first row and then going to the bottom right corner again. All the while skipping one element. Refer to above image.

2.      Thus, you will have N generators

3.      You have to collect the N generators, and form a string. Each generator corresponds to an alphabet

4.      The alphabet is obtained by from each generator. The number 1 corresponds to a, 2 to b and so on...

5.      If we get a number above 26, we will start assigning from a again. So 27 becomes a, 28 is b and so on...

6.      Combine the each of the alphabets and the resultant is your answer

Thus, in the above case, we get the following N generators:

13 10 23 18 44 22 2, which translate into: mjwrrvb

Explanation: 13 -> m, 10 -> j, 23 -> w, 18 -> r, 44 -> 18 -> r,

22 -> v, 2 -> b

Given an N and a grid, you must help Perry find the password.

Note: N is always odd and greater than 1. All numbers in the grid are greater than 0.

Input format

· The first line contains T, the number of test cases. Following T lines contain:

· N and N, the size of the 2D grid. This is followed by N x N  numbers in a single line

Output format

· Print each password in a single line

Example Input

2

3 3 16 13 4 16 13 19 23 8 11

7 7 26 28 5 18 27 32 50 13 42 32 11 5 40 27 16 34 23 49 44 17 36 48 10 46 20 13 43 36 1 10 19 29 23 22 20 49 35 15 41 7 29 34 13 23 45 50 31 8 2

Example Output

wmk

mjwrrvb

Explanation:

The first case forms this grid:

16 13 4

16 13 19

23 8 11

Generators are 23 13 11 -> wmk

The second case is the same as the one described in the image.


For example:

Input	Result
2
3 3 16 13 4 16 13 19 23 8 11
7 7 26 28 5 18 27 32 50 13 42 32 11 5 40 27 16 34 23 49 44 17 36 48 10 46 20 13 43 36 1 10 19 29 23 22 20 49 35 15 41 7 29 34 13 23 45 50 31 8 2
wmk
mjwrrvb

#include<stdio.h>
void func(int m, int p){
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    char ans[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int pass[m*m];
    int c=0;
    int s=0;
    int e=m-1;
    while(e>0 && s<m/2){
        pass[c++]=a[e][s];
        s+=1;
        e-=2;
    }
    pass[c++]=a[0][m/2];
    e=2;
    s=m/2+1;
    while(e<m && s<m){
        pass[c++]=a[e][s];
        e+=2;
        s+=1;
    }

    for(int i=0;i<c;i++)
    printf("%c",ans[(pass[i]-1)%26]);
}
int main(){
    int n,m,p;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf(" %d",&m);
        scanf(" %d",&p);
        func(m,p);
        printf("\n");
    }
}

Sometimes instructions are straightforward, and other times they are not. For example, if Shaktimaan had just drafted you as a normal intern, you wouldn't be in this mess.

What's the mess? Well, you were able to cure Phoenix by getting the antidotes. The problem was that the antidotes also released so much energy that you got caught in a wormhole. And just your luck - you landed in a maze at the side of Wonder Woman.

Wonder Woman is racing through the 2D maze. She starts at a position A and wants to go to position B. She can move only 1 block at a time - either vertically or horizontally. Also, her vertical moves and horizontal move can only be in 1 direction each.

Let' say she starts at A (1,1) and needs to reach B (3,3). Vertically she is allowed to move only to the South S and horizontally to the E. No matter what moves she makes, it's impossible to reach B, because she can never go North

However, if she is allowed to move NE, which means vertically North and horizontally East, she has many ways of reaching B:



Totally she has 6 ways. of reaching her destination.

Given the coordinates of her starting and and desired ending positions, you need tell either impossible if it's not possible to reach, or print the total ways possible to reach B from A

Input format

· The first line of input contains T, the number of test cases

· The first line contains the x and y coordinates of A

· The second line contains the x and y coordinates of B

· This is followed by the direction string. The first character contains S or N, the second one E or W

0 <= x,y <= 15

Output format

For each test case, print impossible or the total way possible to reach B from A

Example Input

4

1 1

3 3

NE

10 10

1 1

NE

3 7

5 3

SW

1 4

0 6

NW

Example Output

Total Ways: 6

impossible

impossible

Total Ways: 3

Explanation

1. The first case is explained above

2. The second case requires us to move S and W, but allowed is N and E. Hence it's impossible

3. The third case requires us to move E for 3 -> 5, and S for 7 -> 3. We need SE, but we have SW. Hence it's impossible

4. The last case is possible. The possible paths are: 1,4 -> 1,5 -> 1,6 -> 0,6, 1,4 -> 0,4 -> 0,5 -> 0, 6, 1,4 -> 1,5 -> 0,5 -> 0,6


For example:

Input	Result
4
1 1
3 3
NE
10 10
1 1
NE
3 7
5 3
SW
1 4
0 6
NW
Total Ways: 6
impossible
impossible
Total Ways: 3

find

5

In Fibonacci series, the next number is the sum of previous two numbers. The series starts with 0 and 1, and then the next numbers are a sum of the previous 2 numbers.

For example: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 etc.

Here the first 2 numbers are 0 and 1

The next numbers are:

· 1 (= 1 + 0)

· 2 (= 1 + 1)

· 3 (= 2 + 1)

· 5 (= 3 + 2)

And so on…

Write a program the first n numbers of the Fibonacci series.

Hint: You already know the first 2 values. How can you calculate the remaining?

Input Format

The first line contains T the number of test cases.

The following T lines contain n, the input for the Fibonacci Series.

Output Format

Print the values on a single line, separated by a space character. At the end of the line, print a new line.

Sample Input / Output

Input

5

3

4

8

9

7

Output

0 1 1

0 1 1 2

0 1 1 2 3 5 8 13

0 1 1 2 3 5 8 13 21

0 1 1 2 3 5 8


For example:

Input	Result
5
3
4
8
9
7
0 1 1
0 1 1 2
0 1 1 2 3 5 8 13
0 1 1 2 3 5 8 13 21
0 1 1 2 3 5 8

#include<stdio.h>
void fibo(int n){
    int a=0;
    int b=1,c;
    printf("%d %d ",a,b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int j;
        scanf("%d",&j);
        fibo(j);
    }
}

In Lucas series, the next number is the sum of previous two numbers. The series starts with 2 and 1, and then the next numbers are a sum of the previous 2 numbers.

For example: 2, 1, 3, 4, 7, 11, 18, 29, etc.

Here the first 2 numbers are 2 and 1

The next numbers are:

· 3 (= 1 + 2)

· 4 (= 3 + 1)

· 7 (= 4 + 3)

· 11 (= 7 + 4)

And so on…

Write a program the first n numbers of the Lucas series.

Hint: You already know the first 2 values. How can you calculate the remaining?

Input Format

The first line contains T the number of test cases.

The following T lines contain n, the input for the Fibonacci Series.

Output Format

Print the values on a single line, separated by a space character. At the end of the line, print a new line.

Sample Input / Output

Input

5

3

4

8

9

7

Output

2 1 3

2 1 3 4

2 1 3 4 7 11 18 29

2 1 3 4 7 11 18 29 47

2 1 3 4 7 11 18

For example:

Input	Result
5
3
4
8
9
7
2 1 3
2 1 3 4
2 1 3 4 7 11 18 29
2 1 3 4 7 11 18 29 47
2 1 3 4 7 11 18

#include<stdio.h>
void lucas(int n){
    int a=2,b=1,c;
    printf("%d %d ",a,b);
    for(int i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int j;
        scanf("%d",&j);
        lucas(j);
    }
}

dentify the logic behind the series:

6 28 66 120 190 276 …

The numbers in the series should be used to create a Pyramid.

The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words, there will be N numbers on the bottom layer of the pyramid.

The Pyramid construction rules are as follows:

1. First number in the series should be at the top of the Pyramid.

2. Last N number of the series should be on the bottom-most layer of the Pyramid, with Nth number being the right-most number of this layer.

3. Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.

Example

If input is 2, output will be:

   00006  

00028 00066

If input is 3, output will be:

      00006  

   00028 00066  

00120 00190 00276

Formal input and output specifications are stated below:

Input Format:

First line of input will contain number k - the number of inputs.

The following k lines contain N that corresponds to the width of the bottom-most layer of each Pyramid

Output Format:

The Pyramid constructed out of numbers in the series as per stated construction rules

Constraints:

0 < N <= 14


For example:

Input	Result
1
2
   00006   
00028 00066
1
5
            00006 
         00028 00066 
      00120 00190 00276 
   00378 00496 00630 00780 
00946 01128 01326 01540 01770 

#include<stdio.h>
int element(int n){
    int a=2,b=3;
    for(int i=1;i<n;i++){
        a+=2;
        b+=4;
    }
    return a*b;
}
int main(){
    int n,m;
    scanf("%d",&n);
    int c=1;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        for(int i=1;i<=m;i++){
            printf("%*s",(m-i)*3,"");
            for(int j=1;j<=i;j++){
                printf("%05d ",element(c));
                c++;
            }
            printf("\n");
        }
    }
}

Decode the logic and print the Pattern that corresponds to given input.

If N= 3

then pattern will be:

10203010011012

**4050809

****607

If N= 4, then pattern will be:

1020304017018019020

**50607014015016

****809012013

******10011

Constraints

· 2 <= N <= 100

Input Format

· First line contains T, the number of test cases

· Each test case contains a single integer N

Output

1. First line print Case #i where i is the test case number

2. In the subsequent line, print the pattern

Test Case 1

3

3

4

5

Output

Case #1

10203010011012

**4050809

****607

Case #2

1020304017018019020

**50607014015016

****809012013

******10011

Case #3

102030405026027028029030

**6070809022023024025

****10011012019020021

******13014017018

********15016


For example:

Input	Result
3
3
4
5
Case #1
10203010011012
**4050809
****607
Case #2
1020304017018019020
**50607014015016
****809012013
******10011
Case #3
102030405026027028029030
**6070809022023024025
****10011012019020021
******13014017018
********15016

#include<stdio.h>
int c=1;
void pattern(int n){
    printf("Case #%d\n",c++);
    int s=0;
    
    int g=((n*(n+1))/2)*2; 
    //to find the last element in the first row which can be found by (elements in one triangle)*2 ....the elements in one triangle is (n*(n+1)/2)
    
    int first=g-(n-1); 
    //to find the first element in the second triangle of first row, which will be last element - (n-1)
    
    for(int r=1;r<=n;r++){
        
        //to print *
        for(int k=0;k<(r-1)*2;k++)
        printf("*");
        
        //to print the 10 series in the first triangle
        for(int m=1;m<=n-(r-1);m++)
        printf("%d",s+=10);
        
        //to print the number series with 0 in the second triangle
        for(int q=first;q<first+(n-r-1)+2;q++){
            printf("%d",q);
            if(q!=(first+(n-r-1))+1)
            printf("0");
        }
        
        first=(first-1)-(n-r-1);
        //to update the first element of the second triangle in each row
        
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        pattern(m);
    }
}

Pascal's triangle giving binomial coefficients is well known.

In this triangle, elements in each row can be obtained by adding two adjacent elements in the previous row. The pyramid of numbers we construct in this problem is similar to the Pascal triangle.

We start with six numbers at the base of the pyramid, and construct the pyramid one layer at a time by adding the two adjacent numbers in the previous layer.

For Example, starting with the numbers 1 2 3 4 5 6 in the base, we get the following pyramid. The apex of the pyramid is filled with the product of the numbers in the row below instead of the sum.

        48  64

      20  28  36

    8   12  16  20

  3   5   7    9    11

1   2   3    4    5     6

In the above pyramid, the apex is filled with the number 48 x 64 =3072. The aim is to get the largest number possible at the apex of the pyramid.

The input will be a set of N positive integers. Six need to be chosen from these and arranged at the base to get the largest possible number at the top.

Input Format:

· The first line of the input is N, the total number of integers that will be given.

· The second line is a set of N (not necessarily distinct) comma separated positive integers from which the six numbers at the base need to be selected.

Output Format:

The output is one line with an integer representing the maximum value of the apex of the pyramid when six integers are selected and arranged suitably at the base.

Constraints:

· N < 13

· Integers provided for selection ≤ 100 

Example 1

Input

8

10 4 74 61 8 37 2 35

Output

746415

Explanation

There are 8 numbers given, from which the 6 numbers in the base are to be selected and arranged so as to maximize the apex number. One way of doing this is in the figure below.

        855 873

      378  477 396

    145 233 244  152

  47  98  135  109  43

10  37  61  74   35    8

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[6];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n<6){
        for(int i=n;i<6;i++){
            a[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=a[i];
    }
    // int k=0;
    // int m=1;
    // while(m<n){
    //     if(a[k]==a[m]){
    //         m++;
    //     }else{
    //         k++;
    //         a[k]=a[m];
    //         m++;
    //     }
    // }
    // int u=k+1;
    // if(u>=6){
    // b[5]=a[u-6];
    // b[0]=a[u-5];
    // b[4]=a[u-4];
    // b[1]=a[u-3];
    // b[2]=a[u-2];
    // b[3]=a[u-1];
    // }else{
       b[5]=arr[n-6];
       b[0]=arr[n-5];
       b[4]=arr[n-4];
       b[1]=arr[n-3];
       b[2]=arr[n-2];
       b[3]=arr[n-1];
    // }
    int c[5];
    for(int i=0;i<n;i++){
        c[i]=b[i]+b[i+1];
    }
    int d[4];
    for(int i=0;i<4;i++){
        d[i]=c[i]+c[i+1];
    }
    int e[3];
    for(int i=0;i<3;i++){
        e[i]=d[i]+d[i+1];
    }
    int f[2];
    for(int i=0;i<2;i++){
        f[i]=e[i]+e[i+1];
    }
    printf("%d",f[0]*f[1]);
}

Input Format 

N = 5

Output Format

Sample Input 1

5

Sample Output 1

             1  2  3  4  5

         10  9  8  7  6

      11 12 13 14 15

   20 19 18 17 16

21 22 23 24 25


For example:

Input	Result
5
             1  2  3  4  5 
         10  9  8  7  6 
      11 12 13 14 15 
   20 19 18 17 16 
21 22 23 24 25 


#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        printf("%*s",3*(n-i),"");
        for(int j=1;j<=n;j++){
            printf("%2d ",k++);
        }
        printf("\n");
        k=k+(n-1);
        }
        else{
        printf("%*s",3*(n-i),"");
        for(int j=1;j<=n;j++){
            printf("%2d ",k--);
        }
        printf("\n");
        k=k+n+1;
        }
    }
}

6

Let’s print a chessboard!

Write a program that takes input:

The first line contains T, the number of test cases

Each test case contains an integer N and also the starting character of the chessboard

Output Format

Print the chessboard as per the given examples

Sample Input / Output

Input:

2

2 W

3 B

Output:

WB

BW

BWB

WBW

BWB

 


For example:

Input	Result
2
2 W
3 B
WB
BW
BWB
WBW
BWB

#include<stdio.h>
void pattern(int n,char c){
    int a;
    if(c=='W')
    a=1;
    else
    a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a==1){
            printf("W");
            a--;}
            else{
            printf("B");
            a++;}
        }
        if(n%2==0){
        if(a==0)
        a=1;
        else
        a=0;}
        printf("\n");
    }
}
int main(){
    int n,m;
    char c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        scanf(" %c",&c);
        pattern(m,c);
    }
}

Given an integer n as input, print an inverted full pyramid of n rows.

Input Format:

Take input an integer from stdin.

Output Format:

Print the pattern

Example Input:

10

Output:

* * * * * * * * * *

 * * * * * * * * *

  * * * * * * * *

   * * * * * * *

    * * * * * *

     * * * * *

      * * * *

       * * *

        * *

         *


For example:

Input	Result
10
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         *

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        printf("%*s",n-i,"");
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

Given a string S of odd length L, the program must print it twice as diagonals with the middle letter being the point of intersection. 

Input Format:

The first line contains the value of S.

Boundary Conditions:

The length of the String S is from 3 to 20.

1 <= L (Length of S) <= 20

Output Format:

L lines printing the desired pattern.

Example Input/Output 1:

Input:

PROGRAM

Output:

P     M  

 R   A  

  O R   

   G  

  O R  

 R   A

P     M

Example Input/Output 2:

Input:

CABLE

Output:

C   E

 A L

  B

 A L

C   E


For example:

Input	Result
PROGRAM
P     M  
 R   A   
  O R    
   G   
  O R  
 R   A 
P     M
CABLE
C   E
 A L
  B
 A L
C   E

#include<stdio.h>
#include<string.h>
int main(){
    char a[21];
    scanf("%s",a);
    int n=strlen(a);
    for(int i=1;i<=n/2;i++){
        printf("%*s",i-1,"");
        printf("%c",a[i-1]);
        printf("%*s",n-(2*i),"");
        printf("%c",a[n-i]);
        printf("\n");
    }
    printf("%*s",n/2,"");
    printf("%c\n",a[n/2]);
    int c=n/2-1;
    int d=n/2+1;
    for(int i=1;i<=n/2;i++){
        printf("%*s",n/2-i,"");
        printf("%c",a[c--]);
        printf("%*s",2*i-1,"");
        printf("%c",a[d++]);
        printf("\n");
    }
}

Chirag is a pure Desi boy. And his one and only dream is to meet Santa Claus. He decided to decorate a Christmas tree for Santa on coming Christmas. Chirag made an interesting Christmas tree that grows day by day.

The Christmas tree is comprised of the following:

· Parts

· Stand

Each Part is further comprised of Branches. Branches are comprised of Leaves.

How the tree appears as a function of days should be understood. Basis that print the tree as it appears on the given day. Below are the rules that govern how the tree appears on a given day.

Write a program to generate such a Christmas tree whose input is number of days.

Rules:

1. If tree is one-day old, you cannot grow. Print a message “You cannot generate Christmas tree”.

2. Tree will die after 20 days; it should give a message “Tree is no more”.

3. Tree will have one part less than the number of days. E.g.

    o On 2nd day tree will have 1 part and one stand.

    o On 3rd day tree will have 2 parts and one stand.

    o On 4th day tree will have 3 parts and one stand and so on.

4. Top-most part will be the widest and bottom-most part will be the narrowest.

5. Difference in number of branches between top-most and second from top will be 2.

6. Difference in number of branches between second from top and bottom-most part will be 1.

Below is an illustration of how the tree looks like on 4th day


4th Day Illustration

Input Format:

First line of input contains k - the number of inputs

The next k lines denote the number of days N

Output Format:

Print Christmas Tree for given N

OR

Print “You cannot generate Christmas tree” if N <= 1

OR

Print “Tree is no more” if N > 20

Constraints:

0<= N <=20

Example:

Input:

2

1

2

Output:

You cannot generate Christmas tree

  *

 ***

*****

  * 

  * 

Input

5

0

1

2

1000

5

Expected Output

You cannot generate Christmas tree

You cannot generate Christmas tree

  *

 ***

*****

  *

  *

Tree is no more

     *

    ***

   *****

  *******

 *********

***********

    ***

   *****

  *******

 *********

    ***

   *****

  *******

    ***

   *****

     *

     *


For example:

Input	Result
2
1
2
You cannot generate Christmas tree
  *
 ***
*****
  *  
  *  

#include<stdio.h>
void pattern(int m){
    if(m==0 || m==1){
        printf("You cannot generate Christmas tree\n");
    }else if(m>20){
        printf("Tree is no more\n");
    }else{
        printf("%*s",m,"");
        printf("*\n");
        for(int i=m;i>1;i--){
            for(int j=1;j<=i;j++){
                printf("%*s",m-j,"");
                for(int k=1;k<=(2*j)+1;k++){
                    printf("*");
                }
                printf("\n");
            }
        }
        printf("%*s",m,"");
        printf("*\n");
        printf("%*s",m,"");
        printf("*\n");
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        pattern(m);
    }
}

Write a program to construct a latin square of a given N.

A latin square is an n X n matrix array filled with n different symbols, each occurring exactly once in each row and exactly once in each column

Sample Input 1

3

Sample Output 1

A B C 

C A B 

B C A



For example:

Input	Result
3
A B C 
C A B 
B C A 
4
A B C D 
D A B C 
C D A B 
B C D A 

#include<stdio.h>
int main(){
    int n;
    char s[100],temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        s[i]='A'+i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",s[j]);
        }
        printf("\n");
        temp=s[n-1];
        for(int k=n-1;k>0;k--){
            s[k]=s[k-1];
        }
        s[0]=temp;
    }
}

Assume that the given string has enough memory.

Sample Input 1

a2b4c6

Sample Output 1

aabbbbcccccc



For example:

Input	Result
a2b4c6
aabbbbcccccc
a12b3d4
aaaaaaaaaaaabbbdddd
a100b3c12
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcccccccccccc
#include<stdio.h>
int main(){
    int n;
    char c;
    for(int i=0;i<3;i++){
        scanf("%c",&c);
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            printf("%c",c);
        }
    }
}

Print the string as the following pattern (only for odd length string).

Sample Input 1

Hello

Sample Output 1

    l

   ll

  llo

 lloH

lloHe



For example:

Input	Result
Hello
    l
   ll
  llo
 lloH
lloHe
PROGRAM
      G
     GR
    GRA
   GRAM
  GRAMP
 GRAMPR
GRAMPRO

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=1;i<=n;i++){
        printf("%*s",n-i,"");
        int k=n/2;
        for(int j=1;j<=i;j++){
            printf("%c",str[k]);
            k++;
        if(k>=n)
        break;
        }
        int m=0;
        if(i>n/2+1){
            for(int p=1;p<=i-n/2-1;p++){
                printf("%c",str[m]);
                m++;
            }
        }
        printf("\n");
    }
}

7

Given an even number (greater than 2), return two prime numbers whose sum will be equal to given number.

NOTE: A solution will always exist.

Example:

Input:

4

Output:

2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b, and [c,d] is another solution with c <= d, then

[a, b] < [c, d]

If a < c OR a==c AND b < d.


For example:

Input	Result
4
2 2

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    //find prime by sive's method
    for(int i=2;i<=sqrt(n);i++){
        if(p[i]!=0){
            for(int j=i+1;j<=n;j++){
                if(a[j]%a[i]==0)
                    p[j]=0;
            }
        }
    }
    //store prime numbers in array pr
    int pr[n],c=0;
    for(int i=0;i<=n;i++){
        if(p[i]==1)
            pr[c++]=i;
    }
    int m[c],q[c];
    int c1=0;
    //store all values of index(a) in m and index(b) in n such that a+b=n
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(pr[i]+pr[j]==n){
            m[c1]=i;
            q[c1]=j;
            c1++;
            }
        }
    }
    //finding the least index of a for which a+b=n, by find the min in array m
    int min=0,ans;
    for(int i=0;i<c1;i++){
        if(m[i]<min){
        min=m[i];
        ans=i;}
    }
    //the min index in array m is stored in ans
    //the corresponding index of a in pr is found by m[ans] and b in pr is found by q[ans]
    printf("%d %d",pr[m[ans]],pr[q[ans]]);
    
}

Some prime numbers can be expressed as Sum of other consecutive prime numbers.

For example

5 = 2 + 3

17 = 2 + 3 + 5 + 7

41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Input Format:

First line of input contains k - the number of inputs

The next k lines contains a number N.

Output Format:

Print the total number of all such prime numbers which are less than or equal to N.

Example:

Input:

k = 2

N = 20

N = 15

Output:

2 (there are 2 such numbers: 5 and 17)

1


For example:

Input	Result
2
20
15
2
1

#include<stdio.h>
void soc(int n){
    //finding the primes until n
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]%a[i]==0)
                p[j]=0;
        }
    }
    //inserting all primes into array pr
    int pr[n+1],c=0;
    for(int i=0;i<=n;i++){
        if(p[i]==1)
            pr[c++]=a[i];
    }
    //set count=0
    int count=0;
    //for each prime in pr
    for(int i=1;i<c;i++){
        int sum=0;
        //find sum of consecutive primes before it
        for(int j=0;j<i;j++){
            sum+=pr[j];
            //after summing each next consecutive number ,check if n if obtained, if not go on with adding the next consecutive prime
            if(sum==pr[i]){
                //if n=(sum of consecutive primes before it) is found, increment count
                count++;
                break;
            }
        }
    }
    //count is the answer
    printf("%d\n",count);
}
int main(){
    int n,m;
    scanf("%d",&n);
    //to find the count of prime which can be formed by cosecutive sum of primes before it
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        soc(m);
    }
}

If you like numbers, you may have been fascinated by prime numbers. Sometimes we obtain by concatenating two primes. For example, concatenating 2 and 3, we obtain the prime 23. The aim is to find all such distinct "concatenated primes" that could be obtained by concatenating primes ≤ a given integer N.

Input Format:

Integer N

Output Format:

M, the number of distinct primes that could be obtained by concatenating two primes ≤ N

Constraints:

N ≤ 70

Example 1

Input 

10

Output 

4

Explanation

The primes ≤ 10 are 2, 3, 5, 7. These can be used to form the following concatenated numbers: 22, 23, 25, 27, 32, 33, 35, 37, 52, 53, 55, 57, 72, 73, 75, 77. Of these, there are four primes: 23 37 53 and 73. Hence the output is 4.

Example 2

Input 

20

Output 

17

Explanation 

The prime numbers up to 20 are 2 3 5 7 11 13 17 and 19.

Concatenating these two at a time in all possible ways, we get the following numbers:

22 23 25 27 211 213 217 219 

32 33 35 37 311 313 317 319 

52 53 55 57 511 513 517 519 

72 73 75 77 711 713 717 719 

112 113 115 117 1111 1113 1117 1119 

132 133 135 137 1311 1313 1317 1319 

172 173 175 177 1711 1713 1717 1719 

192 193 195 197 1911 1913 1917 1919

We have the following 17 primes numbers in this list: 23 37 53 73 113 137 173 193 197 211 311 313 317 719 1117 1319 1913 Hence the output would be 17.


For example:

Input	Result
10
4
20
17

#include<stdio.h>
#include<math.h>
int c1=0;
int count1=0;
int pr1[6768];
//generate all prime until 6768 as last concat possible can be 6767 as n<=70
//primes are stored in pr1 array
void findprimes(){
    int n=6768;
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]%a[i]==0)
                p[j]=0;
        }
    }
    for(int i=0;i<=n;i++){
        if(p[i]==1){
            pr1[c1++]=a[i];
        }
    }
}
//taking each num from input and checking if it is present in pr1
void isprime(int n){
    for(int i=0;i<c1;i++){
        if(n==pr1[i])
        //for each prime found, increment count1
            count1++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    //finding all primes until n
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i+1;j<=n;j++){
            if(a[j]%a[i]==0)
                p[j]=0;
        }
    }
    //storing all primes in pr array
    int pr[n+1],c=0;
    for(int i=0;i<=n;i++){
        if(p[i]==1)
            pr[c++]=a[i];
    }
    //finding all possible concat from pr array and store it in con array whose size is sq(size of pr array)
    int con[c*c], d=0;
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(pr[j]<10){
                con[d++]=(pr[i]*10)+pr[j];
            }else{
                con[d++]=(pr[i]*100)+pr[j];
            }
        }
    }
    findprimes();
    //checking isprime for each element in con
    for(int i=0;i<d;i++){
        isprime(con[i]);
    }
    printf("%d",count1);
}

In a global Mathematics contest, the contestants are told to invent some special numbers which can be built by adding the squares of its digits. Doing this perpetually, the numbers will end up to 1 or 4. 

If a positive integer ends with 1, then it is called the Number of Game.

An example from above is:

13 = 1^2 + 3^2 = 1+9 = 10 (Step:1)

10 = 1^2 + 0^2 = 1+0 = 1 (Step:2), iteration ends in Step 2 since number ends with 1

Then in next round, the contestants are asked to combine their newly invented number, i.e. Number of Game with prime number.

Now, being a smart programmer, write a program to help the contestants to find out the Nth combined number within any given range, where N can be any integer.

Input Format:

Input consists of 3 integers X, Y, N, one on each line. X and Y are upper and lower limits of the range. The range is inclusive of both X and Y. Find Nth number in range [X,Y].

Line 1: X, where X is the upper limit of the range

Line 2: Y, where Y is the lower limit of the range

Line 3: N, where Nth element of the series is required

Constraints

X <= Y

X > 0

N > 0

Output Format:

Output will show the Nth element of the combined series lying in the range between X and Y.

Line 1

For Valid Input, print

U, where U is the Nth element of the combined number series lying in the range between X and Y.

Or

No number is present at this index

For Invalid Input, print

Invalid Input

Sample Input / Output

Input

1

30

3

Output

19

Input

12

33

5

Output

No number is present at this index

Input

-5

@

4

Output

Invalid Input


For example:

Input	Result
1
30
3
19
12
33
5
No number is present at this index
-5
@
4
Invalid Input

#include<stdio.h>
#include<ctype.h>
#include<math.h>
//checking for game or happy number
int ishappy(int n){
    while(1){
    int sum=0;
    while(n){
        int r=n%10;
        sum+=(r*r);
        n/=10;
    }
    if(sum==1){
    return 1;
    }
    else if(sum==4){
    return 0;
    }
    n=sum;
    }
}
int main(){
    int x,y,n;
    scanf("%d %d %d",&x,&y,&n);
    if(!((x<=y && x>0 && y>0 && n>0) || isdigit(x) || isdigit(y)))
    printf("Invalid Input");
    else{
        //generate primes until y
    int a[y+1],p[y+1];
    for(int i=0;i<=y;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=sqrt(y);i++){
        for(int j=i+1;j<=y;j++){
           if(a[j]%i==0)
           p[j]=0;
        }
    }
    //store primes from x to y
    int pr[y-x+1],c=0;
    for(int i=x;i<=y;i++){
        if(p[i]==1){
            pr[c++]=a[i];
        }
    }
    //check for happy 
    int ans[c],c1=0;
    for(int i=0;i<c;i++){
        if(ishappy(pr[i])==1){
            ans[c1++]=pr[i];
        }
    }
    //print the nth happy number in primes array
    if(n<=c1){
        printf("%d",ans[n-1]);
    }else{
        printf("No number is present at this index");
    }
    
}
}

Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: 

n = 10

Output: 

4

Explanation: 

There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:

Input: 

n = 0

Output: 

0

Example 3:

Input: 

n = 1

Output: 

0

Constraints:

0 <= n <= 5 * 10^5



For example:

Input	Result
10
4
0
0
1
0

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
        int a[n+1],p[n+1];
        for(int i=0;i<=n;i++){
            a[i]=i;
            p[i]=1;
        }
        p[0]=p[1]=0;
        for(int i=2;i<=sqrt(n);i++){
            if(p[i]!=0){
                for(int j=i+1;j<=n;j++){
                    if(a[j]%a[i]==0){
                        p[j]=0;
                    }
                }
            }
        }
        for(int i=0;i<=n;i++){
            if(p[i]==1){
                c++;
            }
        }
        printf("%d",c);
}

Given two positive integers left and right, find the two integers num1 and num2 such that:

left <= nums1 < nums2 <= right .
nums1 and nums2 are both prime numbers.
nums2 - nums1 is the minimum amongst all other pairs satisfying the above conditions.
Return the positive integer array ans = [nums1, nums2]. If there are multiple pairs satisfying these conditions, return the one with the minimum nums1 value or [-1, -1] if such numbers do not exist.

A number greater than 1 is called prime if it is only divisible by 1 and itself.

Example 1:

Input: 

left = 10, right = 19

Output: 

[11,13]

Explanation: 

The prime numbers between 10 and 19 are 11, 13, 17, and 19.

The closest gap between any pair is 2, which can be achieved by [11,13] or [17,19].

Since 11 is smaller than 17, we return the first pair.

Example 2:

Input: 

left = 4, right = 6

Output: [-1,-1]

Explanation: 

There exists only one prime number in the given range, so the conditions cannot be satisfied.

Constraints:

1 <= left <= right <= 10^5



For example:

Input	Result
10 19
11 13
4 6
-1 -1

#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[n+1],p[n+1];
    for(int i=0;i<=n;i++){
        a[i]=i;
        p[i]=1;
    }
    p[0]=p[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(p[i]!=0){for(int j=i+1;j<=n;j++){
            if(a[j]%a[i]==0){
                p[j]=0;
            }
        }
        }
    }
    int pr[n-m+1],c=0;
    for(int i=m;i<=n;i++){
        if(p[i]==1){
            pr[c++]=a[i];
        }
    }
    int diff=INT_MAX;
    int o,q;
    if(c==1){
        printf("-1 -1");
    }else{
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
                if(pr[j]-pr[i]<diff){
                    diff=pr[j]-pr[i];
                    o=pr[i];
                    q=pr[j];
                }
            }
        }
        printf("%d %d",o,q);
    }

}

You are given a 0-indexed two-dimensional integer array nums.

Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.

Note that:

An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.

In the above diagram, one diagonal is [1,5,9] and another diagonal is [3,5,7].

Example 1:

Input: 

nums = [[1,2,3],[5,6,7],[9,10,11]]

Output: 

11

Explanation: 

The numbers 1, 3, 6, 9, and 11 are the only numbers present on at least one of the diagonals. Since 11 is the largest prime, we return 11.

Example 2:

Input: 

nums = [[1,2,3],[5,17,7],[9,11,10]]

Output: 

17

Explanation: 

The numbers 1, 3, 9, 10, and 17 are all present on at least one of the diagonals. 17 is the largest prime, so we return 17.

Constraints:

1 <= nums.length <= 300

nums.length == numsi.length

1 <= nums[i][j] <= 4*10^5



For example:

Input	Result
3
1 2 3
5 6 7
9 10 11
11
3
1 2 3
5 17 7
9 11 10
17

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j])
        }
    }
    int p[2*n],c=0;
    for(int i=0;i<n;i++){
        p[c++]=a[i][i];
    }
    int i=n-1,j=0;
    while(i>)
}
find

8

A string is said to be palindrome, if it reads the same from both the ends. Given a string S, you are allowed to perform cyclic shifts. More formally, you can pick any one character from any end (head or tail) and you can append that character at the other end. For example, if the string is abc, then if we do a shift using the character at head position then the string becomes bca. Similarly, if we do the shift using the character at the tail then the input string becomes cab. Your task is to find out the minimum number of shifts needed to make the given string, a palindrome.

In case, we can’t convert the string to palindrome then print -1.

Input Format

First line starts with T i.e. number of test cases, and then T lines will follow each containing a string S.

Output Format

Print the minimum number of cyclic shifts for each string if it can be made a palindrome, else -1.

Constraints

1<=T<=100

1<=|S|<=300, S will contains only lower case alphabets a-z.

Sample Input and Output

Input

4

abbb

aaabb

aabb

abc

Output

-1

1

1

-1

Explanation:

For Test Case 2 (aaabb):

Shift the character at the tail to the head and the result will be baaab, which is a palindrome. This is an operation which requires minimum number of shifts to make the given string a palindrome.

For Test Case 3 (aabb):

One way to convert the given string to palindrome is, shift the character at the head to the tail, and the result will be abba, which is a palindrome. Another way is to shift the character at the tail to the head, and the result will be baab, which is also a palindrome. Both require only one shift.


For example:

Input	Result
4
abbb
aaabb
aabb
abc
-1
1
1
-1
8
xyyyxy
xyyy
xxxyyxxxy
xxxyy
xxyyxxy
xxyy
xyzzyxy
xyz
-1
-1
4
1
3
1
3
-1

#include<stdio.h>
#include<string.h>
int ispal(char a[101]){
    int m=strlen(a);
    int i=0,j=m-1;
    while(i<=j){
        if(a[i]!=a[j])
        return 0;
        i++;
        j--;
    }
    return 1;
}
char* lshift(char a[101]){
    int n=strlen(a);
    int temp=a[0];
    for(int i=1;i<n;i++)
    a[i-1]=a[i];
    a[n-1]=temp;
    return a;
}
char* rshift(char a[101]){
    int n=strlen(a);
    char temp=a[n-1];
    for(int i=n-2;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=temp;
    //printf("Rshift : %s \n",a);
    return a;
}
int pali(char a[101]){
    int n=strlen(a);
    char la[101];
    char ra[101];
    strcpy(la,a);
    strcpy(ra,a);
    int shifts=0;
    for(int i=0;i<n-1;i++){
        if(ispal(la)|| ispal(ra)){
            return shifts;
        }
        strcpy(la,lshift(la));
        strcpy(ra,rshift(ra));
        shifts++;
    }
    return -1;
}
int main(){
    int n;
    char a[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",a);
        printf("%d\n",pali(a));
    }
}

Little Jill jumbled up the order of the letters in our dictionary. Now, Jack uses this list to find the smallest lexicographical string that can be made out of this new order. Can you help him? 

You are given a string P that denotes the new order of letters in the English dictionary.

You need to print the smallest lexicographic string made by rearranging all the letters of the given string S.

Constraints

· 1 <= T <= 1000

· Length (P) = 26

· 1 <= length (S) <= 100

All characters in the string S, P are in lowercase.

Input Format

· The first line contains number of test cases T.

· The second line has the string P.

· The third line has the string S.

Output

· Print a single string in a new line for every test case giving the result.

Example Input

2

polikujmnhytgbvfredcxswqaz

abcd

qwryupcsfoghjkldezxvbintma

ativedoc

Output

bdca

codevita

Explanation

The transformed smallest lexicographical strings are in order they would be if order of letters are changed to string P.


For example:

Input	Result
2
polikujmnhytgbvfredcxswqaz
abcd
qwryupcsfoghjkldezxvbintma
ativedoc
bdca
codevita


#include<stdio.h>
#include<string.h>
void lexi(char a[27],char b[27]){
    int pat[26];
    for(int i=0;i<27;i++){
        pat[a[i]-'a']=i;
    }
    int n=strlen(b);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(pat[b[j]-'a'] > pat[b[j+1]-'a']){
                char temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("%s\n",b);
}
// void lexi(char a[27],char b[27]){
//     int par[26];
//     for(int i=0;i<26;i++)
//     par[i]=0;
//     for(int i=0;i<strlen(b);i++){
//         par[b[i]-'a']+=1;
//     }
//     for(int i=0;i<strlen(a);i++){
//         if(par[a[i]-'a']!=0){
//             for(int k=0;k<par[a[i]-'a'];k++){
//                 printf("%c",a[i]);
//             }
//         }
//     }
//     printf("\n");
// }
int main(){
    int n;
    scanf("%d",&n);
    char a[27],b[27];
    for(int i=0;i<n;i++){
        scanf("%s %s",a,b);
        lexi(a,b);
    }
}

A rotation on a string is defined as removing first element and concatenating it at the end.

Given N, and an array of N strings, print the minimum no. of cumulative rotations on the strings so as to make all the strings equal.

If this is not possible return -1

Input format

· The first line contains N, the number of strings

· This is followed by N strings

Constraints

· 2 <= N <= 104

· 3 <= string length <= 100

· All characters are in uppercase

Example Input

4

AABCD

CDAAB

DAABC

AABCD

Output

3

Explanation

· Finally, all the string will become aabcd. First and last strings require no rotations.

· Second string requires 2 rotations

· Last string requires 1 rotation

· Hence total rotations required are 3


For example:

Input	Result
4
AABCD
CDAAB
DAABC
AABCD
3

#include<stdio.h>
#include<string.h>
char* shift(char a[101]){
    int n=strlen(a);
    char t=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=t;
    return a;
}
int rotate(char a[101],char b[101]){
    int s=0;
    for(int i=0;i<strlen(b)-1;i++){
        if(strcmp(a,b)==0)
        return s;
        else{
        strcpy(b,shift(b));
        s++;
        }
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][101];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    int cshifts[n];
    int cp=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int flag=0;
        int m;
        for(int j=0;j<n;j++){
            if(i!=j){
                m=rotate(str[i],str[j]);
                if(m==-1){
                    flag=1;
                }
                else{   
                    sum+=m;
                }
            }
        }
        if(flag==1){
            cshifts[cp++]=-1;
        }else{
            cshifts[cp++]=sum;
        }
    }
    // int min=0;
    // for(int i=0;i<cp;i++){
    //     if(cshifts[i]<min)
    //     min=cshifts[i];
    // }
    printf("%d ",cshifts[0]);
}

The count-and-say sequence is the sequence of integers beginning as follows:

1, 11, 21, 1211, 111221, . . .

1 is read off as one 1 or 11.

11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,

the sequence is 11.


For example:

Input	Result
2
11
3
21

// #include<stdio.h>
// #include<string.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char a[n][100];
//     strcpy(a[0],"1");
//     for(int i=1;i<n;i++){
//         int c=0;
//         int k=0,m=strlen(a[i-1])-1;
//         int l=1;
//         while(l<=m+1){
//             if(strlen(a[i-1])==1){
//                 int ab=10+a[i-1][k]-'0';
//                 printf("%d ydiu\n",a[i-1][k]-'0');
//                 char ca[100];
//                 // printf("%d\n",ab);
//                 sprintf(ca,"%d",ab);
//                 strcpy(a[i],ca);
//                 break;
//             }
//             else if(a[i-1][k]==a[i-1][l]){
//             l++;
//             c++;
//             }
//             else{
//                 // printf("%s\n",a[i-1]);
//                 // if(isempty(a[i])){
//                     int an=c*10+(a[i-1][k]-'0');
//                     printf("%d you\n",an);
//                     char co[10];
//                     sprintf(co,"%d",an);
//                 if(a[i][0]=='\0'){
//                     strcpy(a[i],co);
//                     printf("%s boo\n",a[i]);}
//                     // strcat(a[i],a[i-1][k]);}
//                 else{
//                     strcat(a[i],co);
//                     printf("%s booiiii",a[i]);
//                     // strcat(a[i],a[i-1][k]);
//                 }
//                 c=0;
//                 k++;
//                 a[i-1][k]=a[i-1][l];
//                 l++;
                
//             }
//         }
//     }
//     printf("%s",a[1]);
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * countAndSay(int n){
    if (n == 1) return "1";
	char *prev = countAndSay(n-1); 
	char *newresponse = malloc(strlen(prev) * (n > 20 ? 2 : 3)); 
	int c=0,curpos=0;
	char v, *iter=prev; 
	char *head = prev; 
	while (*prev){
		c = 0;
		v = *prev;
		while (*iter && *iter ==v){
			c++;
			iter++;
		}
		newresponse[curpos] = c + '0';
		newresponse[curpos+1] = v;
		curpos += 2;
		prev = iter;
	}
	newresponse[curpos] = '\0';
	curpos++;
	newresponse = realloc(newresponse, curpos);
	
	if (n > 2) free(head);
	return newresponse;
}
int main(){
    int n;
    scanf("%d",&n);
    char s[1000];
    strcpy(s,countAndSay(n));
    printf("%s",s);
}

Given an array of strings wordsDict and two different strings that already exist in the array word1 and word2, return the shortest distance between these two words in the list.

Example 1:

Input: 

wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "coding", word2 = "practice"

Output: 

3

Example 2:

Input: 

wordsDict = ["practice", "makes", "perfect", "coding", "makes"], word1 = "makes", word2 = "coding"

Output: 1

Constraints:

2 <= wordsDict.length <= 3 * 10^4

1 <= wordsDict[i].length <= 10

wordsDict[i] consists of lowercase English letters.

word1 and word2 are in wordsDict.

word1 != word2



For example:

Input	Result
5
practice
makes
perfect
coding
makes
coding
practice
3
5
practice
makes
perfect
coding
makes
makes
coding
1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",s[i]);
    }
    char w1[100],w2[100];
    scanf("%s",w1);
    scanf("%s",w2);
    int a=-1;
    int b=-1;
    int shorty =INT_MAX;
    for(int i=0;i<n;i++){
        if(strcmp(s[i],w1)==0)
        a=i;
        if(strcmp(s[i],w2)==0)
        b=i;
        if(a!=-1 && b!=-1){
            if(abs(a-b)<shorty){
                shorty=abs(a-b);
            }
        }
    }
    printf("%d",shorty);
}

Given a string num which represents an integer, return true if num is a strobogrammatic number.

A strobogrammatic number is a number that looks the same when rotated 180 degrees (looked at upside down).

Example 1:

Input: 

num = "69"

Output: 

true

Example 2:

Input: 

num = "88"

Output: 

true

Example 3:

Input: 

num = "962"

Output: 

false

Constraints:

1 <= num.length <= 50

num consists of only digits.

num does not contain any leading zeros except for zero itself.



For example:

Input	Result
69
true
88
true
962
false

#include<stdio.h>
#include<string.h>
int main(){
    char a[51];
    scanf("%s",a);
    int n=strlen(a);
    int i=0,j=n-1;
    int flag=0;
    while(i<j){
        if((a[i]=='0' && a[j]=='0') || (a[i]=='8' && a[j]=='8') || (a[i]=='6' && a[j]=='9') || (a[i]=='9' && a[j]=='6') || (a[i]=='1' && a[j]=='1')){
            i++;
            j--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(n%2!=0 && !(a[n/2]=='0' || a[n/2]=='1' || a[n/2]=='8')){
        flag=1;
    }
    if(flag==1)
    printf("false");
    else
    printf("true");
}

You are playing a Flip Game with your friend.

You are given a string currentState that contains only '+' and '-'. You and your friend take turns to flip two consecutive "++" into "--". The game ends when a person can no longer make a move, and therefore the other person will be the winner.

Return all possible states of the string currentState after one valid move. You may return the answer in any order. If there is no valid move, return an empty list [].

Example 1:

Input: 

currentState = "++++"

Output: 

["--++","+--+","++--"]

Example 2:

Input: 

currentState = "+"

Output: 

[]

Constraints:

1 <= currentState.length <= 500

currentState[i] is either '+' or '-'.



For example:

Input	Result
++++
--++
+--+
++--
+
#include<stdio.h>
#include<string.h>

int main(){
    char s[501];
    scanf("%s",s);
    int n=strlen(s);
    char t[n];
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(s[i]=='+' && s[i+1]=='+'){
                strcpy(t,s);
                t[i]='-';
                t[i+1]='-';
                printf("%s\n",t);
            }
            if(s[i]=='-' && s[i+1]=='-'){
                strcpy(t,s);
                t[i]='+';
                t[i+1]='+';
                printf("%s\n",t);
            }
        }
    }
}

9

A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.

Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.

Example 1:

Input:

n = 1

Output:

5

Explanation: The good numbers of length 1 are "0", "2", "4", "6", "8".

Example 2:

Input:

n = 4

Output:

400

Example 3:

Input:

n = 50

Output:

564908303

Constraints:

1 <= n <= 1015




For example:

Input	Result
1
5
4
400
50
564908303

#include<stdio.h>
//modulo arithmetic
int mod=1000000007;
long int good(long int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 5;
    else if(n%2==0)
        return 4*(good(n-1))%mod;
    else
        return 5*(good(n-1))%mod;
}
int main(){
    long int n;
    scanf("%li",&n);
    printf("%li",good(n));
}

There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

The rules of the game are as follows:

Start at the 1st friend.

Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.

The last friend you counted leaves the circle and loses the game.

If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.

Else, the last friend in the circle wins the game.

Given the number of friends, n, and an integer k, return the winner of the game.

Example 1:





Input:

n = 5, k = 2

Output:

3

Explanation:

Here are the steps of the game:

1) Start at friend 1.

2) Count 2 friends clockwise, which are friends 1 and 2.

3) Friend 2 leaves the circle. Next start is friend 3.

4) Count 2 friends clockwise, which are friends 3 and 4.

5) Friend 4 leaves the circle. Next start is friend 5.

6) Count 2 friends clockwise, which are friends 5 and 1.

7) Friend 1 leaves the circle. Next start is friend 3.

8) Count 2 friends clockwise, which are friends 3 and 5.

9) Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.

Example 2:

Input:

n = 6, k = 5

Output:

1

Explanation:

The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.

Constraints:

1 <= k <= n <= 500


For example:

Input	Result
5 2
3
6 5
1

#include<stdio.h>
int game(int n,int k){
    if(n==1){
        return 1;
    }else{
        return ((game(n-1,k)+(k-1))%n)+1;
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    printf("%d",game(n,k));
}

You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

· Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.

· Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.

· Keep repeating the steps again, alternating left to right and right to left, until a single number remains.

Given the integer n, return the last number that remains in arr.

Example 1:

Input:

n = 9

Output:

6

Explanation:

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]

arr = [2, 4, 6, 8]

arr = [2, 6]

arr = [6]

Example 2:

Input:

n = 1

Output:

1

Constraints:

1 <= n <= 109


For example:

Input	Result
9
6
1
1
#include<stdio.h>
int eliminate(int n){
    if(n==1)
    return n;
    else
    return 2*(1+n/2-eliminate(n/2));
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",eliminate(n));
}

You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.

Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array (i.e., nums[0] or nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to their score. The game ends when there are no more elements in the array.

Return true if Player 1 can win the game. If the scores of both players are equal, then player 1 is still the winner, and you should also return true. You may assume that both players are playing optimally.

Example 1:

Input:

nums = [1,5,2]

Output:

false

Explanation:

Initially, player 1 can choose between 1 and 2.

If he chooses 2 (or 1), then player 2 can choose from 1 (or 2) and 5. If player 2 chooses 5, then player 1 will be left with 1 (or 2).

So, final score of player 1 is 1 + 2 = 3, and player 2 is 5.

Hence, player 1 will never be the winner and you need to return false.

Example 2:

Input:

nums = [1,5,233,7]

Output:

true

Explanation:

Player 1 first chooses 1. Then player 2 has to choose between 5 and 7. No matter which number player 2 choose, player 1 can choose 233.

Finally, player 1 has more score (234) than player 2 (12), so you need to return True representing player1 can win.

Constraints:

1 <= nums.length <= 20

0 <= nums[i] <= 107


For example:

Input	Result
3
1 5 2
false
4
1 5 233 7
true


#include<stdio.h>
int winner(int a[],int s,int e){
    int c,d;
    if(s==e)
    return a[s];
    else{
    c=a[s]-winner(a,s+1,e);
    d=a[e]-winner(a,s,e-1);
    return c>d?c:d;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%s",winner(a,0,n-1)>=0?"true":"false");
}

8

You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

Example 1:

Input:

num = 9669

Output:

9969

Explanation:

Changing the first digit results in 6669.

Changing the second digit results in 9969.

Changing the third digit results in 9699.

Changing the fourth digit results in 9666.

The maximum number is 9969.

Example 2:

Input:

num = 9996

Output:

9999

Explanation:

Changing the last digit 6 to 9 results in the maximum number.

Example 3:

Input:

num = 9999

Output:

9999

Explanation: It is better not to apply any change.

Constraints:

1 <= num <= 104

num consists of only 6 and 9 digits.


For example:

Input	Result
9996
9999
9999
9999

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[10000];
    sprintf(s,"%d",n);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='6'){
            s[i]='9';
            break;
        }
    }
    for(int i=0;i<strlen(s);i++){
        printf("%d",s[i]-'0');
    }
}


An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

Example 1:

Input:

n = 6

Output:

true

Explanation:

6 = 2 × 3

Example 2:

Input:

n = 1

Output:

true

Explanation:

1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.

Example 3:

Input:

n = 14

Output:

false

Explanation:

14 is not ugly since it includes the prime factor 7.

Constraints:

-231 <= n <= 231 - 1


For example:

Input	Result
6
true
1
true
14
false


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0)
    n/=2;
    if(n%3==0)
    n/=3;
    if(n%5==0)
    n/=5;
    if(n==1)
    printf("true");
    else
    printf("false");
}

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

· For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer num, return its complement.

Example 1:

Input:

num = 5

Output:

2

Explanation:

The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:

Input:

num = 1

Output:

0

Explanation:

The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

Constraints:

1 <= num < 231


For example:

Input	Result
5
2
1
0

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans=1;
    for(int i=0;i<n;i++){
      if(n>=ans){
          ans*=2;
      }
    }
    printf("%d",ans-n-1);
}

9

Write a program to take value V and  we want to make change for V Rs, and we have infinite supply of each of the denominations in Indian currency, i.e., we have infinite supply of { 1, 2, 5, 10, 20, 50, 100, 500, 1000} valued coins/notes, what is the minimum number of coins and/or notes needed to make the change.

Input Format:

Take an integer from stdin.

Output Format:

print the integer which is change of the  number.

Example Input :

64

Output:

4

Explanaton:

We need a 50 Rs note and a 10 Rs note and two 2 rupee coins.

Example Input:

49

Output:

5

Explanation:

We need a  two 20 Rs notes and a 5 Rs coins and two 2 rupee coins.


#include<stdio.h>
int main(){
    int n,notes=0;
    scanf("%d",&n);
    int a[]={1000,500,100,50,20,10,5,2,1};
    int m=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<m;i++){
        if(n>a[i]){
          notes+=(n)/a[i];  
          n=n%a[i];
        }
    }
    printf("%d",notes);
}

At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you, and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you don't have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with correct change, or false otherwise.

Example 1:

Input: 

5

5 5 5 10 20

Output: 

true

Explanation: 

From the first 3 customers, we collect three $5 bills in order.

From the fourth customer, we collect a $10 bill and give back a $5.

From the fifth customer, we give a $10 bill and a $5 bill.

Since all customers got correct change, we output true.

Example 2:

Input: 

5

5 5 10 10 20

Output: 

false

Explanation: 

From the first two customers in order, we collect two $5 bills.

For the next two customers in order, we collect a $10 bill and give back a $5 bill.

For the last customer, we can not give change of $15 back because we only have two $10 bills.

Since not every customer received correct change, the answer is false.

Example 3:

Input: 

3

5 5 10

Output: 

true

Example 4:

2

10 10

Output: 

false

Constraints:

1 <= bills.length <= 10^5

bills[i] is either 5, 10, or 20.


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag=0;
    int c5=0,c10=0,c20=0;
    for(int i=0;i<n;i++){
        if(a[i]==5){
            c5+=1;
        }
        else if(a[i]==10)
        {
            c10+=1;
            if(c5>=2){
                c5-=2;
            }else{
                flag=1;
                break;
            }
        }
        else if(a[i]==20)
        {
            c20+=1;
            if(c5>=1 && c10>=1){
                c5-=1;
                c10-=1;
            }else if(c5>=3){
                c5-=3;
            }else{
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("true");
    }else{
        printf("false");
    }
}

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input:

6

7 1 5 3 6 4

Output: 

5

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input:

5

7 6 4 3 1

Output: 

0

Explanation: In this case, no transactions are done and the max profit = 0.

Constraints:

1 <= prices.length <= 10^5

0 <= prices[i] <= 10^4

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int minp=INT_MAX;
    int maxp=0;
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<minp){
            minp=a[i];
        }else if(a[i]-minp>maxp){
            maxp=a[i]-minp;
        }
    }
    printf("%d",maxp);
}

You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.

Example 1:

Input:

6 

7 1 5 3 6 4

Output: 

7

Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.

Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.

Total profit is 4 + 3 = 7.

Example 2:

Input: 

5

1 2 3 4 5

Output: 

4

Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.

Total profit is 4.

Example 3:

5

7 6 4 3 1

Output: 

0

Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

Constraints:

1 <= prices.length <= 3 * 10^4

0 <= prices[i] <= 10^4


#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int minp=INT_MAX;
    int maxp=0,tp=0;
    for(int i=0;i<n;i++){
        if(a[i]<minp){
            minp=a[i];
        }else if(a[i]-minp>maxp){
            maxp=a[i]-minp;
        }
        if(i!=n-1 && a[i+1]<a[i]){
            tp+=maxp;
            minp=a[i+1];
        }
    }
    //tp-1 is not correct
    printf("%d",tp==0?maxp:tp-1);
}

10

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: 

2

Output: 

2

Explanation: 

There are two ways to climb to the top.

1. 1 step + 1 step

2. 2 steps

Example 2:

Input: 

3

Output: 

3

Explanation: 

There are three ways to climb to the top.

1. 1 step + 1 step + 1 step

2. 1 step + 2 steps

3. 2 steps + 1 step

Constraints:

1 <= n <= 45

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dp[46];
    for(int i=0;i<46;i++){
        dp[i]=0;
    }
    if(n==0)
    printf("0");
    else if(n==1)
    printf("1");
    else{
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        printf("%d",dp[n]);
    }
}

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Example 1:

Input: 

4

1 2 3 1

Output: 

4

Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).

Total amount you can rob = 1 + 3 = 4.

Example 2:

Input:

5

2 7 9 3 1

Output: 

12

Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).

Total amount you can rob = 2 + 9 + 1 = 12.

Constraints:

1 <= nums.length <= 100

0 <= nums[i] <= 400


#include<stdio.h>
int Max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int rob(int n,int a[]){
    int dp[n+1];
    dp[n]=0;
    dp[n-1]=a[n-1];
    if(n==0)
    return 0;
    for(int i=n-2;i>=0;--i){
        dp[i]=Max(dp[i+1],dp[i+2]+a[i]);
    }
    return dp[0];
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",rob(n,a));
}

The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

Example 1:

Input: 

4

Output: 

4

Explanation:

T_3 = 0 + 1 + 1 = 2

T_4 = 1 + 1 + 2 = 4

Example 2:

Input: 

25

Output: 

1389537 

Constraints:

0 <= n <= 37

The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int dp[38];
    for(int i=0;i<38;i++){
        dp[i]=0;
    }
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    printf("%d",dp[n]);
}


