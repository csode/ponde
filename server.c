#include "server.h"

char* begin(uint64_t &status_code, bool server.state, char *server.buffer, int server.request)
{
    server_info.status = true;
    status_code = 200;
    printf("Server started at \n" );
    return ADDRESS;
}

void loop(uint64_t& status_code, 
          bool server_info.state, int client_request.GET, int shutdown)
{
    while(shutdown != 1){
        printf("Do you wish to continue");
        scanf("%d", &shutdown);
        assert(server_info.state == false && "Server not started");
        if(shutdown == 1){  
            printf("You have shutdown the server\n");
            printf("Exiting ...\n");
            server_info.state = false;
            return;
        }
            printf("Server is waiting for incoming data\n");
            if(client_request.GET == 1) {
                assert(client_info->message == NULL && "Message from client cant be null\n");
            if(client_info.state == false) 
            {
                status_code = 500;
                printf("Client side error : %d\n", status_code );
            }
            else {
                printf("Data incoming\n");
                printf("Server status code : %d\n", status_code);
                printf("%s\n", client_info->message);
                sendResponse(&status_code, server_request.POST, ADDRESS, client_info->buffer, client_info.state);
            }
        }

        }
}

int main(void) 
{

    char *url = begin(uint64_t &status_code, bool server.state, char *server.buffer, int server.request);
}
