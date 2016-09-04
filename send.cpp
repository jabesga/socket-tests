#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "network.h"
#include <string.h>
using namespace std;
//  Socket operation stuff 
int UDP_socket;
char* incoming_packet;

int main(int argc, char** argv)
{
    //  Create network socket and buffer
    UDP_socket = network_connect();
    if (UDP_socket) printf( "Connected UDP socket.\n" ); 
    incoming_packet = new char[MAX_PACKET_SIZE];

    //  Test network loopback
    if(argc < 2){
	    printf("missing message");
	    exit(0);
    }
    char *test_data = argv[1];
    int bytes_sent = network_send(UDP_socket, test_data, strlen(test_data));
    if (bytes_sent) printf("%d bytes sent.", bytes_sent);
    return EXIT_SUCCESS;
}   

