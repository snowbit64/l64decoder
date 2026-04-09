// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SecureRandomGeneratorManager
// Entry Point: 00b496b0
// Size: 388 bytes
// Signature: undefined __thiscall ~SecureRandomGeneratorManager(SecureRandomGeneratorManager * this)


/* SecureRandomGeneratorManager::~SecureRandomGeneratorManager() */

void __thiscall
SecureRandomGeneratorManager::~SecureRandomGeneratorManager(SecureRandomGeneratorManager *this)

{
  ulong uVar1;
  SecureRandomGeneratorManager *pSVar2;
  SecureRandomGeneratorManager *pSVar3;
  SecureRandomGeneratorManager *pSVar4;
  
  pSVar2 = this + 0x1bf8;
  do {
    pSVar3 = *(SecureRandomGeneratorManager **)(pSVar2 + -8);
    uVar1 = *(ulong *)(pSVar2 + -0x18);
    if (*(ulong *)(pSVar2 + -0x10) <= *(ulong *)(pSVar2 + -0x18)) {
      uVar1 = *(ulong *)(pSVar2 + -0x10);
    }
    if (pSVar2 + -0x68 + ((ulong)(uint)-(int)(pSVar2 + -0x68) & 8) == pSVar3) {
      pSVar2[-0x1f] = (SecureRandomGeneratorManager)0x0;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)(pSVar3 + uVar1 * 4 + -4) = 0;
      }
    }
    pSVar3 = pSVar2 + -0xd8;
    pSVar4 = *(SecureRandomGeneratorManager **)(pSVar2 + -0x70);
    *(undefined ***)(pSVar2 + -0xd8) = &PTR__IteratedHash_00fe9de8;
    uVar1 = *(ulong *)(pSVar2 + -0x80);
    if (*(ulong *)(pSVar2 + -0x78) <= *(ulong *)(pSVar2 + -0x80)) {
      uVar1 = *(ulong *)(pSVar2 + -0x78);
    }
    if (pSVar4 == pSVar2 + -200) {
      pSVar2[-0x87] = (SecureRandomGeneratorManager)0x0;
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)(pSVar4 + uVar1 * 4 + -4) = 0;
      }
    }
    pSVar2 = pSVar3;
  } while (pSVar3 != this + 0xf8);
  *(undefined ***)(this + 0x60) = &PTR__RandomPool_0100f6d0;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 8))();
  }
  pSVar2 = *(SecureRandomGeneratorManager **)(this + 0xe0);
  uVar1 = *(ulong *)(this + 0xd0);
  if (*(ulong *)(this + 0xd8) <= *(ulong *)(this + 0xd0)) {
    uVar1 = *(ulong *)(this + 0xd8);
  }
  if (this + 0xa0 + ((ulong)(uint)-(int)(this + 0xa0) & 8) == pSVar2) {
    this[0xc9] = (SecureRandomGeneratorManager)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar2[uVar1 - 1] = (SecureRandomGeneratorManager)0x0;
    }
  }
  pSVar2 = *(SecureRandomGeneratorManager **)(this + 0x98);
  uVar1 = *(ulong *)(this + 0x88);
  if (*(ulong *)(this + 0x90) <= *(ulong *)(this + 0x88)) {
    uVar1 = *(ulong *)(this + 0x90);
  }
  if (this + 0x68 + ((ulong)(uint)-(int)(this + 0x68) & 8) == pSVar2) {
    this[0x81] = (SecureRandomGeneratorManager)0x0;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      pSVar2[uVar1 - 1] = (SecureRandomGeneratorManager)0x0;
    }
  }
  Mutex::~Mutex((Mutex *)(this + 0x28));
  Mutex::~Mutex((Mutex *)this);
  return;
}


