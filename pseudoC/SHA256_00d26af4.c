// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SHA256
// Entry Point: 00d26af4
// Size: 120 bytes
// Signature: undefined __thiscall ~SHA256(SHA256 * this)


/* CryptoPP::SHA256::~SHA256() */

void __thiscall CryptoPP::SHA256::~SHA256(SHA256 *this)

{
  ulong uVar1;
  ulong uVar2;
  SHA256 *pSVar3;
  
  pSVar3 = *(SHA256 **)(this + 0xd0);
  uVar2 = *(ulong *)(this + 0xc0);
  if (*(ulong *)(this + 200) <= *(ulong *)(this + 0xc0)) {
    uVar2 = *(ulong *)(this + 200);
  }
  if (this + 0x70 + ((ulong)(uint)-(int)(this + 0x70) & 8) == pSVar3 && uVar2 != 0) {
    do {
      uVar1 = uVar2 - 1;
      *(undefined4 *)(pSVar3 + uVar2 * 4 + -4) = 0;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  pSVar3 = *(SHA256 **)(this + 0x68);
  uVar2 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar2 = *(ulong *)(this + 0x60);
  }
  if (pSVar3 == this + 0x10) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)(pSVar3 + uVar2 * 4 + -4) = 0;
    }
  }
  operator_delete(this);
  return;
}


