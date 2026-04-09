// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearManifold
// Entry Point: 00f47f7c
// Size: 120 bytes
// Signature: undefined __thiscall clearManifold(btCollisionDispatcher * this, btPersistentManifold * param_1)


/* btCollisionDispatcher::clearManifold(btPersistentManifold*) */

btCollisionDispatcher * __thiscall
btCollisionDispatcher::clearManifold(btCollisionDispatcher *this,btPersistentManifold *param_1)

{
  int iVar1;
  long lVar2;
  btCollisionDispatcher **ppbVar3;
  
  iVar1 = *(int *)(param_1 + 0x318);
  if (0 < iVar1) {
    lVar2 = 0;
    ppbVar3 = (btCollisionDispatcher **)(param_1 + 0x78);
    do {
      this = *ppbVar3;
      if ((this != (btCollisionDispatcher *)0x0) && (gContactDestroyedCallback != (code *)0x0)) {
        this = (btCollisionDispatcher *)(*gContactDestroyedCallback)();
        iVar1 = *(int *)(param_1 + 0x318);
        *ppbVar3 = (btCollisionDispatcher *)0x0;
      }
      lVar2 = lVar2 + 1;
      ppbVar3 = ppbVar3 + 0x18;
    } while (lVar2 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  return this;
}


