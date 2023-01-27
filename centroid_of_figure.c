#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI (3.141592653589793)
int main()
{
    float x_of_semc = 0, y_of_semc, rad_of_semc, area_of_semc, AiXi_semc = 0, AiYi_semc, sum_A, sum_AiYi, sum_AiXi = 0, x_bar = 0, y_bar;
    printf("Enter the radius of semicircle: ");
    scanf("%f", &rad_of_semc);
    printf("X of semicircle is 0 since it the centre of it lies on Origin.\n");
    y_of_semc = 4.0* rad_of_semc/ (3.0 * PI);
    area_of_semc = (PI * rad_of_semc * rad_of_semc) / 2;
    printf("%f is the area of your semicircle\n", area_of_semc);
    float x_of_rect = 0, y_of_rect, area_of_rect, len_of_rect, bdt_of_rect, AiXi_rect = 0, AiYi_rect;
    printf("Enter the length of your rectangle: ");
    scanf("%f", &len_of_rect);
    printf("Enter the breadth of your rectangle: ");
    scanf("%f", &bdt_of_rect);
    area_of_rect = bdt_of_rect * len_of_rect;
    printf("%f is the area of your Rectangle.\n", area_of_rect);
    printf("X of Rectangle is 0 since it is centred at origin with reference to X coordinate.\n");
    y_of_rect = bdt_of_rect / 2;
    AiYi_semc = y_of_semc * area_of_semc;
    AiYi_rect = y_of_rect * area_of_rect;
    sum_A = area_of_semc - area_of_rect;
    sum_AiYi = AiYi_semc - AiYi_rect;
    y_bar = sum_AiYi/sum_A;
    printf("AiXi for your semicircle is %f \n",AiXi_semc);
    printf("AiYi for your semicircle is %f \n",AiYi_semc);
    printf("AiYi for your rectangle is %f \n",AiXi_rect);
    printf("AiYi for your rectangle is %f \n",AiYi_rect);
    printf("Summation of Area of both figures is %f\n",sum_A);
    printf("Summation of AiYi of both figures is %f\n",sum_AiXi);
    printf("Summation of AiXi of both figures is %f\n",sum_AiYi);
    printf("Centroid of your figure is (%f,%f)",x_bar,y_bar);
}