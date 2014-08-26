//
//  DJRSocket.h
//  Intern2
//
//  Created by JIARUI DING on 8/11/14.
//  Copyright (c) 2014 JIARUI DING. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <netinet/in.h>
#import <sys/socket.h>
#import <sys/types.h>
#import <arpa/inet.h>
#import <sys/ioctl.h>

//
//  BUFFER_SIZE indicate the size of a socket buffer
//  By default it is 8192, you may change it, but make sure
//  that it fits the speed of transmission and the buffer size
//  of the server
//
#define IP_ADDR                      "127.0.0.1"
#define HELLO_WORLD_SERVER_PORT      10000
#define BUFFER_SIZE                  8192
#define TIME_OUT                     5

//
//  DJRSocket Class
@interface DJRSocket : NSObject {
    struct sockaddr_in client_addr;
    struct sockaddr_in  server_addr;
    int client_socket;
}

//
// Setup and Release connection
- (NSInteger)setupConnection:(NSString*)ipAddr;
- (void)releaseConnection;

//
//  Send and receive
//  Returen value are the actual number of bytes been put on / get from
//  socket.
- (ssize_t)send:(char *)buf;
- (size_t)recv:(char *)buf;
- (size_t)send:(char *)buf withSize:(int)size;

@end