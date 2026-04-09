// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SHA384
// Entry Point: 00d26bfc
// Size: 120 bytes
// Signature: undefined __thiscall ~SHA384(SHA384 * this)


/* CryptoPP::SHA384::~SHA384() */

void __thiscall CryptoPP::SHA384::~SHA384(SHA384 *this)

{
  ulong uVar1;
  ulong uVar2;
  SHA384 *pSVar3;
  
  pSVar3 = *(SHA384 **)(this + 0x158);
  uVar2 = *(ulong *)(this + 0x148);
  if (*(ulong *)(this + 0x150) <= *(ulong *)(this + 0x148)) {
    uVar2 = *(ulong *)(this + 0x150);
  }
  if (this + 0xb8 + ((ulong)(uint)-(int)(this + 0xb8) & 8) == pSVar3 && uVar2 != 0) {
    do {
      uVar1 = uVar2 - 1;
      *(undefined8 *)(pSVar3 + uVar2 * 8 + -8) = 0;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  pSVar3 = *(SHA384 **)(this + 0xb0);
  uVar2 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar2 = *(ulong *)(this + 0xa8);
  }
  if (pSVar3 == this + 0x18) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined8 *)(pSVar3 + uVar2 * 8 + -8) = 0;
    }
  }
  operator_delete(this);
  return;
}


