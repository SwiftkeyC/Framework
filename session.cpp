#include "session.h"
#include <iostream>
using namespace std;
using boost::asio::ip::tcp;
Session::Session(tcp::socket socket)
    : socket_(move(socket)){}
void Session::start(){
    read();
}
void Session::read(){
    auto self = shared_from_this();
    socket_.async_read_some(
        boost::asio::buffer(buffer_),
        
    )
}