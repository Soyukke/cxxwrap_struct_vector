#include "jlcxx/jlcxx.hpp"

#include <iostream>
#include <vector>
#include "aaa.hpp"

// コンストラクタ定義．自動で廃棄してくれるようになるらしい．
// jlcxx::create<AAA>();
AAA::AAA() {}

std::string AAA::greet() {
    return "Hello World";
}

std::vector<int> AAA::get_vector() {
    for (int i=0;i<20;i++) {
        this->ns.push_back(i);
    }
    return ns;
}

JLCXX_MODULE define_julia_module(jlcxx::Module& mod)
{
//     types.add_type<World>("World")
//   .constructor<const std::string&>()
//   .method("set", &World::set)
//   .method("greet", &World::greet);
    mod.add_type<AAA>("AAA")
    // Juliaで呼び出す関数名, 実際の関数
    .method("greet", &AAA::greet)
    .method("get_vector", &AAA::get_vector);
}