#pragma once
#include <memory>
#include <array>
using namespace std;

Class Session : public enable_shared_from_this<Session>{
    public:
        Session(boost::asio::ip::tcp::socket socket);
        void start();
    private:
        void read();
        void write(const string& msg);
        boost::asio::ip::tcp::socket socket_;
        array<char, 1024> buffer_;

}