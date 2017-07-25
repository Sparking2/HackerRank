#include <iostream>
#include <iomanip> 

int main() {
	int T; std::cin >> T;
	std::cout << std::setiosflags(std::ios::uppercase);
	std::cout << std::setw(0xf) << std::internal;
	while (T--) {
		double A; std::cin >> A;
		double B; std::cin >> B;
		double C; std::cin >> C;
		/////////////
		std::ios_base::fmtflags flags = std::cout.flags();
		std::cout << std::setw(0) << "0x" << std::hex << std::nouppercase << std::left << (long long)A << std::endl;
		std::cout.flags(flags);
		std::cout << std::fixed << std::setw(15) << std::setprecision(2) << std::setfill('_') << std::right << std::showpos << B << std::endl;
		std::cout.flags(flags);
		std::cout << std::scientific << std::setw(15) << std::setprecision(9) << std::noshowbase << std::right << C << std::endl;
		std::cout.flags(flags);
		////////////
	}
	return 0;
}