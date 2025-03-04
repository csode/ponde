#ifndef CLIENT_H
#define CLIENT_H

#include "ponde.h"
#include "server.h"

HttpRequestType *request_type;

void send(char *, HttpRequestType *request_type, ADDRESS);
void recive(char *, HttpRequestType *request_type, ADDRESS);

#endif //CLIENT_H
