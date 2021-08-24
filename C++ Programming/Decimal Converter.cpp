#include <iostream>
#include <iterator>
#include <algorithm>
#include <bitset>
std::string toOctal(int num) {
	std::string octalNum("");
	while(num > 0) {
		int total = num % 8;
		num /= 8;
		octalNum.append(std::to_string(total));
	}
	std::reverse(octalNum.begin(),octalNum.end());
	return (std::move(octalNum));
}
std::string toBinary(int num) {
	return std::move((std::bitset<8>(num).to_string()));
}
std::string toHex(int num) {
	std::string hexNumber("");
	while(num > 0) {
		int rem = num % 16;
		if(rem > 9){
			switch(rem) {
				case 10: hexNumber.append("A");break;
				case 11: hexNumber.append("B");break;
				case 12: hexNumber.append("C");break;
				case 13: hexNumber.append("D");break;
				case 14: hexNumber.append("E");break;
				case 15: hexNumber.append("F");break;
			}
		}
		else
			hexNumber.append(std::to_string(rem));
		num /= 16;
	}
	std::reverse(hexNumber.begin(),hexNumber.end());
	return(std::move(hexNumber));

}
std::string conversion(int num) {
	std::string result("\n\nDecimal: ");
	result.append(std::to_string(num));
	result.append("\n");

	result.append("Binary: ");
	result.append(toBinary(num));
	result.append("\n");

	result.append("Octal: ");
	result.append(toOctal(num));
	result.append("\n");

	result.append("Hex: ");
	result.append(toHex(num));
	result.append("\n");
	return (std::move(result));
}

int main() {
	std::cout << "Enter Number: ";

	std::transform(std::istream_iterator<int>(std::cin),std::istream_iterator<int>(),
			std::ostream_iterator<std::string>(std::cout,"\nNumber:"),conversion);
}
