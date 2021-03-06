#include <cstdint>
#include <iostream>

using namespace std;

class Block {
public:
	string sPrevHash;

	Block(unit32_t nIndexIn, const string &sDataIn);

	string GetHash();

	void MineBlock(unit32_t nDifficulty);

private:
	unit32_t _nIndex;
	int64_t _nNonce;
	string _sData;
	string _sHash;
	time_t _tTime;

	string _CalculateHash() const;
};
