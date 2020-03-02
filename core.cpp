#include <iostream>
#include <cryptopp/filters.h>
#include <cryptopp/hex.h>
#include <cryptopp/sha.h>
using namespace CryptoPP;
 
int main(int argc, char **argv){
	SHA256 hash;
	std::string digest;
	std::string message = "Rosetta code";
 
	StringSource s(message, true, new CryptoPP::HashFilter(hash, new CryptoPP::HexEncoder(new CryptoPP::StringSink(digest))));
 
	std::cout << digest << std::endl;
 
	return 0;
}