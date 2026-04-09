// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingPair
// Entry Point: 00f46ffc
// Size: 328 bytes
// Signature: undefined __thiscall removeOverlappingPair(btSortedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2, btDispatcher * param_3)


/* btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*,
   btDispatcher*) */

undefined8 __thiscall
btSortedOverlappingPairCache::removeOverlappingPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  btBroadphaseProxy **ppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  btBroadphaseProxy *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  btBroadphaseProxy *pbVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = (**(code **)(*(long *)this + 0x70))();
  if ((uVar9 & 1) == 0) {
    uVar7 = *(uint *)(this + 0xc);
    pbVar4 = param_2;
    pbVar8 = param_1;
    if (*(int *)(param_2 + 0x18) <= *(int *)(param_1 + 0x18)) {
      pbVar4 = param_1;
      pbVar8 = param_2;
    }
    if (0 < (int)uVar7) {
      iVar12 = 0;
      lVar14 = 0;
      do {
        ppbVar1 = (btBroadphaseProxy **)(*(long *)(this + 0x18) + lVar14);
        if (*ppbVar1 == pbVar8 && ppbVar1[1] == pbVar4) {
          if ((int)uVar7 <= iVar12) {
            return 0;
          }
          lVar11 = *(long *)(this + 0x18) + lVar14;
          uVar13 = *(undefined8 *)(lVar11 + 0x18);
          gOverlappingPairs = gOverlappingPairs + -1;
          (**(code **)(*(long *)this + 0x40))(this,lVar11,param_3);
          plVar10 = *(long **)(this + 0x38);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x18))(plVar10,param_1,param_2,param_3);
          }
          lVar11 = (long)*(int *)(this + 0x10) * 0x20 + -0x20;
          puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar11);
          puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar14);
          uVar17 = *puVar2;
          uVar16 = puVar2[3];
          uVar15 = puVar2[2];
          uVar19 = puVar3[1];
          uVar18 = *puVar3;
          uVar5 = puVar3[2];
          uVar6 = puVar3[3];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar17;
          puVar3[3] = uVar16;
          puVar3[2] = uVar15;
          puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar11);
          puVar2[1] = uVar19;
          *puVar2 = uVar18;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
          return uVar13;
        }
        lVar14 = lVar14 + 0x20;
        iVar12 = iVar12 + 1;
      } while ((ulong)uVar7 * 0x20 - lVar14 != 0);
    }
  }
  return 0;
}


