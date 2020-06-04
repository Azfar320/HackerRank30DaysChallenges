#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    int a;
    double b;
    char c[100];

    scanf("%d",&a);
    scanf("%.lf",&b);
    scanf("\n");
    scanf("%[^\n]%*c",&c);


    printf("%d\n",a+i);
    printf("%0.1lf\n",b+d);
    printf("%s %s",s,c);

    // Read and save an integer, double, and String to your variables.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
