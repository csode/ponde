#indef PONDE_H
#define PONDE_H

/*
 The idea is both the server and client import this library and use it 
 How it works is server.h and client.h will include this header and use
 it as a medium. Note that for now it is not async it is not multhithreaded
 just yest will add that later for now I want it to work locally.
*/
#define ADDRESS "https://localhost/8080";

typedef enum HttpRequestType{
    GET,
    POST,
};

struct info{
    int route_number = 200;
    char *message;
    bool current_state = true;
};

int sendRequest(int, int, char *, bool);
int sendResponse(int, int, char *, bool);
int recieveResponse(int, int, char *, bool);

#endif //PONDE_H
