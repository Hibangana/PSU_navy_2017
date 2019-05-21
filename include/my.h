/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#define READ_SIZE 1
#define COND_1 (get_next_line_three(position) == 1
#define COND_1_2 get_next_line_three(position) != 0) ? stock : NULL
#define COND_2 (position[i][2] != position[i][5])
#define COND_2_1 (position[i][3] != position[i][6])
#define COND_3 ac == 2 && my_strlen(av[1]) == 2
#define COND_3_1 av[1][0] == '-' && av[1][1] == 'h'
#define COND_4 position[i][6] <= position[i][3]
#define COND_4_1 (position[i][0] - '0') != stock
#define COND_5 position[i][5] <= position[i][2]
#define COND_5_1 (position[i][0] - '0') != stock
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "../lib/my/include/my.h"
#include "struct.h"
#include <string.h>
#include <signal.h>
#include <fcntl.h>

char *i_binary;
int interupt(int);
void garbage_collector(char *, const char *);
void my_server_changing_map(m *);
void my_server_won_on_atk(m *);
int my_server_waiting_enemy_turn(m *);
int my_check_game_over(m *);
int my_server_waiting_enemy_turn_two(m *);
int my_check_game_over_two(m *);
void my_server_changing_map_two(m *);
void my_display_maps(m *, int);
void my_print_check_no_send(m *, char **);
void my_print_check_hit_two(m *, int);
void my_print_check_hit(m *, int);
void my_free(char **, char **, char **);
void send_binary_signals(char *, int);
void free_gnl(char *, char *);
void display_map(char **);
int my_attack_pos(m *, int, int);
int my_pause_server(void);
int my_pause_client(void);
char **fill_map(char **, char **);
char **stock_error_handling(char *, char **);
char **malloc_map(char **);
char **get_my_map(char **, char **);
char **stock_map(char **);
char **malloc_map(char **);
char **get_enemy_map(char **);
void my_itoa(int);
char *check_save(char *, char *, int);
char *get_binary(char *, char *);
char *get_next_line(int);
char *get_pos_from_binary(char *, char *);
int check_signal(void);
int check_signal_two(void);
int check_hit_signals(char *);
int get_next_line_two(int, char *, char *, char *);
int check_end_of_line_two(char *, int, char *);
int get_next_line_three(int);
int display_usage(int, char **);
int check_position(char **);
int my_atoi(char *);
int get_map1(m *);
int get_map2(m *);
int check_line(char *);
int check_if_between(int, int, int);
int server(m *, struct sigaction *, char **, char **);
int client(m *, struct sigaction *, char **);
int check_hit(char *, char **);
int check_victory(char **);
int check_position_five(char **);
void game_handler(int, siginfo_t *, void *);

#endif
