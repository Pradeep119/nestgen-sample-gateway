#include <iostream>
//#include <uWebSockets/App.h>
#include <uWebSockets/App.h>
int main() {
    /* Overly simple hello world app */
    uWS::App()
            .get("/*",[](auto *res, auto *req) {
                     std::string_view remote_ip =  res->getRemoteAddressAsText();
                     std::cout<<remote_ip<<std::endl;
                     auto sp = req->getHeader("user-agent");
                     std::cout<<sp<<std::endl;
                     res->end("Hello world! Here is your ip"+std::string(remote_ip));
                 }
            )
            .listen(3000, [](auto *listen_socket) {
                if (listen_socket) {
                    std::cout << "Listening on port " << 3000 << std::endl;
                }
            })
            .run();
    std::cout << "Failed to listen on port 3000" << std::endl;

//  auto ts = uWS::WebSocket<false, false,std::string>();
//
//  auto we = static_cast<uWS::TemplatedApp<false>>(td);
//
//  ts.getRemoteAddressAsText();
}

