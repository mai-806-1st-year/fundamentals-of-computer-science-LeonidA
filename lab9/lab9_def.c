#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    float x, y;
} Point;

typedef struct {
    Point center;
    float len_d1, len_d2;
} Rhomb;

typedef struct {
    float k, b;
} Line;

bool upper(Line ln, Point p){
    return (p.y >= p.x * ln.k + ln.b ? true : false);
}

bool below(Line ln, Point p){
    return (p.y <= p.x * ln.k + ln.b ? true : false);
}

bool is_in_rhomb(Rhomb r, Point x_p) {
    Point A = {.x = r.center.x - r.len_d1 / 2.0, .y = r.center.y};
    Point B = {.x = r.center.x, .y = r.center.y + r.len_d2 / 2};
    Point C = {.x = r.center.x + r.len_d1 / 2.0, .y = r.center.y};
    Point D = {.x = r.center.x, .y = r.center.y - r.len_d2 / 2};

    Line AB = {.k = (A.y - B.y) / (A.x - B.x), .b = B.y - AB.k * B.x};
    Line BC = {.k = (B.y - C.y) / (B.x - C.x), .b = C.y - BC.k * C.x};
    Line CD = {.k = (C.y - D.y) / (C.x - D.x), .b = D.y - CD.k * D.x};
    Line DA = {.k = (D.y - A.y) / (D.x - A.x), .b = A.y - DA.k * A.x};

    return(below(AB, x_p) == true && below(BC, x_p) == true && upper(CD, x_p) == true && upper(DA, x_p) == true ? true : false);
}

void main() {
    float x_input, y_input;
    scanf("%f", &x_input);
    scanf("%f", &y_input);
    
    Point x = {.x = x_input, .y = y_input};
    Point c = {1, 2};
    Rhomb r = {.center = c, .len_d1 = 4, .len_d2 = 2};

    printf("%d\n", is_in_rhomb(r, x));
    getch();
}
