#pragma once
#include <memory>
class Chatserver{
    private:
        void accept();
        boost::asio::io_context io_;
        boost::asio::ip::tcp::acceptor acceptor_;
    public:
        Chatserver(int port);
        void run();
};
