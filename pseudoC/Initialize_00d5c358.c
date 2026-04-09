// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00d5c358
// Size: 564 bytes
// Signature: undefined __thiscall Initialize(RaycastMesh * this, ulong param_1, ulong param_2, Vec3 * param_3, Vec3 * param_4, ulong param_5, ulong param_6, double param_7)


/* HACD::RaycastMesh::Initialize(unsigned long, unsigned long, HACD::Vec3<double>*,
   HACD::Vec3<long>*, unsigned long, unsigned long, double) */

void __thiscall
HACD::RaycastMesh::Initialize
          (RaycastMesh *this,ulong param_1,ulong param_2,Vec3 *param_3,Vec3 *param_4,ulong param_5,
          ulong param_6,double param_7)

{
  ulong *puVar1;
  undefined auVar2 [16];
  void *pvVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *this_00;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  
  lVar6 = *(long *)(this + 0x20);
  *(Vec3 **)this = param_4;
  *(Vec3 **)(this + 8) = param_3;
  *(ulong *)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + -8);
    if (lVar9 != 0) {
      lVar9 = lVar9 * 0xf0;
      do {
        pvVar3 = *(void **)(lVar6 + -0x28 + lVar9);
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
        }
        lVar9 = lVar9 + -0xf0;
      } while (lVar9 != 0);
    }
    operator_delete__((long *)(lVar6 + -8));
  }
  lVar6 = (long)(1 << (ulong)((uint)param_5 & 0x1f));
  uVar10 = lVar6 * param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  *(ulong *)(this + 0x60) = uVar10;
  uVar7 = uVar10 * 0xf0 | 8;
  if (SUB168(auVar2 * ZEXT816(0xf0),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  puVar4 = (ulong *)operator_new__(uVar7);
  this_00 = puVar4 + 1;
  *puVar4 = uVar10;
  if (uVar10 == 0) {
    *(ulong **)(this + 0x20) = this_00;
    *(undefined8 *)(this + 0x58) = 1;
    lVar6 = *(long *)(this + 0x18);
  }
  else {
    lVar6 = param_5 * lVar6 * 0xf0;
    puVar5 = puVar4;
    do {
      lVar6 = lVar6 + -0xf0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[2] = 0xffffffffffffffff;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[0x1c] = 0x10;
      puVar5[0x1d] = 0;
      *(undefined *)(puVar5 + 0x1e) = 0;
      puVar5 = puVar5 + 0x1e;
    } while (lVar6 != 0);
    uVar7 = puVar4[0x1c];
    *(ulong **)(this + 0x20) = this_00;
    *(undefined8 *)(this + 0x58) = 1;
    if (uVar7 < param_2) {
      uVar10 = param_2 << 3;
      if (param_2 >> 0x3d != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new__(uVar10);
      puVar1 = (ulong *)puVar4[0x1a];
      puVar5 = puVar4 + 10;
      if (uVar7 != 0x10) {
        puVar5 = puVar1;
      }
      memcpy(pvVar3,puVar5,puVar4[0x1b] << 3);
      if (puVar1 != (ulong *)0x0) {
        operator_delete__(puVar1);
      }
      puVar4[0x1a] = (ulong)pvVar3;
      puVar4[0x1c] = param_2;
    }
    lVar6 = *(long *)(this + 0x18);
  }
  if (lVar6 != 0) {
    uVar7 = 0;
    do {
      uVar10 = puVar4[0x1b];
      uVar12 = puVar4[0x1c];
      if (uVar10 == uVar12) {
        uVar12 = uVar10 << 1;
        uVar8 = uVar10 << 4;
        if (uVar12 >> 0x3d != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        puVar5 = (ulong *)operator_new__(uVar8);
        puVar11 = (ulong *)puVar4[0x1a];
        puVar1 = puVar4 + 10;
        if (uVar10 != 0x10) {
          puVar1 = puVar11;
        }
        memcpy(puVar5,puVar1,uVar10 << 3);
        if (puVar11 != (ulong *)0x0) {
          operator_delete__(puVar11);
          uVar10 = puVar4[0x1b];
        }
        puVar4[0x1a] = (ulong)puVar5;
        puVar4[0x1c] = uVar12;
      }
      else {
        puVar5 = (ulong *)puVar4[0x1a];
      }
      puVar1 = puVar4 + 10;
      if (uVar12 != 0x10) {
        puVar1 = puVar5;
      }
      puVar4[0x1b] = uVar10 + 1;
      puVar1[uVar10] = uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulong *)(this + 0x18));
  }
  puVar4[0x1d] = (ulong)this;
  puVar4[1] = 0;
  RMNode::Create((RMNode *)this_00,0,param_5,param_6,param_7);
  return;
}


