#include "server.h"
#include "session.h"
using boost::asio::ip::tcp;
using namespace std;

Chatserver::Chatserver(int port)
: acceptor_(io_, tcp::endpoint(tcp::v4(), port)){
    accept();
}
void Chatserver::run(){
    io_.run();
}
void Chatserver::accept(){
    acceptor_.async_accept(
        [this](boost::system::error_code ec, tcp::socket socket){
            if(!ec){
                make_shared<Session>(move(socket))->start();
            }
            accept();
        }
    );
}