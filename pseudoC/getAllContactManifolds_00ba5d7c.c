// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllContactManifolds
// Entry Point: 00ba5d7c
// Size: 216 bytes
// Signature: undefined __thiscall getAllContactManifolds(Bt2ConvexHeightfieldCollisionAlgorithm * this, btAlignedObjectArray * param_1)


/* Bt2ConvexHeightfieldCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::getAllContactManifolds
          (Bt2ConvexHeightfieldCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 == *(uint *)(param_1 + 8)) {
    uVar1 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar3 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar3 = *(uint *)(param_1 + 4);
      }
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      if ((*(void **)(param_1 + 0x10) != (void *)0x0) &&
         (param_1[0x18] != (btAlignedObjectArray)0x0)) {
        btAlignedFreeInternal(*(void **)(param_1 + 0x10));
        uVar3 = *(uint *)(param_1 + 4);
      }
      *(long *)(param_1 + 0x10) = lVar2;
      *(uint *)(param_1 + 8) = uVar1;
      param_1[0x18] = (btAlignedObjectArray)0x1;
    }
  }
  uVar5 = *(undefined8 *)(this + 0x18);
  *(uint *)(param_1 + 4) = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar3 * 8) = uVar5;
  return;
}


