#include <iostream>
#include <vector>
//Ticket5;

std::vector<int> getPair(){
    std::vector<int> out;
    int min1 = INT32_MAX;
    int min2 = INT32_MAX;
    int generalSum = 0;
    while(generalSum <= 50){
        std::cout<<"Input int number"<<std::endl;
        int x;
        std::cin>>x;
        generalSum += x;
        if(x < min1){
            min2 = min1;
            min1 = x;
        }
    }
    out.push_back(min1);
    out.push_back(min2);
    return out;
}

void testPair(std::vector<int> result){
    for(int i = 0; i<result.size(); i++){
        std::cout<<result[i]<<std::endl;
    }
}

int main() {
    testPair(getPair());
    return 0;
}
