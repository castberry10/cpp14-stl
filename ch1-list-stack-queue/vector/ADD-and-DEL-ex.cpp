#include <iostream>
#include <bits/stdc++.h>

// using namespace std;

int main(){
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.insert(vec.begin(), 0);
	vec.insert(find(vec.begin(), vec.end(), 1), 4);
	
	// for(iter = v.begin(); iter!= v.end(); iter++)
	// {
	// std::cout << "Iterator : " << *iter << std::endl;
	// }

	for(auto i : vec){
		std::cout << "vec 원소 : " << i << std::endl;
	}
  	return 0;
}