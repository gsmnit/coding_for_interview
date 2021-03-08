#include <stdio.h>
 typedef struct point2D
{
    /* data */
    int x;
    int y;
} point2D;
struct rectangle {
     struct point2D pt1;
     struct point2D pt2;

};
 typedef struct line{
    struct point2D pt1;
     struct point2D pt2;
} line;
 typedef struct triangle{
    struct line l1;
    struct line l2;
    struct line l3;
} trig;
/*
void print_rect(rectangle* ract){
    printf("rectangle has point (%d , %d) and (%d, %d)",ract.pt1.x,ract.pt1.y,ract.pt2.x,ract.pt2.y);}
 */
int main(int argc, char const *argv[])
{
    /* code */
    point2D point1 = { 3, 2};

    point1.x =5;

    point2D point2 = {21,2}; 

    struct rectangle ract1 = {point1 , point2};

    printf("rectangle has point (%d , %d) and (%d, %d)",ract1.pt1.x,ract1.pt1.y,ract1.pt2.x,ract1.pt2.y);
    
    point2D point0;
    point0.x =4;
    point0.y =7;

    line l1;
    l1.pt1 = point0;
    l1.pt2.x = 5;
    l1.pt2.y = 6;
    l1.pt2 = point1;

    line l2;
    l2.pt1 = point1;
    l2.pt2 = point2;
    
    line l3;
    l3.pt1 = point2;
    l3.pt2 = point0;
    


    trig T;
    T.l1 = l1;
    T.l2 = l2;
    T.l3 = l3;


    return 0;
}

