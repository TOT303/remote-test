#ifndef CLIENT_H
#define CLIENT_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<errno.h>
#include<iostream>
#include<string>
#include<fstream>
#include<opencv2/opencv.hpp>


void startClient(const char* message,const char* write_to);


#endif