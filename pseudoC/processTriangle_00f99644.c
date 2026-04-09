// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f99644
// Size: 1536 bytes
// Signature: undefined __thiscall processTriangle(btSoftBodyTriangleCallback * this, btVector3 * param_1, int param_2, int param_3)


/* btSoftBodyTriangleCallback::processTriangle(btVector3*, int, int) */

undefined8 __thiscall
btSoftBodyTriangleCallback::processTriangle
          (btSoftBodyTriangleCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  btConvexHullShape *this_00;
  int iVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  uint local_120 [2];
  uint local_118 [2];
  btConvexHullShape *local_110;
  undefined8 local_108;
  btConvexHullShape *pbStack_100;
  long local_f8;
  long lStack_f0;
  int local_e8;
  int iStack_e4;
  undefined8 local_e0;
  ulong uStack_d8;
  long local_d0;
  ulong local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  undefined8 local_80;
  ulong local_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(this + 0x40);
  if (((*(long *)(this + 0x48) != 0) &&
      (plVar3 = *(long **)(*(long *)(this + 0x48) + 0x18), plVar3 != (long *)0x0)) &&
     (uVar4 = (**(code **)(*plVar3 + 0x70))(), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(this + 0x10);
    fVar8 = *(float *)param_1;
    uVar9 = *(undefined4 *)(param_1 + 4);
    uVar14 = *(undefined4 *)(param_1 + 8);
    uStack_d8 = 0;
    local_e0 = 0x3f8000003f800000;
    uVar11 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x2c),uVar9,*(float *)(lVar6 + 0x28) * fVar8);
    uVar19 = *(undefined4 *)(param_1 + 0x10);
    uVar20 = *(undefined4 *)(param_1 + 0x14);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x30),uVar14,uVar11);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar9,*(float *)(lVar6 + 8) * fVar8);
    uVar11 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x1c),uVar9,*(float *)(lVar6 + 0x18) * fVar8);
    uVar9 = NEON_fmadd(uVar19,*(float *)(lVar6 + 0x28),*(float *)(lVar6 + 0x40));
    fVar18 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x10),uVar14,uVar17);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x20),uVar14,uVar11);
    uVar9 = NEON_fmadd(uVar20,*(undefined4 *)(lVar6 + 0x2c),uVar9);
    uVar11 = *(undefined4 *)(param_1 + 0x18);
    local_78 = (ulong)(uint)(fVar12 + *(float *)(lVar6 + 0x40));
    uVar7 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x30),uVar9);
    uVar9 = NEON_fmadd(*(undefined4 *)(lVar6 + 8),uVar19,*(float *)(lVar6 + 0x38));
    uVar14 = NEON_fmadd(uVar19,*(float *)(lVar6 + 0x18),*(float *)(lVar6 + 0x3c));
    local_80 = CONCAT44(fVar8 + *(float *)(lVar6 + 0x3c),fVar18 + *(float *)(lVar6 + 0x38));
    uVar9 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar20,uVar9);
    uVar14 = NEON_fmadd(uVar20,*(undefined4 *)(lVar6 + 0x1c),uVar14);
    uVar9 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x10),uVar9);
    uVar11 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x20),uVar14);
    pbStack_100 = (btConvexHullShape *)(ulong)uVar7;
    local_108 = CONCAT44(uVar11,uVar9);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_80,&local_108,&local_e0);
    fVar8 = *(float *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    uVar19 = *(undefined4 *)(param_1 + 0x18);
    uVar11 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x2c),uVar9,*(float *)(lVar6 + 0x28) * fVar8);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x30),uVar19,uVar11);
    uVar20 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar9,*(float *)(lVar6 + 8) * fVar8);
    uVar9 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x1c),uVar9,*(float *)(lVar6 + 0x18) * fVar8);
    uVar17 = *(undefined4 *)(param_1 + 0x20);
    uVar11 = *(undefined4 *)(param_1 + 0x24);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x20),uVar19,uVar9);
    uVar9 = NEON_fmadd(uVar17,*(float *)(lVar6 + 0x28),*(float *)(lVar6 + 0x40));
    uVar23 = NEON_fmadd(uVar17,*(float *)(lVar6 + 0x18),*(float *)(lVar6 + 0x3c));
    local_78 = (ulong)(uint)(fVar12 + *(float *)(lVar6 + 0x40));
    uVar9 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x2c),uVar9);
    uVar14 = *(undefined4 *)(param_1 + 0x28);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar6 + 8),uVar17,*(float *)(lVar6 + 0x38));
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x10),uVar19,uVar20);
    uVar7 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x30),uVar9);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar11,uVar17);
    uVar9 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x1c),uVar23);
    uVar11 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x10),uVar17);
    uVar9 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x20),uVar9);
    local_80 = CONCAT44(fVar8 + *(float *)(lVar6 + 0x3c),fVar12 + *(float *)(lVar6 + 0x38));
    pbStack_100 = (btConvexHullShape *)(ulong)uVar7;
    local_108 = CONCAT44(uVar9,uVar11);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_80,&local_108,&local_e0);
    fVar8 = *(float *)(param_1 + 0x20);
    uVar9 = *(undefined4 *)(param_1 + 0x24);
    uVar19 = *(undefined4 *)(param_1 + 0x28);
    uVar11 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x2c),uVar9,*(float *)(lVar6 + 0x28) * fVar8);
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x30),uVar19,uVar11);
    uVar20 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar9,*(float *)(lVar6 + 8) * fVar8);
    uVar9 = NEON_fmadd(*(undefined4 *)(lVar6 + 0x1c),uVar9,*(float *)(lVar6 + 0x18) * fVar8);
    uVar17 = *(undefined4 *)param_1;
    uVar11 = *(undefined4 *)(param_1 + 4);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x20),uVar19,uVar9);
    uVar9 = NEON_fmadd(uVar17,*(float *)(lVar6 + 0x28),*(float *)(lVar6 + 0x40));
    uVar23 = NEON_fmadd(uVar17,*(float *)(lVar6 + 0x18),*(float *)(lVar6 + 0x3c));
    local_78 = (ulong)(uint)(fVar12 + *(float *)(lVar6 + 0x40));
    uVar9 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x2c),uVar9);
    uVar14 = *(undefined4 *)(param_1 + 8);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar6 + 8),uVar17,*(float *)(lVar6 + 0x38));
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x10),uVar19,uVar20);
    uVar7 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x30),uVar9);
    uVar17 = NEON_fmadd(*(undefined4 *)(lVar6 + 0xc),uVar11,uVar17);
    uVar9 = NEON_fmadd(uVar11,*(undefined4 *)(lVar6 + 0x1c),uVar23);
    uVar11 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x10),uVar17);
    uVar9 = NEON_fmadd(uVar14,*(undefined4 *)(lVar6 + 0x20),uVar9);
    local_80 = CONCAT44(fVar8 + *(float *)(lVar6 + 0x3c),fVar12 + *(float *)(lVar6 + 0x38));
    pbStack_100 = (btConvexHullShape *)(ulong)uVar7;
    local_108 = CONCAT44(uVar9,uVar11);
    (**(code **)(**(long **)(*(long *)(this + 0x48) + 0x18) + 0x20))
              (*(long **)(*(long *)(this + 0x48) + 0x18),&local_80,&local_108,&local_e0);
  }
  local_120[0] = param_3 | param_2 << 0x15;
  uVar7 = local_120[0] + (param_3 << 0xf ^ 0xffffffffU);
  uVar7 = (uVar7 ^ (int)uVar7 >> 10) * 9;
  uVar7 = uVar7 ^ (int)uVar7 >> 6;
  uVar7 = uVar7 + (uVar7 << 0xb ^ 0xffffffff);
  uVar7 = *(int *)(this + 0xa0) - 1U & (uVar7 ^ (int)uVar7 >> 0x10);
  local_118[0] = local_120[0];
  if ((uVar7 < *(uint *)(this + 0x5c)) &&
     (iVar5 = *(int *)(*(long *)(this + 0x68) + (long)(int)uVar7 * 4), iVar5 != -1)) {
    do {
      if (local_120[0] == *(uint *)(*(long *)(this + 200) + (long)iVar5 * 4)) {
        if (*(long *)(this + 0xa8) != 0) {
          local_70 = *(long *)(this + 0x10);
          lStack_68 = local_70 + 8;
          local_78 = *(long *)(*(long *)(this + 0xa8) + (long)iVar5 * 0x10 + 8);
          local_80 = 0;
          *(undefined8 *)(local_78 + 0x10) = *(undefined8 *)(*(long *)(local_70 + 200) + 0x10);
          local_d0 = *(long *)(this + 8);
          local_c0 = 0xffffffffffffffff;
          local_60 = CONCAT44(param_3,param_2);
          uStack_d8 = *(ulong *)(local_d0 + 200);
          local_c8 = local_d0 + 8;
          local_e0 = 0;
          plVar3 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_e0,&local_80,0);
          (**(code **)(*plVar3 + 0x10))
                    (plVar3,&local_e0,&local_80,*(undefined8 *)(this + 0x48),
                     *(undefined8 *)(this + 0x38));
          (**(code **)*plVar3)(plVar3);
          (**(code **)(*plVar1 + 0x78))(plVar1,plVar3);
          goto LAB_00f99c10;
        }
        break;
      }
      iVar5 = *(int *)(*(long *)(this + 0x88) + (long)iVar5 * 4);
    } while (iVar5 != -1);
  }
  fVar8 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x14);
  fVar13 = *(float *)param_1;
  fVar18 = *(float *)(param_1 + 4);
  fVar10 = *(float *)(param_1 + 0x20);
  fVar15 = *(float *)(param_1 + 0x24);
  fVar16 = *(float *)(param_1 + 0x18);
  local_a8 = *(float *)(param_1 + 8);
  local_88 = *(float *)(param_1 + 0x28);
  fVar25 = (float)NEON_fnmsub(fVar15 - fVar18,fVar8 - fVar13,(fVar10 - fVar13) * (fVar12 - fVar18));
  fVar21 = (float)NEON_fnmsub(local_88 - local_a8,fVar12 - fVar18,
                              (fVar15 - fVar18) * (fVar16 - local_a8));
  fVar22 = (float)NEON_fnmsub(fVar10 - fVar13,fVar16 - local_a8,
                              (local_88 - local_a8) * (fVar8 - fVar13));
  uVar9 = NEON_fmadd(fVar21,fVar21,fVar25 * fVar25);
  local_b4 = 0;
  fVar24 = (float)NEON_fmadd(fVar22,fVar22,uVar9);
  local_a4 = 0;
  local_94 = 0;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  local_84 = 0;
  fVar24 = 0.06 / SQRT(fVar24);
  fVar21 = fVar24 * fVar21;
  fVar22 = fVar24 * fVar22;
  fVar24 = fVar24 * fVar25;
  local_b0 = fVar13 - fVar21;
  fStack_ac = fVar18 - fVar22;
  local_a0 = fVar8 - fVar21;
  fStack_9c = fVar12 - fVar22;
  local_e0 = CONCAT44(fVar22 + fVar18,fVar21 + fVar13);
  uStack_d8 = (ulong)(uint)(fVar24 + local_a8);
  local_d0 = CONCAT44(fVar22 + fVar12,fVar21 + fVar8);
  local_b8 = fVar24 + local_88;
  local_a8 = local_a8 - fVar24;
  local_98 = fVar16 - fVar24;
  local_90 = fVar10 - fVar21;
  fStack_8c = fVar15 - fVar22;
  local_88 = local_88 - fVar24;
  local_c8 = (ulong)(uint)(fVar24 + fVar16);
  local_c0 = CONCAT44(fVar22 + fVar15,fVar21 + fVar10);
  this_00 = (btConvexHullShape *)(*(code *)PTR_FUN_01048e38)(0x98,0x10);
  btConvexHullShape::btConvexHullShape(this_00,(float *)&local_e0,6,0x10);
  local_f8 = *(long *)(this + 0x10);
  local_108 = 0;
  lStack_f0 = local_f8 + 8;
  *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(*(long *)(local_f8 + 200) + 0x10);
  local_70 = *(long *)(this + 8);
  local_60 = 0xffffffffffffffff;
  local_78 = *(long *)(local_70 + 200);
  lStack_68 = local_70 + 8;
  local_80 = 0;
  pbStack_100 = this_00;
  local_e8 = param_2;
  iStack_e4 = param_3;
  plVar3 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1,&local_80,&local_108,0);
  (**(code **)(*plVar3 + 0x10))
            (plVar3,&local_80,&local_108,*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x38));
  (**(code **)*plVar3)(plVar3);
  (**(code **)(*plVar1 + 0x78))(plVar1,plVar3);
  local_110 = this_00;
  btHashMap<btHashKey<btTriIndex>,btTriIndex>::insert
            ((btHashMap<btHashKey<btTriIndex>,btTriIndex> *)(this + 0x58),(btHashKey *)local_120,
             (btTriIndex *)local_118);
LAB_00f99c10:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


