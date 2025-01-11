#include <iostream>
#include"client.h"
#include"server.h"

int main(){

    startServer("hello,client");
    startClient("hello,server","client.txt");
    return 0;
}
