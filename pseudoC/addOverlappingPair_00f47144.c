// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlappingPair
// Entry Point: 00f47144
// Size: 484 bytes
// Signature: undefined __thiscall addOverlappingPair(btSortedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*) */

btBroadphaseProxy ** __thiscall
btSortedOverlappingPairCache::addOverlappingPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btBroadphaseProxy **ppbVar3;
  btBroadphaseProxy *pbVar4;
  uint uVar5;
  btBroadphaseProxy *pbVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  plVar7 = *(long **)(this + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 8)) != 0) &&
       ((*(ushort *)(param_1 + 10) & *(ushort *)(param_2 + 8)) != 0)) goto LAB_00f471a8;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
    if ((uVar8 & 1) != 0) {
LAB_00f471a8:
      uVar10 = *(uint *)(this + 0xc);
      lVar12 = (long)(int)uVar10;
      if (uVar10 == *(uint *)(this + 0x10)) {
        uVar5 = uVar10 << 1;
        if (uVar10 == 0) {
          uVar5 = 1;
        }
        if ((int)uVar10 < (int)uVar5) {
          if (uVar5 == 0) {
            lVar9 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar9 = (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5,0x10
                              );
            uVar10 = *(uint *)(this + 0xc);
          }
          if (0 < (int)uVar10) {
            lVar11 = 0;
            do {
              puVar1 = (undefined8 *)(lVar9 + lVar11);
              puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar11);
              lVar11 = lVar11 + 0x20;
              uVar13 = *puVar2;
              puVar1[1] = puVar2[1];
              *puVar1 = uVar13;
              puVar1[2] = puVar2[2];
              puVar1[3] = puVar2[3];
            } while ((ulong)uVar10 * 0x20 - lVar11 != 0);
          }
          if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSortedOverlappingPairCache)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          uVar10 = *(uint *)(this + 0xc);
          *(long *)(this + 0x18) = lVar9;
          *(uint *)(this + 0x10) = uVar5;
          this[0x20] = (btSortedOverlappingPairCache)0x1;
        }
      }
      ppbVar3 = (btBroadphaseProxy **)(*(long *)(this + 0x18) + lVar12 * 0x20);
      pbVar4 = param_2;
      pbVar6 = param_1;
      if (*(int *)(param_2 + 0x18) <= *(int *)(param_1 + 0x18)) {
        pbVar4 = param_1;
        pbVar6 = param_2;
      }
      *(uint *)(this + 0xc) = uVar10 + 1;
      ppbVar3[2] = (btBroadphaseProxy *)0x0;
      ppbVar3[3] = (btBroadphaseProxy *)0x0;
      *ppbVar3 = pbVar6;
      ppbVar3[1] = pbVar4;
      gOverlappingPairs = gOverlappingPairs + 1;
      plVar7 = *(long **)(this + 0x38);
      gAddedPairs = gAddedPairs + 1;
      if (plVar7 == (long *)0x0) {
        return ppbVar3;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
      return ppbVar3;
    }
  }
  return (btBroadphaseProxy **)0x0;
}


