#include <iostream>
#include <sstream>
#include <iomanip>

int main(){
	//code to check if the consuctive K consuctive strings are equal
	std::string name;
	std::cin>>name;
	int K, N;
	K = 2;
	N = name.length();
	for(int i =0; i < N-K; i++){
		for(int j = 1; j < i + (N - 1); j++){
			if(name[i] == name[j]){
				std::cout<<name[i]<<std::setw(10)<<name[j]<<std::endl;
			};
		std::cout<<counter<<std::endl;
		};
	};
	return 0;
}
