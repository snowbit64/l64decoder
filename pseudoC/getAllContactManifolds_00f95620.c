// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllContactManifolds
// Entry Point: 00f95620
// Size: 288 bytes
// Signature: undefined __thiscall getAllContactManifolds(btBoxBoxCollisionAlgorithm * this, btAlignedObjectArray * param_1)


/* btBoxBoxCollisionAlgorithm::getAllContactManifolds(btAlignedObjectArray<btPersistentManifold*>&)
    */

void __thiscall
btBoxBoxCollisionAlgorithm::getAllContactManifolds
          (btBoxBoxCollisionAlgorithm *this,btAlignedObjectArray *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x18);
  if ((lVar3 != 0) && (this[0x10] != (btBoxBoxCollisionAlgorithm)0x0)) {
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == *(uint *)(param_1 + 8)) {
      uVar1 = uVar2 << 1;
      if (uVar2 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar2 < (int)uVar1) {
        if (uVar1 == 0) {
          lVar3 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar3 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
          uVar2 = *(uint *)(param_1 + 4);
        }
        if (0 < (int)uVar2) {
          lVar4 = 0;
          do {
            *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar2 * 8 - lVar4 != 0);
        }
        if ((*(long *)(param_1 + 0x10) != 0) && (param_1[0x18] != (btAlignedObjectArray)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
          uVar2 = *(uint *)(param_1 + 4);
        }
        *(long *)(param_1 + 0x10) = lVar3;
        lVar3 = *(long *)(this + 0x18);
        *(uint *)(param_1 + 8) = uVar1;
        param_1[0x18] = (btAlignedObjectArray)0x1;
      }
    }
    *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar2 * 8) = lVar3;
    *(uint *)(param_1 + 4) = uVar2 + 1;
  }
  return;
}


