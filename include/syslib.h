#ifndef SYSLIB_H
#define SYSLYB_H

#define PUTC 	0
#define GETCHAR 1
#define REBOOT 	2
#define PNUM 	3
#define READ_H	4
#define READ_M 	5
#define READ_S	6
#define RTICK	7
#define GTICK	8
#define GETMOV	9
#define CLRSCR	10
#define SETX 	11
#define SETY 	12
#define GPIXEL	13
#define SVGA	14
#define SPIXEL	15
#define LOADF	17
#define LS		18
#define LSPCI	19
#define KVER	20
#define EXIT	21
#define KVEN	22
#define RUNK	23


void pchar(char c, char msg);
void pstring(char c, char msg[]);
char getchar();
void pnum(char c, int num);
int read_h();
int read_m();
int read_s();
void reboot();
void reset_tick();
int get_tick();
void setx(int x);
void sety(int y);
void clrscr();
void ls();
void lspci();
void exec(char p[]);
int strcmp(char *str1, char *str2);
int kversion();
int strlen(char *src);
int getmov();
void setpixel(int x, int y, char c);
char getpixel(int x, int y);
void exit(int code);
int kvendor();
#endif
