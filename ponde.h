#ifndef PONDE_H
#define PONDE_H

// THE IDEA IS BOTH THE SERVER AND CLIENT IMPORT THIS LIBRARY AND USE IT
// HOW IT WORKS IS server.h AND client.h WILL INCLUDE THIS HEADER AND USE
// IT AS A MEDIUM. NOTE THAT FOR NOW IT IS NOT ASYNC IT IS NOT MULTHITHREADED
// JUST YET WILL ADD THAT LATER FOR NOW I WANT IT TO WORK LOCALLY.

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define ADDRESS "localhost://8080"

uint64_t status_code;
typedef enum HttpRequestType {
  GET,
  POST,
} REQUEST;

typedef struct {
  char *buffer[1024];
  char *message[1024];
  bool state = true;
} info;

// VOID PARSE(CHAR*, STRUCT *INFO);
int sendRequest(uint64_t &, int, char *, char *, bool);
int sendResponse(uint64_t &, int, char *, char *, bool);
char *sendData(uint64_t &, int, char *, char *, char *, bool);

#endif // PONDE_H
