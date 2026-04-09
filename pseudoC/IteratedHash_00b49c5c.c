// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHash
// Entry Point: 00b49c5c
// Size: 76 bytes
// Signature: undefined __thiscall ~IteratedHash(IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation> * this)


/* CryptoPP::IteratedHash<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 64u,
   CryptoPP::HashTransformation>::~IteratedHash() */

void __thiscall
CryptoPP::
IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>
::~IteratedHash(IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>
                *this)

{
  ulong uVar1;
  IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>
  *pIVar2;
  
  pIVar2 = *(IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>
             **)(this + 0x68);
  *(undefined ***)this = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pIVar2 == this + 0x10) {
    this[0x51] = (IteratedHash<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,CryptoPP::HashTransformation>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pIVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


