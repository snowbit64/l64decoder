// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RandomPool
// Entry Point: 00d20288
// Size: 196 bytes
// Signature: undefined __thiscall ~RandomPool(RandomPool * this)


/* CryptoPP::RandomPool::~RandomPool() */

void __thiscall CryptoPP::RandomPool::~RandomPool(RandomPool *this)

{
  ulong uVar1;
  ulong uVar2;
  RandomPool *pRVar3;
  
  *(undefined ***)this = &PTR__RandomPool_0100f6d0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  pRVar3 = *(RandomPool **)(this + 0x80);
  uVar2 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar2 = *(ulong *)(this + 0x78);
  }
  if (this + 0x40 + ((ulong)(uint)-(int)(this + 0x40) & 8) == pRVar3) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      pRVar3[uVar2 - 1] = (RandomPool)0x0;
    }
  }
  pRVar3 = *(RandomPool **)(this + 0x38);
  uVar2 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar2 = *(ulong *)(this + 0x30);
  }
  if (this + 8 + ((ulong)(uint)-(int)(this + 8) & 8) == pRVar3 && uVar2 != 0) {
    do {
      uVar1 = uVar2 - 1;
      pRVar3[uVar2 - 1] = (RandomPool)0x0;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  operator_delete(this);
  return;
}


