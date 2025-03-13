#include "ponde.h"

int sendRequest(uint64_t &status_code, int reqest_type, char *url, char *buffer,
                bool status) {
  assert(state == false && "Not connected");
  if (strcmp(url, buffer) != 0) {
    fprintf(stderr, "Url does not match\n");
    status_code = 400;
    printf("Status code is : ", status_code);
    return -1;
  }
  if (request_type != 1)
    return -1;
  return request_type;
}
int sendResponse(uint64_t &status_code, int request_type, char *url,
                 char *buffer, bool state) {
  assert(state == false && "Not connected");
  if (strcmp(url, buffer) != 0) {
    fprintf(stderr, "Url does not match\n");
    printf("Status code is : ", status_code);
    status_code = 400;
    return -1;
  }
  if (request_type != 2)
    return -1;
  return request_type;
}

char *sendData(uint64_t &status_code, int request_type, char *url, char *buffer,
               char *message, bool state) {
  assert(state == false && "Not connected");
  if (strcmp(url, buffer) != 0) {
    fprintf(stderr, "Url does not match\n");
    status_code = 400;
    printf("Status code is : ", status_code);
    return -1;
  }
  if (request_type != 2)
    return -1;
  return message;
}
