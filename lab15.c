#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct
{
    int x, y;
    double angle;
} Vector;


void create_matrix(int st, int col, int matrix[st][col]);
Vector check_angle(int coord_x, int coord_y, Vector current_max_vector);

void main() {
    Vector max_vector = {.x = 0, .y = 0, .angle = 6.28};
    int num_of_vec;
    
    scanf("%d", &num_of_vec);
    int matrix[num_of_vec][2];
    
    create_matrix(num_of_vec, 2, matrix);
    
    for(int i = 0; i < num_of_vec; i++){
        max_vector = check_angle(matrix[i][0], matrix[i][1], max_vector);
    }

    printf("%d %d %.3f\n", max_vector.y, max_vector.x, max_vector.angle);
    getch();
}

void create_matrix(int st, int col, int matrix[st][col]){
    int strings = st;
    for (int i = 0; i < strings; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

Vector check_angle(int coord_x, int coord_y, Vector current_max_vector){
    double angle;
    Vector result = {.x = current_max_vector.x, .y = current_max_vector.y, .angle = current_max_vector.angle};
    
    if(coord_x > 0 && coord_y >= 0){
        angle = atan((double) coord_y / (double) coord_x); 
    }

    else if (coord_x < 0 && coord_y >= 0){
        angle = 3.14 - atan((double) coord_y / (double) fabs(coord_x)); 
    }

    else if (coord_x < 0 && coord_y < 0){
        angle = 3.14 + atan((double) fabs(coord_y) / (double) fabs(coord_x)); 
    }

    else if (coord_x > 0 && coord_y < 0){
        angle = 6.28 - atan((double) fabs(coord_y) / (double) coord_x); 
    }

    else if (coord_x == 0){
        return result;
    }

    if (angle < current_max_vector.angle){
        result.x = coord_x;
        result.y = coord_y;
        result.angle = angle;
    }

    if (fabs(angle - result.angle) < 0.001){
        if ((coord_x * coord_x + coord_y * coord_y) > (result.x * result.x + result.y * result.y)){
            result.x = coord_x;
            result.y = coord_y;
            result.angle = angle;
        }
    }
    return result;
}
