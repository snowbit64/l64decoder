// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHashWithStaticTransform
// Entry Point: 00b49aa8
// Size: 120 bytes
// Signature: undefined __thiscall ~IteratedHashWithStaticTransform(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true> * this)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned int, CryptoPP::EnumToType<CryptoPP::ByteOrder,
   1>, 64u, 32u, CryptoPP::SHA256, 32u, true>::~IteratedHashWithStaticTransform() */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
::~IteratedHashWithStaticTransform
          (IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
           *this)

{
  ulong uVar1;
  ulong uVar2;
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
  *pIVar3;
  
  pIVar3 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
             **)(this + 0xd0);
  uVar2 = *(ulong *)(this + 0xc0);
  if (*(ulong *)(this + 200) <= *(ulong *)(this + 0xc0)) {
    uVar2 = *(ulong *)(this + 200);
  }
  if (this + 0x70 + ((ulong)(uint)-(int)(this + 0x70) & 8) == pIVar3 && uVar2 != 0) {
    do {
      uVar1 = uVar2 - 1;
      *(undefined4 *)(pIVar3 + uVar2 * 4 + -4) = 0;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  pIVar3 = *(IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,32u,CryptoPP::SHA256,32u,true>
             **)(this + 0x68);
  uVar2 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar2 = *(ulong *)(this + 0x60);
  }
  if (pIVar3 == this + 0x10) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)(pIVar3 + uVar2 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


