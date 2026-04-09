// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHash
// Entry Point: 00cb3400
// Size: 76 bytes
// Signature: undefined __thiscall ~IteratedHash(IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation> * this)


/* CryptoPP::IteratedHash<unsigned long, CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u,
   CryptoPP::HashTransformation>::~IteratedHash() */

void __thiscall
CryptoPP::
IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>
::~IteratedHash(IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>
                *this)

{
  ulong uVar1;
  IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>
  *pIVar2;
  
  pIVar2 = *(IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>
             **)(this + 0xb0);
  *(undefined ***)this = &PTR__IteratedHash_01000e98;
  uVar1 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar1 = *(ulong *)(this + 0xa8);
  }
  if (pIVar2 == this + 0x18) {
    this[0x99] = (IteratedHash<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,CryptoPP::HashTransformation>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pIVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  return;
}


