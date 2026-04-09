// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllContactManifolds
// Entry Point: 00f4f750
// Size: 192 bytes
// Signature: undefined __thiscall getAllContactManifolds(btCompoundCompoundCollisionAlgorithm * this, btAlignedObjectArray * param_1)


/* btCompoundCompoundCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
btCompoundCompoundCollisionAlgorithm::getAllContactManifolds
          (btCompoundCompoundCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 0x48);
  iVar2 = *(int *)(lVar4 + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(this + 0x14);
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        plVar1 = *(long **)(*(long *)(this + 0x20) + lVar4 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
          iVar2 = *(int *)(this + 0x14);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar3 = 0;
    lVar5 = 8;
    do {
      plVar1 = *(long **)(*(long *)(lVar4 + 0x18) + lVar5);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
        iVar2 = *(int *)(lVar4 + 0xc);
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 < iVar2);
  }
  return;
}


