// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlappingPair
// Entry Point: 00f46568
// Size: 600 bytes
// Signature: undefined __thiscall removeOverlappingPair(btHashedOverlappingPairCache * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2, btDispatcher * param_3)


/* btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*,
   btDispatcher*) */

undefined8 __thiscall
btHashedOverlappingPairCache::removeOverlappingPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  long *plVar1;
  int *piVar2;
  btBroadphaseProxy *pbVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  pbVar3 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar3 = param_2;
    param_2 = param_1;
  }
  uVar4 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar3 + 0x18) << 0x10;
  uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
  uVar4 = (uVar4 ^ (int)uVar4 >> 10) * 9;
  uVar4 = uVar4 ^ (int)uVar4 >> 6;
  uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
  gRemovePairs = gRemovePairs + 1;
  uVar4 = (uVar4 ^ (int)uVar4 >> 0x10) & *(int *)(this + 0x10) - 1U;
  iVar13 = *(int *)(*(long *)(this + 0x40) + (long)(int)uVar4 * 4);
  if (iVar13 != -1) {
    lVar12 = *(long *)(this + 0x18);
    do {
      lVar14 = (long)iVar13;
      plVar1 = (long *)(lVar12 + lVar14 * 0x20);
      if ((*(uint *)(*plVar1 + 0x18) == *(uint *)(param_2 + 0x18)) &&
         (*(int *)(plVar1[1] + 0x18) == *(int *)(pbVar3 + 0x18))) {
        (**(code **)(*(long *)this + 0x40))(this,plVar1,param_3);
        lVar6 = *(long *)(this + 0x18);
        piVar2 = (int *)(*(long *)(this + 0x40) + (long)(int)uVar4 * 4);
        iVar13 = *piVar2;
        iVar11 = (int)((ulong)((long)plVar1 - lVar6) >> 5);
        if (iVar13 != iVar11) goto LAB_00f46680;
        goto LAB_00f4669c;
      }
      iVar13 = *(int *)(*(long *)(this + 0x60) + lVar14 * 4);
    } while (iVar13 != -1);
  }
  return 0;
LAB_00f46680:
  do {
    iVar8 = iVar13;
    piVar7 = (int *)(*(long *)(this + 0x60) + (long)iVar8 * 4);
    iVar13 = *piVar7;
  } while (iVar13 != iVar11);
  if (iVar8 == -1) {
LAB_00f4669c:
    piVar7 = piVar2;
  }
  uVar10 = *(undefined8 *)(lVar12 + lVar14 * 0x20 + 0x18);
  plVar5 = *(long **)(this + 0x70);
  *piVar7 = *(int *)(*(long *)(this + 0x60) + (long)iVar11 * 4);
  lVar12 = (long)*(int *)(this + 0xc) + -1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,pbVar3,param_3);
  }
  iVar13 = (int)lVar12;
  if (iVar13 == iVar11) goto LAB_00f46790;
  plVar5 = (long *)(*(long *)(this + 0x18) + lVar12 * 0x20);
  uVar4 = *(uint *)(*plVar5 + 0x18) | *(int *)(plVar5[1] + 0x18) << 0x10;
  uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
  uVar4 = (uVar4 ^ (int)uVar4 >> 10) * 9;
  uVar4 = uVar4 ^ (int)uVar4 >> 6;
  uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
  uVar4 = (uVar4 ^ (int)uVar4 >> 0x10) & *(int *)(this + 0x10) - 1U;
  piVar2 = (int *)(*(long *)(this + 0x40) + (long)(int)uVar4 * 4);
  iVar8 = *piVar2;
  if (iVar8 == iVar13) {
LAB_00f4675c:
    piVar7 = piVar2;
  }
  else {
    do {
      iVar9 = iVar8;
      piVar7 = (int *)(*(long *)(this + 0x60) + (long)iVar9 * 4);
      iVar8 = *piVar7;
    } while (iVar8 != iVar13);
    if (iVar9 == -1) goto LAB_00f4675c;
  }
  plVar1 = (long *)(*(long *)(this + 0x18) + (((long)plVar1 - lVar6) * 0x8000000 >> 0x20) * 0x20);
  *piVar7 = *(int *)(*(long *)(this + 0x60) + lVar12 * 4);
  lVar15 = *plVar5;
  lVar6 = plVar5[3];
  lVar14 = plVar5[2];
  lVar12 = (long)(int)uVar4 * 4;
  plVar1[1] = plVar5[1];
  *plVar1 = lVar15;
  plVar1[3] = lVar6;
  plVar1[2] = lVar14;
  lVar14 = *(long *)(this + 0x40);
  *(undefined4 *)(*(long *)(this + 0x60) + (long)iVar11 * 4) = *(undefined4 *)(lVar14 + lVar12);
  *(int *)(lVar14 + lVar12) = iVar11;
LAB_00f46790:
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  return uVar10;
}


