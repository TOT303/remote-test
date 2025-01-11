#include"client.h"

void startClient(const char* message,const char* write_to) {
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        std::cerr << "Socket creation failed" << std::endl;

    }

    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
        std::cerr << "Connection failed" << std::endl;
        close(clientSocket);

    }

    std::cout << "Connected to server" << std::endl;

    send(clientSocket, message, strlen(message), 0);

    char buffer[1024] = {0};
    recv(clientSocket, buffer, sizeof(buffer), 0);
    std::ofstream file(write_to);
    if (file.good()){
        file << buffer;
    }
    else {
        std::cerr << "File not found" << std::endl;
    }
    file.close();

    close(clientSocket);

}




