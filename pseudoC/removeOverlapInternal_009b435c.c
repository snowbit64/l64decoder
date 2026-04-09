// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlapInternal
// Entry Point: 009b435c
// Size: 552 bytes
// Signature: undefined __thiscall removeOverlapInternal(Bt2PhysicsOverlapCallback * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* Bt2PhysicsOverlapCallback::removeOverlapInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void __thiscall
Bt2PhysicsOverlapCallback::removeOverlapInternal
          (Bt2PhysicsOverlapCallback *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  btBroadphaseProxy **ppbVar8;
  long lVar9;
  btBroadphaseProxy **ppbVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  btBroadphaseProxy *pbVar18;
  btBroadphaseProxy *pbVar19;
  
  uVar12 = *(uint *)(param_1 + 0x18) | *(int *)(param_2 + 0x18) << 0x10;
  uVar12 = uVar12 + (uVar12 << 0xf ^ 0xffffffff);
  uVar12 = (uVar12 ^ uVar12 >> 10) * 9;
  uVar12 = uVar12 ^ uVar12 >> 6;
  uVar12 = uVar12 + (uVar12 << 0xb ^ 0xffffffff);
  lVar11 = *(long *)(this + 0x38);
  uVar14 = (ulong)((uVar12 ^ uVar12 >> 0x10) & *(int *)(this + 0x10) - 1U);
  uVar12 = *(uint *)(lVar11 + uVar14 * 4);
  if (uVar12 == 0xffffffff) {
    return;
  }
  lVar9 = *(long *)(this + 0x18);
  uVar15 = 0xffffffff;
  while( true ) {
    uVar7 = (ulong)uVar12;
    lVar13 = (long)(int)uVar12;
    if ((*(uint *)(*(long *)(lVar9 + (-(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | uVar7 << 5)) +
                  0x18) == *(uint *)(param_1 + 0x18)) &&
       (lVar1 = lVar9 + lVar13 * 0x20,
       *(int *)(*(long *)(lVar1 + 8) + 0x18) == *(int *)(param_2 + 0x18))) break;
    uVar12 = *(uint *)(lVar9 + lVar13 * 0x20 + 0x18);
    uVar15 = uVar7;
    if (uVar12 == 0xffffffff) {
      return;
    }
  }
  uVar4 = *(undefined4 *)(lVar1 + 0x18);
  if ((int)uVar15 == -1) {
    *(undefined4 *)(lVar11 + uVar14 * 4) = uVar4;
  }
  else {
    *(undefined4 *)(lVar9 + (long)(int)uVar15 * 0x20 + 0x18) = uVar4;
  }
  uVar6 = *(int *)(this + 0xc) - 1;
  if (uVar6 == uVar12) goto LAB_009b44f4;
  plVar2 = (long *)(lVar9 + (long)(int)uVar6 * 0x20);
  uVar5 = *(uint *)(*plVar2 + 0x18) | *(int *)(plVar2[1] + 0x18) << 0x10;
  uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
  uVar5 = (uVar5 ^ uVar5 >> 10) * 9;
  uVar5 = uVar5 ^ uVar5 >> 6;
  uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
  uVar14 = (ulong)((uVar5 ^ uVar5 >> 0x10) & *(int *)(this + 0x10) - 1U);
  uVar5 = *(uint *)(lVar11 + uVar14 * 4);
  if (uVar5 == uVar6) {
LAB_009b44b0:
    *(undefined4 *)(lVar11 + uVar14 * 4) = *(undefined4 *)(plVar2 + 3);
  }
  else {
    do {
      uVar16 = uVar5;
      uVar5 = *(uint *)(*(long *)(this + 0x18) + (long)(int)uVar16 * 0x20 + 0x18);
    } while (uVar5 != uVar6);
    if (uVar16 == 0xffffffff) goto LAB_009b44b0;
    *(undefined4 *)(lVar9 + (long)(int)uVar16 * 0x20 + 0x18) =
         *(undefined4 *)(lVar9 + (long)(int)uVar6 * 0x20 + 0x18);
  }
  uVar17 = *(undefined8 *)((long)plVar2 + 0xc);
  plVar3 = (long *)(lVar9 + lVar13 * 0x20);
  lVar9 = plVar2[1];
  lVar11 = *plVar2;
  *(undefined8 *)((long)plVar3 + 0x14) = *(undefined8 *)((long)plVar2 + 0x14);
  *(undefined8 *)((long)plVar3 + 0xc) = uVar17;
  plVar3[1] = lVar9;
  *plVar3 = lVar11;
  lVar11 = *(long *)(this + 0x38);
  *(undefined4 *)(*(long *)(this + 0x18) + lVar13 * 0x20 + 0x18) =
       *(undefined4 *)(lVar11 + uVar14 * 4);
  *(uint *)(lVar11 + uVar14 * 4) = uVar12;
  uVar12 = *(int *)(this + 0xc) - 1;
LAB_009b44f4:
  lVar11 = *(long *)param_1;
  *(uint *)(this + 0xc) = uVar12;
  if (((*(byte *)(*(long *)(lVar11 + 0x108) + 1) & 1) == 0) &&
     ((*(byte *)(*(long *)(*(long *)param_2 + 0x108) + 1) & 1) == 0)) {
    return;
  }
  uVar12 = *(uint *)(this + 0x30);
  if (uVar12 != 0) {
    uVar14 = 0;
    ppbVar10 = *(btBroadphaseProxy ***)(this + 0x28);
    do {
      if ((*ppbVar10 == param_1) && (ppbVar10[1] == param_2)) {
        uVar12 = uVar12 - 1;
        *(uint *)(this + 0x30) = uVar12;
        if ((uint)uVar14 < uVar12) {
          ppbVar8 = *(btBroadphaseProxy ***)(this + 0x28) + (ulong)uVar12 * 3;
          pbVar19 = ppbVar8[1];
          pbVar18 = *ppbVar8;
          ppbVar10[2] = ppbVar8[2];
          ppbVar10[1] = pbVar19;
          *ppbVar10 = pbVar18;
          return;
        }
        return;
      }
      uVar14 = uVar14 + 1;
      ppbVar10 = ppbVar10 + 3;
    } while (uVar12 != uVar14);
  }
  return;
}


