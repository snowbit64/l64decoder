// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MD5Hash
// Entry Point: 0093387c
// Size: 132 bytes
// Signature: undefined __thiscall ~MD5Hash(MD5Hash * this)


/* MD5Hash::~MD5Hash() */

void __thiscall MD5Hash::~MD5Hash(MD5Hash *this)

{
  ulong uVar1;
  MD5Hash *pMVar2;
  
  pMVar2 = *(MD5Hash **)(this + 200);
  uVar1 = *(ulong *)(this + 0xb8);
  if (*(ulong *)(this + 0xc0) <= *(ulong *)(this + 0xb8)) {
    uVar1 = *(ulong *)(this + 0xc0);
  }
  if (pMVar2 == this + 0x70) {
    this[0xb1] = (MD5Hash)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pMVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  pMVar2 = *(MD5Hash **)(this + 0x68);
  *(undefined ***)this = &PTR__IteratedHash_00fe0160;
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (pMVar2 == this + 0x10) {
    this[0x51] = (MD5Hash)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(pMVar2 + uVar1 * 4 + -4) = 0;
    }
  }
  return;
}


