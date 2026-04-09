// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IteratedHashWithStaticTransform
// Entry Point: 00d26b6c
// Size: 144 bytes
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
  IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
  *pIVar2;
  
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
             **)(this + 0x158);
  uVar1 = *(ulong *)(this + 0x148);
  if (*(ulong *)(this + 0x150) <= *(ulong *)(this + 0x148)) {
    uVar1 = *(ulong *)(this + 0x150);
  }
  if (this + 0xb8 + ((ulong)(uint)-(int)(this + 0xb8) & 8) == pIVar2) {
    this[0x141] = (IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
                   )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pIVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  pIVar2 = *(IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
             **)(this + 0xb0);
  *(undefined ***)this = &PTR__IteratedHash_01000e98;
  uVar1 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar1 = *(ulong *)(this + 0xa8);
  }
  if (pIVar2 == this + 0x18) {
    this[0x99] = (IteratedHashWithStaticTransform<unsigned_long,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,128u,64u,CryptoPP::SHA384,48u,true>
                  )0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined8 *)(pIVar2 + uVar1 * 8 + -8) = 0;
    }
  }
  return;
}


