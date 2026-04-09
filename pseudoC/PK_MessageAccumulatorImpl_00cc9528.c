// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PK_MessageAccumulatorImpl
// Entry Point: 00cc9528
// Size: 144 bytes
// Signature: undefined __thiscall ~PK_MessageAccumulatorImpl(PK_MessageAccumulatorImpl<CryptoPP::SHA256> * this)


/* CryptoPP::PK_MessageAccumulatorImpl<CryptoPP::SHA256>::~PK_MessageAccumulatorImpl() */

void __thiscall
CryptoPP::PK_MessageAccumulatorImpl<CryptoPP::SHA256>::~PK_MessageAccumulatorImpl
          (PK_MessageAccumulatorImpl<CryptoPP::SHA256> *this)

{
  ulong uVar1;
  PK_MessageAccumulatorImpl<CryptoPP::SHA256> *pPVar2;
  
  pPVar2 = *(PK_MessageAccumulatorImpl<CryptoPP::SHA256> **)(this + 0x1c0);
  uVar1 = *(ulong *)(this + 0x1b0);
  if (*(ulong *)(this + 0x1b8) <= *(ulong *)(this + 0x1b0)) {
    uVar1 = *(ulong *)(this + 0x1b8);
  }
  if (this + 0x160 + ((ulong)(uint)-(int)(this + 0x160) & 8) == pPVar2) {
    this[0x1a9] = (PK_MessageAccumulatorImpl<CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pPVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pPVar2 = *(PK_MessageAccumulatorImpl<CryptoPP::SHA256> **)(this + 0x158);
  *(undefined ***)(this + 0xf0) = &PTR__IteratedHash_00fe9de8;
  uVar1 = *(ulong *)(this + 0x148);
  if (*(ulong *)(this + 0x150) <= *(ulong *)(this + 0x148)) {
    uVar1 = *(ulong *)(this + 0x150);
  }
  if (pPVar2 == this + 0x100) {
    this[0x141] = (PK_MessageAccumulatorImpl<CryptoPP::SHA256>)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pPVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  PK_MessageAccumulatorBase::~PK_MessageAccumulatorBase((PK_MessageAccumulatorBase *)this);
  return;
}


