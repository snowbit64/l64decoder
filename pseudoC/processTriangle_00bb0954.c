// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00bb0954
// Size: 1180 bytes
// Signature: undefined __thiscall processTriangle(Bt2SoftBodyHeightfieldTriangleCallback * this, btVector3 * param_1, int param_2, int param_3)


/* Bt2SoftBodyHeightfieldTriangleCallback::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
Bt2SoftBodyHeightfieldTriangleCallback::processTriangle
          (Bt2SoftBodyHeightfieldTriangleCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  btConvexHullShape **ppbVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  btConvexHullShape *this_00;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  btConvexHullShape *local_118;
  btConvexHullShape *pbStack_110;
  long local_108;
  long lStack_100;
  int local_f8;
  int iStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(long **)(*(long *)(this + 0x48) + 0x18) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x70))(), (uVar4 & 1) != 0))
  {
    lVar6 = *(long *)(this + 0x10);
    uVar9 = *(undefined4 *)param_1;
    fVar7 = *(float *)(param_1 + 4);
    uVar13 = *(undefined4 *)(param_1 + 8);
    uVar16 = *(undefined4 *)(param_1 + 0x10);
    fVar17 = *(float *)(param_1 + 0x14);
    uStack_e8 = 0;
    local_f0 = 0x3f8000003f800000;
    uVar10 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x28),fVar7 * *(float *)(lVar6 + 0x2c));
    fVar11 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x30),uVar10);
    uVar10 = NEON_fmadd(uVar16,*(undefined4 *)(lVar6 + 0x28),*(float *)(lVar6 + 0x2c) * fVar17);
    uVar12 = *(undefined4 *)(param_1 + 0x18);
    uVar15 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 8),fVar7 * *(float *)(lVar6 + 0xc));
    uVar9 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x18),fVar7 * *(float *)(lVar6 + 0x1c));
    fVar8 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x30),uVar10);
    fVar14 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x10),uVar15);
    uStack_88 = (ulong)(uint)(fVar11 + *(float *)(lVar6 + 0x40));
    fVar7 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x20),uVar9);
    uVar9 = NEON_fmadd(uVar16,*(undefined4 *)(lVar6 + 8),fVar17 * *(float *)(lVar6 + 0xc));
    uVar10 = NEON_fmadd(uVar16,*(undefined4 *)(lVar6 + 0x18),*(float *)(lVar6 + 0x1c) * fVar17);
    fVar17 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x10),uVar9);
    fVar11 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x20),uVar10);
    local_90 = CONCAT44(fVar7 + *(float *)(lVar6 + 0x3c),fVar14 + *(float *)(lVar6 + 0x38));
    pbStack_110 = (btConvexHullShape *)(ulong)(uint)(*(float *)(lVar6 + 0x40) + fVar8);
    local_118 = (btConvexHullShape *)
                CONCAT44(*(float *)(lVar6 + 0x3c) + fVar11,*(float *)(lVar6 + 0x38) + fVar17);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_90,&local_118,&local_f0);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    fVar7 = *(float *)(param_1 + 0x14);
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    uVar10 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x28),fVar7 * *(float *)(lVar6 + 0x2c));
    uVar18 = *(undefined4 *)(param_1 + 0x20);
    fVar14 = *(float *)(param_1 + 0x24);
    fVar8 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x30),uVar10);
    uVar15 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 8),fVar7 * *(float *)(lVar6 + 0xc));
    uVar9 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x18),fVar7 * *(float *)(lVar6 + 0x1c));
    uVar10 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 0x28),*(float *)(lVar6 + 0x2c) * fVar14);
    uVar16 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 0x18),*(float *)(lVar6 + 0x1c) * fVar14);
    uVar12 = *(undefined4 *)(param_1 + 0x28);
    fVar17 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x10),uVar15);
    fVar7 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x20),uVar9);
    uStack_88 = (ulong)(uint)(fVar8 + *(float *)(lVar6 + 0x40));
    fVar8 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x30),uVar10);
    fVar11 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x20),uVar16);
    uVar9 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 8),fVar14 * *(float *)(lVar6 + 0xc));
    pbStack_110 = (btConvexHullShape *)(ulong)(uint)(*(float *)(lVar6 + 0x40) + fVar8);
    fVar8 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x10),uVar9);
    local_90 = CONCAT44(fVar7 + *(float *)(lVar6 + 0x3c),fVar17 + *(float *)(lVar6 + 0x38));
    local_118 = (btConvexHullShape *)
                CONCAT44(*(float *)(lVar6 + 0x3c) + fVar11,*(float *)(lVar6 + 0x38) + fVar8);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_90,&local_118,&local_f0);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    fVar7 = *(float *)(param_1 + 0x24);
    uVar13 = *(undefined4 *)(param_1 + 0x28);
    uVar10 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x28),fVar7 * *(float *)(lVar6 + 0x2c));
    uVar18 = *(undefined4 *)param_1;
    fVar14 = *(float *)(param_1 + 4);
    fVar8 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x30),uVar10);
    uVar15 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 8),fVar7 * *(float *)(lVar6 + 0xc));
    uVar9 = NEON_fmadd(uVar9,*(undefined4 *)(lVar6 + 0x18),fVar7 * *(float *)(lVar6 + 0x1c));
    uVar10 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 0x28),*(float *)(lVar6 + 0x2c) * fVar14);
    uVar16 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 0x18),*(float *)(lVar6 + 0x1c) * fVar14);
    uVar12 = *(undefined4 *)(param_1 + 8);
    fVar17 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x10),uVar15);
    fVar7 = (float)NEON_fmadd(uVar13,*(undefined4 *)(lVar6 + 0x20),uVar9);
    uStack_88 = (ulong)(uint)(fVar8 + *(float *)(lVar6 + 0x40));
    fVar8 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x30),uVar10);
    fVar11 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x20),uVar16);
    uVar9 = NEON_fmadd(uVar18,*(undefined4 *)(lVar6 + 8),fVar14 * *(float *)(lVar6 + 0xc));
    pbStack_110 = (btConvexHullShape *)(ulong)(uint)(*(float *)(lVar6 + 0x40) + fVar8);
    fVar8 = (float)NEON_fmadd(uVar12,*(undefined4 *)(lVar6 + 0x10),uVar9);
    local_90 = CONCAT44(fVar7 + *(float *)(lVar6 + 0x3c),fVar17 + *(float *)(lVar6 + 0x38));
    local_118 = (btConvexHullShape *)
                CONCAT44(*(float *)(lVar6 + 0x3c) + fVar11,*(float *)(lVar6 + 0x38) + fVar8);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_90,&local_118,&local_f0);
  }
  uStack_88 = *(ulong *)(param_1 + 8);
  local_90 = *(undefined8 *)param_1;
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x20);
  iVar3 = btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
          ::findIndex((btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
                       *)(this + 0x58),(TriHashKey *)&local_90);
  if ((iVar3 == -1) || (*(long *)(this + 0xa8) == 0)) {
    uStack_e8 = *(undefined8 *)(param_1 + 8);
    lStack_d8 = *(long *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x28);
    local_f0._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    local_e0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    local_d0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar8 = local_f0._4_4_ + -0.06;
    fVar11 = local_e0._4_4_ + -0.06;
    local_f0._0_4_ = (undefined4)*(undefined8 *)param_1;
    local_f0 = CONCAT44(local_f0._4_4_ + 0.06,(undefined4)local_f0);
    fVar7 = local_d0._4_4_ + -0.06;
    local_e0._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x10);
    local_e0 = CONCAT44(local_e0._4_4_ + 0.06,(undefined4)local_e0);
    local_d0._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x20);
    local_d0 = CONCAT44(local_d0._4_4_ + 0.06,(undefined4)local_d0);
    uStack_c0 = CONCAT44(fVar8,(undefined4)local_f0);
    local_b0 = CONCAT44(fVar11,(undefined4)local_e0);
    uStack_a0 = CONCAT44(fVar7,(undefined4)local_d0);
    uStack_b8 = uStack_e8;
    uStack_a8 = lStack_d8;
    uStack_98 = uStack_c8;
    this_00 = (btConvexHullShape *)btAlignedAllocInternal(0x98,0x10);
                    /* try { // try from 00bb0cf8 to 00bb0d07 has its CatchHandler @ 00bb0df0 */
    btConvexHullShape::btConvexHullShape(this_00,(float *)&local_f0,6,0x10);
    pbStack_110 = *(btConvexHullShape **)(this + 0xd8);
    local_118 = this_00;
    btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
    ::insert((btHashMap<Bt2SoftBodyHeightfieldTriangleCallback::TriHashKey,Bt2SoftBodyHeightfieldTriangleCallback::TriHashValue>
              *)(this + 0x58),(TriHashKey *)&local_90,(TriHashValue *)&local_118);
  }
  else {
    ppbVar1 = (btConvexHullShape **)(*(long *)(this + 0xa8) + (long)iVar3 * 0x10);
    this_00 = *ppbVar1;
    ppbVar1[1] = *(btConvexHullShape **)(this + 0xd8);
  }
  local_108 = *(long *)(this + 0x10);
  local_118 = (btConvexHullShape *)0x0;
  lStack_100 = local_108 + 8;
  *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(*(long *)(local_108 + 200) + 0x10);
  local_e0 = *(long *)(this + 8);
  local_d0 = 0xffffffffffffffff;
  uStack_e8 = *(undefined8 *)(local_e0 + 200);
  lStack_d8 = local_e0 + 8;
  local_f0 = 0;
  pbStack_110 = this_00;
  local_f8 = param_2;
  iStack_f4 = param_3;
  plVar5 = (long *)(**(code **)(**(long **)(this + 0x40) + 0x10))
                             (*(long **)(this + 0x40),&local_f0,&local_118,0);
  (**(code **)(*plVar5 + 0x10))
            (plVar5,&local_f0,&local_118,*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x38));
  (**(code **)*plVar5)(plVar5);
  (**(code **)(**(long **)(this + 0x40) + 0x78))(*(long **)(this + 0x40),plVar5);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


