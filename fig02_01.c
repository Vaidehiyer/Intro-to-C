// fig02_01.c
// A first program in C.

#include <stdio.h>

double calculateArea(double length, double width);

// function main begins program execution
int main(void)
{
    printf("Welcome to C!\n");

    int length = 0;
    int width = 0;
    int area = 0;

    printf("Enter the length ");
    scanf("%d", &length);

    printf("Enter the width ");
    scanf("%d", &width);

    area = calculateArea(length, width);

    printf("Length: %d width: %d and area is %d\n", length, width, area);

    double average;
    average = (length + width) / 2.0;    // made denominator a double value
    printf("The average of length and width is %.1f\n", average);

    return 0;
} // end function main

// function to calculate the area
double calculateArea(double length, double width)
{
    double area = length * width;
    return area;
}