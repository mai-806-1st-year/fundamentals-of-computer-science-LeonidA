#include <stdio.h>
#include <conio.h>

void create_matrix(int st, int col, int matrix[st][col]);
void print_right_center(int st, int col, int matrix[st][col]);
void print_right_up(int st, int col, int matrix[st][col]);
void print_center_up(int st, int col, int matrix[st][col]);
void print_left_up(int st, int col, int matrix[st][col]);
void print_left_center(int st, int col, int matrix[st][col]);
void print_left_down(int st, int col, int matrix[st][col]);
void print_center_down(int st, int col, int matrix[st][col]);
void print_right_down(int st, int col, int matrix[st][col]);

void main() {
    int size;
    scanf("%d", &size);
    int matrix[size][size];
    create_matrix(size, size, matrix);
    print_right_center(size, size, matrix);
    print_right_up(size, size, matrix);
    print_center_up(size, size, matrix);
    print_left_up(size, size, matrix);
    print_left_center(size, size, matrix);
    print_left_down(size, size, matrix);
    print_center_down(size, size, matrix);
    print_right_down(size, size, matrix);
    getch();
}

void create_matrix(int st, int col, int matrix[st][col]){
    int num, size = st;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_right_center(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_right_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
        height--;
    }
    printf("\n");
}

void print_center_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(height; height >= 0; height--){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_left_up(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
        height--;
    }
    printf("\n");
}

void print_left_center(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_left_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width >= 0; width--){
        printf("%d ", matrix[height][width]);
        height++;
    }
    printf("\n");
}

void print_center_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(height; height < st; height++){
        printf("%d ", matrix[height][width]);
    }
    printf("\n");
}

void print_right_down(int st, int col, int matrix[st][col]){
    int height = (st - 1) / 2, width = (st - 1) / 2;
    for(width; width < col; width++){
        printf("%d ", matrix[height][width]);
        height++;
    }
    printf("\n");
}