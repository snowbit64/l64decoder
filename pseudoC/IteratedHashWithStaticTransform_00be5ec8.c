// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHashWithStaticTransform
// Entry Point: 00be5ec8
// Size: 108 bytes
// Signature: undefined __thiscall ~IteratedHashWithStaticTransform(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false> * this)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 20u, CryptoPP::SHA1, 0u, false>::~IteratedHashWithStaticTransform() */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
::~IteratedHashWithStaticTransform
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
           *this)

{
  ulong uVar1;
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  *pIVar2;
  
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
             **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  if (pIVar2 == this + 0x70) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pIVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
             **)(this + 0x68);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pIVar2 == this + 0x10) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pIVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


