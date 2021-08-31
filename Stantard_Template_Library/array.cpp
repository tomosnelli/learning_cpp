#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

void display(const std::array<int, 5> &are){
	std::cout << "[";
	for(const auto &i: arr){
		std::cout << i << " ";
	}
	std::cout << "]" << std::endl;
}

void test1(){
	std::cout << "Test1===========================" << std::endl;
	std::array<int, 5> arr1 {1,2,3,4,5}; // double {{}} for c++11
	std::array<int, 5> arr2;

	display(arr1);
	display(arr2);

	arr2 = {10, 20, 30, 40, 50};

	display(arr1);
	display(arr2);

	std::cout << "Size of arr1 is => " << arr1.size() << std::endl;
	std::cout << "Size of arr2 is => " << arr2.size() << std::endl;

	arr1[0] = 1000;
	arr1.at(1) = 810;
	display(arr1);

	std::cout << "Front of arr2 => " << arr2.front() << std::endl;
	std::cout << "Back of arr2 => " << arr2.back() << std::endl;
}

void test2(){

}

void test3(){

}

void test4(){

}

void test5(){

}

void test6(){

}

void test7(){

}

void test8(){

}

int main(){
	test1();
	return 0;
}
