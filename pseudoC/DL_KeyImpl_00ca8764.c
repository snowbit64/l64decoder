// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_KeyImpl
// Entry Point: 00ca8764
// Size: 108 bytes
// Signature: undefined __thiscall ~DL_KeyImpl(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID> * this)


/* CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::OID>::~DL_KeyImpl() */

void __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
::~DL_KeyImpl(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
              *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + 8) = in_x1[0xb];
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[0xc];
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x58));
  lVar1 = in_x1[1];
  *(long *)this = lVar1;
  *(long *)(this + 8) = in_x1[9];
  *(long *)(this + *(long *)(lVar1 + -0x18)) = in_x1[10];
  ByteQueue::~ByteQueue((ByteQueue *)(this + 0x10));
  return;
}


