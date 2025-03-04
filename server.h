#ifndef SERVER_H
#define SERVER_H

#include <stdlib.h>
#include "ponde.h"
#include "client.h"

HttpRequestType *request_type;

struct info *server; 

void run(char *, HttpRequestType *request_type, ADDRESS);

#endif //SERVER_H

