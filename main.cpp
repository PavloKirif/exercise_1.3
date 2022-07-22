#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> storage_vec (3, 1);
    storage_vec.push_back(2);
    storage_vec.push_back(3);
    storage_vec.push_back(4);

    for(int i = 0; i < storage_vec.size(); i++){
        std::cout << storage_vec[i] << std::endl;
    }
    std::cout << std::endl;


    storage_vec.erase(std::remove(storage_vec.begin(), storage_vec.end(), 1), storage_vec.end());
    for(auto &it : storage_vec){
        if(it == 2){
            it = 3;
        }
    }

    for(auto it : storage_vec){
        std::cout << it << std::endl;
    }
    std::cout << std::endl;


    std::vector<int> new_storage_vec = {1, 2, 3, 4, 4, 6};

    auto it = storage_vec.at(1);
    storage_vec.erase(storage_vec.begin() + 1, storage_vec.begin() + 3);

    for(auto it : new_storage_vec){
        storage_vec.push_back(it);
    }

    for(auto it : storage_vec){
        std::cout << it << std::endl;
    }
    std::cout << std::endl;

    for(auto it : new_storage_vec){
        std::cout << it << std::endl;
    }

    return 0;
}