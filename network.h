//
//  network.h
//  interface
//
//  Created by Philip Rosedale on 8/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef interface_network_h
#define interface_network_h

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>

const int MAX_PACKET_SIZE = 65536;

int network_connect();
int network_init();
int network_send(int handle, char * packet_data, int packet_size);
int network_receive(int handle, char * packet_data);

#endif
