#include "server.h"

void run(char *send, HttpRequestType *client_request, ADDRESS, bool is_valid) {
    while(is_valid){
        printf("%s\n", ADDRESS);
        printf("Listening to packet ...\n");
        if(client_request::GET) {
            recieveResponse(client->income_request,
                            server->request, server->route_number, 
                            message, is_valid);
        }
    }
}

