// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btCompoundCompoundCollisionAlgorithm
// Entry Point: 00f4e5e8
// Size: 456 bytes
// Signature: undefined __thiscall btCompoundCompoundCollisionAlgorithm(btCompoundCompoundCollisionAlgorithm * this, btCollisionAlgorithmConstructionInfo * param_1, btCollisionObjectWrapper * param_2, btCollisionObjectWrapper * param_3, bool param_4)


/* btCompoundCompoundCollisionAlgorithm::btCompoundCompoundCollisionAlgorithm(btCollisionAlgorithmConstructionInfo
   const&, btCollisionObjectWrapper const*, btCollisionObjectWrapper const*, bool) */

void __thiscall
btCompoundCompoundCollisionAlgorithm::btCompoundCompoundCollisionAlgorithm
          (btCompoundCompoundCollisionAlgorithm *this,btCollisionAlgorithmConstructionInfo *param_1,
          btCollisionObjectWrapper *param_2,btCollisionObjectWrapper *param_3,bool param_4)

{
  btCollisionObjectWrapper *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  pbVar1 = param_3;
  if (!param_4) {
    pbVar1 = param_2;
  }
  uVar9 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x14) = 0;
  this[0x30] = (btCompoundCompoundCollisionAlgorithm)param_4;
  this[0x28] = (btCompoundCompoundCollisionAlgorithm)0x1;
  *(undefined ***)this = &PTR__btCompoundCollisionAlgorithm_010198e8;
  *(undefined8 *)(this + 8) = uVar9;
  lVar7 = *(long *)(pbVar1 + 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar3 = *(undefined4 *)(lVar7 + 0x68);
  this[0x40] = (btCompoundCompoundCollisionAlgorithm)0x0;
  *(undefined4 *)(this + 0x44) = uVar3;
  btCompoundCollisionAlgorithm::preallocateChildAlgorithms
            ((btCompoundCollisionAlgorithm *)this,param_2,param_3);
  this[0x68] = (btCompoundCompoundCollisionAlgorithm)0x1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined ***)this = &PTR__btCompoundCompoundCollisionAlgorithm_01019980;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar6 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x68,0x10);
  *(undefined *)(puVar6 + 4) = 1;
  puVar6[3] = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(undefined8 *)((long)puVar6 + 0xc) = 0;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  *(undefined *)(puVar6 + 8) = 1;
  puVar6[7] = 0;
  *puVar6 = &PTR__btHashedSimplePairCache_01019ca8;
  puVar5 = PTR_FUN_01048e38;
  *(undefined *)(puVar6 + 0xc) = 1;
  puVar6[0xb] = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  lVar7 = (*(code *)puVar5)(0x20,0x10);
  uVar4 = *(uint *)((long)puVar6 + 0xc);
  if (0 < (int)uVar4) {
    lVar8 = 0;
    do {
      uVar9 = *(undefined8 *)(puVar6[3] + lVar8);
      ((undefined8 *)(lVar7 + lVar8))[1] = ((undefined8 *)(puVar6[3] + lVar8))[1];
      *(undefined8 *)(lVar7 + lVar8) = uVar9;
      lVar8 = lVar8 + 0x10;
    } while ((ulong)uVar4 * 0x10 - lVar8 != 0);
  }
  if ((puVar6[3] != 0) && (*(char *)(puVar6 + 4) != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  puVar6[3] = lVar7;
  *(undefined *)(puVar6 + 4) = 1;
  *(undefined4 *)(puVar6 + 2) = 2;
  btHashedSimplePairCache::growTables();
  lVar7 = *(long *)(param_2 + 8);
  *(undefined8 **)(this + 0x48) = puVar6;
  uVar3 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x68);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar7 + 0x68);
  *(undefined4 *)(this + 0x74) = uVar3;
  return;
}


