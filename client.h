#ifndef CLIENT_H
#define CLIENT_H

// THIS IS THE CLIENT SIDE HEADER USED BY THE CLIENT APPLICATION 
// SO THAT IT DIRECTLY CONNECTS TO THE SERVER
#include "ponde.h"
#include "server.h"

HttpRequestType *request_type;

void send(char *, HttpRequestType *request_type, ADDRESS);
void recive(char *, HttpRequestType *request_type, ADDRESS);

#endif //CLIENT_H
