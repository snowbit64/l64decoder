// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOverlapInternal
// Entry Point: 009b4094
// Size: 472 bytes
// Signature: undefined __thiscall addOverlapInternal(Bt2PhysicsOverlapCallback * this, btBroadphaseProxy * param_1, btBroadphaseProxy * param_2)


/* Bt2PhysicsOverlapCallback::addOverlapInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void __thiscall
Bt2PhysicsOverlapCallback::addOverlapInternal
          (Bt2PhysicsOverlapCallback *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  btBroadphaseProxy **ppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)(this + 0x10);
  lVar11 = *(long *)(this + 0x18);
  uVar8 = *(uint *)(param_1 + 0x18) | *(int *)(param_2 + 0x18) << 0x10;
  uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff);
  uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
  uVar8 = uVar8 ^ uVar8 >> 6;
  uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
  uVar8 = uVar8 ^ uVar8 >> 0x10;
  uVar12 = (ulong)(uVar8 & uVar4 - 1);
  for (uVar5 = *(uint *)(*(long *)(this + 0x38) + uVar12 * 4); uVar5 != 0xffffffff;
      uVar5 = *(uint *)(lVar11 + (long)(int)uVar5 * 0x20 + 0x18)) {
    if ((*(uint *)(*(long *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 |
                                      (ulong)uVar5 << 5)) + 0x18) == *(uint *)(param_1 + 0x18)) &&
       (*(int *)(*(long *)(lVar11 + (long)(int)uVar5 * 0x20 + 8) + 0x18) == *(int *)(param_2 + 0x18)
       )) {
      return;
    }
  }
  uVar5 = *(uint *)(this + 0xc);
  uVar9 = uVar5;
  if (uVar5 == uVar4) {
    uVar7 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar7 = 1;
    }
    uVar9 = uVar4;
    if ((int)uVar4 < (int)uVar7) {
      if (uVar7 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = btAlignedAllocInternal
                           (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5,0x10);
        uVar9 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar9) {
        lVar10 = 0;
        do {
          puVar2 = (undefined8 *)(lVar11 + lVar10);
          puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar10);
          lVar10 = lVar10 + 0x20;
          uVar15 = *puVar3;
          uVar14 = puVar3[3];
          uVar13 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar15;
          puVar2[3] = uVar14;
          puVar2[2] = uVar13;
        } while ((ulong)uVar9 * 0x20 - lVar10 != 0);
      }
      if ((*(void **)(this + 0x18) != (void *)0x0) && (this[0x20] != (Bt2PhysicsOverlapCallback)0x0)
         ) {
        btAlignedFreeInternal(*(void **)(this + 0x18));
      }
      *(long *)(this + 0x18) = lVar11;
      this[0x20] = (Bt2PhysicsOverlapCallback)0x1;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0x10) = uVar7;
      if (uVar4 < uVar7) {
        growHashTable(this,uVar4,uVar5);
        uVar12 = (ulong)(*(int *)(this + 0x10) - 1U & uVar8);
      }
      goto LAB_009b41a0;
    }
  }
  *(uint *)(this + 0xc) = uVar9 + 1;
LAB_009b41a0:
  lVar10 = *(long *)(this + 0x38);
  ppbVar1 = (btBroadphaseProxy **)(lVar11 + (long)(int)uVar5 * 0x20);
  uVar6 = *(undefined4 *)(lVar10 + uVar12 * 4);
  *ppbVar1 = param_1;
  ppbVar1[1] = param_2;
  ppbVar1[2] = (btBroadphaseProxy *)0x0;
  *(undefined4 *)(ppbVar1 + 3) = uVar6;
  *(uint *)(lVar10 + uVar12 * 4) = uVar5;
  return;
}


