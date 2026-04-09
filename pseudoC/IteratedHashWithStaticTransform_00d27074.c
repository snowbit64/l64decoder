// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHashWithStaticTransform
// Entry Point: 00d27074
// Size: 120 bytes
// Signature: undefined __thiscall ~IteratedHashWithStaticTransform(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true> * this)


/* CryptoPP::IteratedHashWithStaticTransform<unsigned long,
   CryptoPP::EnumToType<CryptoPP::ByteOrder, 1>, 128u, 64u, CryptoPP::SHA384, 48u,
   true>::~IteratedHashWithStaticTransform() */

void __thiscall
CryptoPP::
IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
::~IteratedHashWithStaticTransform
          (IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
           *this)

{
  ulong uVar1;
  ulong uVar2;
  IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
  *pIVar3;
  
  pIVar3 = *(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
             **)(this + 0x158);
  uVar2 = *(ulong *)(this + 0x148);
  if (*(ulong *)(this + 0x150) <= *(ulong *)(this + 0x148)) {
    uVar2 = *(ulong *)(this + 0x150);
  }
  if (this + 0xb8 + ((ulong)(uint)-(int)(this + 0xb8) & 8) == pIVar3 && uVar2 != 0) {
    do {
      uVar1 = uVar2 - 1;
      *(undefined8 *)(pIVar3 + uVar2 * 8 + -8) = 0;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  pIVar3 = *(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
             **)(this + 0xb0);
  uVar2 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar2 = *(ulong *)(this + 0xa8);
  }
  if (pIVar3 == this + 0x18) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined8 *)(pIVar3 + uVar2 * 8 + -8) = 0;
    }
  }
  operator_delete(this);
  return;
}


