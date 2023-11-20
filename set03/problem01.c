#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};

typedef struct _point Point;

Point input_Point() {
    Point p;
    printf("Enter the first point:\n");
    scanf("%f", &p.x);
    printf("Enter the second point:\n");
    scanf("%f", &p.y);
    return p;
}

float dist(Point a, Point b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void output(Point a, Point b, float res) {
    printf("The distance between point %f,%f and %f,%f is %f", a.x, a.y, b.x, b.y, res);
}

int main() {
    Point point1, point2;
    float distance;
    point1 = input_Point();
    point2 = input_Point();
    distance = dist(point1, point2);
    output(point1, point2, distance);
    return 0;
}
