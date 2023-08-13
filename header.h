#pragma once

//_________________________________________________________
#define DEBUG 1

#if DEBUG == 11
	#define LOG(var, x) printf("%s: %d\n",var, x)
#else
	#define LOG(var, X)
#endif

//_________________________________________________________
int only_num(char* str);
int count(char* str);
int ft_atoi(char c);
int valid_sum_of_sides(char* str, int* side_units, const int x);
int valid_side_units(int* side_units, int side_num, const int x);
int** create_board(const int x);
void free_board(int** board, const int x);
void fill_board(int** board, int* side_units, const int x);
void fill_1_or_x(int* board, int side_units, const int x);
void display_board(int** board, const int x);