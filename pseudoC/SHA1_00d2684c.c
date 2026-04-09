// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SHA1
// Entry Point: 00d2684c
// Size: 108 bytes
// Signature: undefined __thiscall ~SHA1(SHA1 * this)


/* CryptoPP::SHA1::~SHA1() */

void __thiscall CryptoPP::SHA1::~SHA1(SHA1 *this)

{
  ulong uVar1;
  SHA1 *pSVar2;
  
  pSVar2 = *(SHA1 **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  if (pSVar2 == this + 0x70) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pSVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pSVar2 = *(SHA1 **)(this + 0x68);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pSVar2 == this + 0x10) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pSVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


