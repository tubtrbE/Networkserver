// i/o
#include <stdio.h>
// malloc
#include <stdlib.h>
// read write
#include <unistd.h>
// memset
#include <string.h>
// ip address
#include <arpa/inet.h>
// socket
#include <sys/socket.h>
// thread
#include <pthread.h>

#define BUF_SIZE 1024
#define SMALL_BUF 100

/*function*/
void send_data(FILE *fp, char *ct, char *file_name);
char* content_type(char *file);
void send_error(FILE *fp);
void err_handling(char *message);

/*thread*/
void* request_handler(void *arg);


int main (int argc, char* argv[]) {
  printf("g++ hello world!!\n");
  return 0;
}

/*function*/
void send_data(FILE *fp, char *ct, char *file_name);
char* content_type(char *file);
void send_error(FILE *fp);
void err_handling(char *message);

/*thread*/
void* request_handler(void *arg);


