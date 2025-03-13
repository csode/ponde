#ifndef SERVER_H
#define SERVER_H

#include <stdbool.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ponde.h"
#include "client.h"

typedef info server_info;
typedef REQUEST server_request;

char* begin(uint64_t &, bool, char*, int);
void loop( uint64_t& , bool,size_t );
#endif //SERVER_H

