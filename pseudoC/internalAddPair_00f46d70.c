// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalAddPair
// Entry Point: 00f46d70
// Size: 652 bytes
// Signature: undefined __thiscall internalAddPair(btHashedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btHashedOverlappingPairCache::internalAddPair(btBroadphaseProxy*, btBroadphaseProxy*) */

btBroadphaseProxy ** __thiscall
btHashedOverlappingPairCache::internalAddPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  btBroadphaseProxy **ppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  btBroadphaseProxy *pbVar5;
  btBroadphaseProxy *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  uVar7 = *(uint *)(this + 0x10);
  lVar16 = *(long *)(this + 0x18);
  pbVar5 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar5 = param_2;
    param_2 = param_1;
  }
  uVar11 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar5 + 0x18) << 0x10;
  uVar11 = uVar11 + (uVar11 << 0xf ^ 0xffffffff);
  uVar11 = (uVar11 ^ (int)uVar11 >> 10) * 9;
  uVar11 = uVar11 ^ (int)uVar11 >> 6;
  uVar11 = uVar11 + (uVar11 << 0xb ^ 0xffffffff);
  uVar11 = uVar11 ^ (int)uVar11 >> 0x10;
  uVar4 = uVar11 & uVar7 - 1;
  iVar15 = *(int *)(*(long *)(this + 0x40) + (long)(int)uVar4 * 4);
  if (iVar15 != -1) {
    do {
      ppbVar1 = (btBroadphaseProxy **)(lVar16 + (long)iVar15 * 0x20);
      if ((*(uint *)(*ppbVar1 + 0x18) == *(uint *)(param_2 + 0x18)) &&
         (*(int *)(ppbVar1[1] + 0x18) == *(int *)(pbVar5 + 0x18))) {
        return ppbVar1;
      }
      iVar15 = *(int *)(*(long *)(this + 0x60) + (long)iVar15 * 4);
    } while (iVar15 != -1);
  }
  uVar8 = *(uint *)(this + 0xc);
  lVar18 = (long)(int)uVar8;
  uVar13 = uVar8;
  uVar17 = uVar7;
  if (uVar8 == uVar7) {
    uVar10 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar10 = 1;
    }
    uVar13 = uVar7;
    if ((int)uVar7 < (int)uVar10) {
      if (uVar10 == 0) {
        lVar16 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar16 = (*(code *)PTR_FUN_01048e38)
                           (-(ulong)(uVar10 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar10 << 5,0x10)
        ;
        uVar17 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar17) {
        lVar14 = 0;
        do {
          puVar2 = (undefined8 *)(lVar16 + lVar14);
          puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar14);
          lVar14 = lVar14 + 0x20;
          uVar20 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar20;
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
        } while ((ulong)uVar17 * 0x20 - lVar14 != 0);
      }
      if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btHashedOverlappingPairCache)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      *(long *)(this + 0x18) = lVar16;
      *(uint *)(this + 0x10) = uVar10;
      this[0x20] = (btHashedOverlappingPairCache)0x1;
      uVar13 = *(uint *)(this + 0xc);
      uVar17 = uVar10;
    }
  }
  plVar12 = *(long **)(this + 0x70);
  uVar19 = (ulong)(int)uVar4;
  ppbVar1 = (btBroadphaseProxy **)(lVar16 + lVar18 * 0x20);
  *(uint *)(this + 0xc) = uVar13 + 1;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,param_2,pbVar5);
    uVar17 = *(uint *)(this + 0x10);
  }
  if ((int)uVar7 < (int)uVar17) {
    growTables();
    uVar19 = (long)*(int *)(this + 0x10) - 1U & (long)(int)uVar11;
  }
  iVar15 = *(int *)(param_2 + 0x18);
  lVar16 = lVar16 + lVar18 * 0x20;
  iVar9 = *(int *)(pbVar5 + 0x18);
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(undefined8 *)(lVar16 + 0x18) = 0;
  pbVar6 = pbVar5;
  if (iVar9 <= iVar15) {
    pbVar6 = param_2;
    param_2 = pbVar5;
  }
  *ppbVar1 = param_2;
  *(btBroadphaseProxy **)(lVar16 + 8) = pbVar6;
  lVar16 = *(long *)(this + 0x40);
  *(undefined4 *)(*(long *)(this + 0x60) + lVar18 * 4) = *(undefined4 *)(lVar16 + uVar19 * 4);
  *(uint *)(lVar16 + uVar19 * 4) = uVar8;
  return ppbVar1;
}


