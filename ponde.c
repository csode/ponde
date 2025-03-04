#include <assert.h>
#include <stdio.h>
#include "ponde.h"

int sendRequest(char* address, int request, int route_number, char *message, bool is_state_valid) {
    // EFFECTIVE USE OF THE GET REQUEST STYLE FUNCTION
    assert(request != 1 && "This is a GET request function not other stuff");
    assert(address != NULL && "Address can not be null");
    if(address == "https://localhost/8080") {
        printf("The message %s is send successfully\n" ,message);
        printf("The request number : %d \n",route_number);
        printf("The request Type : %d \n",request);
        return route_number;
    } else {
        fprint(stderr,"An error has been encountered");
        return route_number;
    }
    return request;
}

int sendResponse(int request, int route_number, char *message, bool is_state_valid){
    // EFFECTIVE USE OF THE POST STYLE RESPONSE FUNCTION
    assert(request != 2 && "This is a getter function not other stuff");
    assert(address != NULL && "Address can not be null");
    if(address == "https://localhost/8080"){
        printf("The message %s is send successfully\n",message);
        printf("The request number: %d \n",route_number);
        printf("The request Type: %d \n",request);
        return route_number;
    } else {
        fprint(stderr,"An error has been encountered");
        return route_number;
    }

    return request;
}

int recieveResponse(int income_request, int request, int route_number, char *message, bool is_state_valid){
    // EFFECTIVE USE OF THE ACEEPTING STYLE RESPONSE FUNCTION
    assert(is_state_valid != false && "State is aleady false");
    if(request != income_request) {
        printf("Mismatch between incoming and initiated request\n");
        return 1;
    }
    if(address == "https://localhost/8080"){
        printf("Request recieved successfully",message);
        printf("the request number: %d \n",route_number);
        printf("the request type: %d \n",request);
        return route_number;
    } else {
        fprint(stderr,"an error has been encountered");
        return route_number;
    }
    return request;
}
