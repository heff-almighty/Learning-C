//Averages calculator
//Code adapted from app "All C Programs"
//Undertaken to help me understand arrays and how to code them
//I adapted this to:
    //Limit the remainder to a maximum of 2 places

#include <stdio.h>

int main()

{
    int i,j,sum=0, num;
    float avg;
    printf("Enter number of students who took the test:\n");
    scanf("%d", &num);
    int marks[num];
    printf("Enter student grades:\n");
    for(i=0; i<num; i++)

    {
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    avg=(float)sum/num;
    printf("The class average is: %.2f\n", avg);

}
