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
    UDP_socket = network_init();
    if (UDP_socket) printf( "Created UDP socket.\n" ); 
    incoming_packet = new char[MAX_PACKET_SIZE];

    //  Test network loopback
    int test_recv = network_receive(UDP_socket, incoming_packet);
    cout << endl << incoming_packet << endl;
    printf("Received %i bytes\n", test_recv);
    return EXIT_SUCCESS;
}   

