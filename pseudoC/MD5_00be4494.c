// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MD5
// Entry Point: 00be4494
// Size: 108 bytes
// Signature: undefined __thiscall ~MD5(MD5 * this)


/* CryptoPP::Weak1::MD5::~MD5() */

void __thiscall CryptoPP::Weak1::MD5::~MD5(MD5 *this)

{
  ulong uVar1;
  MD5 *pMVar2;
  
  pMVar2 = *(MD5 **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  if (pMVar2 == this + 0x70) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pMVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pMVar2 = *(MD5 **)(this + 0x68);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pMVar2 == this + 0x10) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pMVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


