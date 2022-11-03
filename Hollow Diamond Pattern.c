Print hollow diamond pattern using '*'. See examples for more details.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single odd integer N - the size of the diamond.

Constraints

1 <= T <= 100
3 <= N <= 201

Output Format

For each test case, print the test case number as shown, followed by the diamond pattern, separated by newline.

Sample Input 0

4
3
7
5
15
Sample Output 0

Case #1:
 *
* *
 *
Case #2:
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Case #3:
  *
 * *
*   *
 * *
  *
Case #4:
       *
      * *
     *   *
    *     *
   *       *
  *         *
 *           *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *
======================================================================================================================================================================
Solution :
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t,temp=0;
    scanf("%d",&t);
    while(t!=0) {
        scanf("%d",&n);
        temp++;
        printf("Case #%d:\n",temp);
        int m=n/2;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(j==m+2-i || j==m+i || j==i-m || j==(m+n+1)-i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        t--;
    }
    return 0;
}
