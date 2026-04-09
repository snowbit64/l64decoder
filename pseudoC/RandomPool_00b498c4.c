// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RandomPool
// Entry Point: 00b498c4
// Size: 200 bytes
// Signature: undefined __thiscall ~RandomPool(RandomPool * this)


/* CryptoPP::RandomPool::~RandomPool() */

void __thiscall CryptoPP::RandomPool::~RandomPool(RandomPool *this)

{
  ulong uVar1;
  RandomPool *pRVar2;
  
  *(undefined ***)this = &PTR__RandomPool_0100f6d0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  pRVar2 = *(RandomPool **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  if (this + 0x40 + ((ulong)(uint)-(int)(this + 0x40) & 8) == pRVar2) {
    this[0x69] = (RandomPool)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pRVar2[uVar1 - 1] = (RandomPool)0x0;
    }
  }
  pRVar2 = *(RandomPool **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  if (this + 8 + ((ulong)(uint)-(int)(this + 8) & 8) == pRVar2) {
    this[0x21] = (RandomPool)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pRVar2[uVar1 - 1] = (RandomPool)0x0;
    }
  }
  return;
}


