//#include <string>
//#include <iostream>
//#include <vector>
//#include <map>
//
//void f(const char* x) {
//
//}
//
//struct Point {
//	int x;
//	int y;
//};
//
////map
//struct Comparer {
//	bool operator()(const std::string& l, const std::string& r) {
//		return l[0] < r[0];
//	}
//};
//
////M2 pt comparare
//bool my_cmp(const std::string& l, const std::string& r) {
//	return; l[0] < r[0];
//}
//
//using Mycomparer = bool (*)(const std::string & l, const std::string & r);
//int main()
//{
//	//CITIREA UNUI STRING DINTR-UN FISIER
//
//	//FILE* file = fopen("a.txt", "rb");
//
//	//if (file == nullptr) {
//	//	printf("..");
//	//	return 1;
//	//}
//
//	//std::string s;
//	//char buffer[4096];
//	//while (!feof(file)) {
//	//	auto read = fread(buffer, 1, sizeof(buffer), file);
//	//	s.append(buffer, read);
//	//}
//	//fclose(file);
//
//	//STL
//		//string, vector, map
//		// 
//	//std::string s; //clasa; are functii si operatori
//	std::string s = "abc";
//	//concatenare
//	s += "def";
//	s += 'y';
//	std::string a;
//	a.reserve(100); //pot adauga 100 de caractere fara sa realoc(?); la folosirea reserve-ului nu pierd ce am in string
//	
//	auto x = s.size(); //size-ul stringului
//	auto x = s.capacity(); //mai rar
//	auto x = s[0];
//	std::string = s; //copiere
//	auto x = s.back(); //s[s.size()-1]
//
//	f(s.c_str());  //??
//
//	s.resize(100);  // -> size
//	s.reserve(100); // -> capacity
//
//	s.push_back('y'); //adaug
//	s.pop_back('y'); //elimin
//	s.substr(2, 3); //substring din stringul original
//
//
//	//!!!!!!!!!!!!! VECTOR !!!!!!!!!!!!!!!!!
//	
//	std::vector<Point> x;
//	//vector nu are append; stringul are
//
//	x.push_back(Point{ 1,2 });
//	x.pop_back();
//
//	//!!!!!!!!!!!! MAP !!!!!!!!!!!!!!!!!!!!
//	
//	std::map<std::string, double>map;  //map pune constructorul pe valoare
//	//map["abc"]++;
//	map["abc"] = 5.0;
//	map["def"] = 6.0;
//
//	std::string a = "a";
//	std::string b = "b";
//
//
//	int x = 5;
//	decltype(x) y = 6;
//	std::map<std::string, int, decltype(&my_cmp) > map(my_cmp);
//	return 0;
//}