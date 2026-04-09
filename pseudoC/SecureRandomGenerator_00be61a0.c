// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecureRandomGenerator
// Entry Point: 00be61a0
// Size: 228 bytes
// Signature: undefined __thiscall ~SecureRandomGenerator(SecureRandomGenerator * this)


/* SecureRandomGenerator::~SecureRandomGenerator() */

void __thiscall SecureRandomGenerator::~SecureRandomGenerator(SecureRandomGenerator *this)

{
  ulong uVar1;
  long lVar2;
  SecureRandomGenerator *pSVar3;
  
  lVar2 = 0x297;
  do {
    this[lVar2] = (SecureRandomGenerator)0x0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0x97);
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined ***)this = &PTR__RandomPool_0100f6d0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  pSVar3 = *(SecureRandomGenerator **)(this + 0x80);
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  if (this + 0x40 + ((ulong)(uint)-(int)(this + 0x40) & 8) == pSVar3) {
    this[0x69] = (SecureRandomGenerator)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar3[uVar1 - 1] = (SecureRandomGenerator)0x0;
    }
  }
  pSVar3 = *(SecureRandomGenerator **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  if (this + 8 + ((ulong)(uint)-(int)(this + 8) & 8) == pSVar3) {
    this[0x21] = (SecureRandomGenerator)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar3[uVar1 - 1] = (SecureRandomGenerator)0x0;
    }
  }
  return;
}


