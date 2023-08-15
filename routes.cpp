#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int a = input["first"].i();
    int b = input["second"].i();
    return crow::response{"result":(a+b)};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int a = input["first"].i();
    int b = input["second"].i();
    return crow::response{"result":(a-b)};
}