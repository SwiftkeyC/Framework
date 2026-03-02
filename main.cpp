#include "server.h"
using namespace std;
const int MAXN = 1e9 + 7;
int main(){
    Chatserver server(8080);
    server.run();
    return 0;

}
