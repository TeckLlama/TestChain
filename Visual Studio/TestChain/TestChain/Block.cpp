#include "Block.h"
#include "sha256.h"


Block::Block(uint32_t nIndexIn, const std::string& sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{
    _nNonce = 0;
    _tTime = time(nullptr);

    sHash = _CalculateHash();
}

void Block::MineBlock(uint32_t nDifficulty)
{
    //std::vector<char> cstr2(nDifficulty+1);
    //char cstr[] = cstr2(nDifficulty + 1);
    char* cstr = new char[nDifficulty + 1];
    for (uint32_t i = 0; i < nDifficulty; ++i)
    {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';

    std::string str(cstr);

    do
    {
        _nNonce++;
        sHash = _CalculateHash();
    } while (sHash.substr(0, nDifficulty) != str);

    std::cout << "Block mined: " << sHash << std::endl;
    delete[] cstr;
}

inline std::string Block::_CalculateHash() const
{
    std::stringstream ss;
    ss << _nIndex << sPrevHash << _tTime << _sData << _nNonce;

    return sha256(ss.str());
}
