#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <list>

#include "Customer.hpp"
#include "Article.hpp"

using namespace std;

class Order
{
    private:
        string code;
        Customer* customer;
        // ArticlesRepository* articles;
        list<Article*> articleList;
    public:
        Order(string code, Customer* customer);
        void attach(Article* article);
        void show();
};
#endif