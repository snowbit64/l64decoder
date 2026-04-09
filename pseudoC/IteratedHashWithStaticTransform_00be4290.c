// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHashWithStaticTransform
// Entry Point: 00be4290
// Size: 132 bytes
// Signature: undefined __thiscall ~IteratedHashWithStaticTransform(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false> * this)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   0>, 64u, 16u, CryptoPP::Weak1::MD5, 0u, false>::~IteratedHashWithStaticTransform() */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
::~IteratedHashWithStaticTransform
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
           *this)

{
  ulong uVar1;
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
  *pIVar2;
  
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
             **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  if (pIVar2 == this + 0x70) {
    this[0xb1] = (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pIVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
             **)(this + 0x68);
  *(undefined ***)this = &PTR__IteratedHash_00fe0160;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pIVar2 == this + 0x10) {
    this[0x51] = (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,0>,64u,16u,CryptoPP::Weak1::MD5,0u,false>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pIVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


