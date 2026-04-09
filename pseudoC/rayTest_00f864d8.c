// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f864d8
// Size: 1048 bytes
// Signature: undefined __thiscall rayTest(btSoftBody * this, btVector3 * param_1, btVector3 * param_2, float * param_3, _ * param_4, int * param_5, bool param_6)


/* btSoftBody::rayTest(btVector3 const&, btVector3 const&, float&, btSoftBody::eFeature::_&, int&,
   bool) const */

int __thiscall
btSoftBody::rayTest(btSoftBody *this,btVector3 *param_1,btVector3 *param_2,float *param_3,_ *param_4
                   ,int *param_5,bool param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  float local_98;
  undefined4 local_94;
  float local_90;
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6c = 0;
  local_78 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_1);
  local_70 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  if (param_6) {
    uVar1 = *(uint *)(this + 0x3b4);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      iVar10 = 0;
      do {
        lVar5 = *(long *)(this + 0x3c0) + lVar8;
        fVar11 = (float)RayFromToCaster::rayFromToTriangle
                                  (param_1,param_2,(btVector3 *)&local_78,
                                   (btVector3 *)(*(long *)(lVar5 + 0x10) + 0x10),
                                   (btVector3 *)(*(long *)(lVar5 + 0x18) + 0x10),
                                   (btVector3 *)(*(long *)(lVar5 + 0x20) + 0x10),*param_3);
        lVar8 = lVar8 + 0x48;
        if (0.0 < fVar11) {
          iVar10 = iVar10 + 1;
        }
      } while ((ulong)uVar1 * 0x48 - lVar8 != 0);
      goto LAB_00f866c4;
    }
  }
  else if (*(btDbvtNode **)(this + 0x518) == (btDbvtNode *)0x0) {
    uVar1 = *(uint *)(this + 0x3b4);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      uVar9 = 0;
      iVar10 = 0;
      do {
        lVar5 = *(long *)(this + 0x3c0) + lVar8;
        fVar11 = (float)RayFromToCaster::rayFromToTriangle
                                  (param_1,param_2,(btVector3 *)&local_78,
                                   (btVector3 *)(*(long *)(lVar5 + 0x10) + 0x10),
                                   (btVector3 *)(*(long *)(lVar5 + 0x18) + 0x10),
                                   (btVector3 *)(*(long *)(lVar5 + 0x20) + 0x10),*param_3);
        if (0.0 < fVar11) {
          iVar10 = iVar10 + 1;
          *(undefined4 *)param_4 = 3;
          *param_5 = (int)uVar9;
          *param_3 = fVar11;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x48;
      } while (uVar1 != uVar9);
      goto LAB_00f866c4;
    }
  }
  else {
    uStack_b8 = *(undefined8 *)(param_1 + 8);
    local_c0 = *(undefined8 *)param_1;
    uStack_a8 = *(undefined8 *)(param_2 + 8);
    uStack_b0 = *(undefined8 *)param_2;
    local_94 = 0;
    local_90 = *param_3;
    local_c8 = &PTR__ICollide_0101b718;
    local_88 = 0;
    local_80 = 0;
    local_a0 = local_78;
    local_98 = local_70;
    btDbvt::rayTest(*(btDbvtNode **)(this + 0x518),param_1,param_2,(ICollide *)&local_c8);
    if (local_88 != 0) {
      iVar10 = 1;
      *param_3 = local_90;
      *(undefined4 *)param_4 = 3;
      *param_5 = (int)((ulong)(local_88 - *(long *)(this + 0x3c0)) >> 3) * 0x38e38e39;
      goto LAB_00f866c4;
    }
  }
  iVar10 = 0;
LAB_00f866c4:
  if (0 < *(int *)(this + 0x3d4)) {
    lVar8 = 0;
    lVar5 = *(long *)(this + 0x3e0);
    do {
      lVar6 = 0;
      do {
        lVar7 = lVar5 + lVar8 * 0x88 + 0x10;
        lVar3 = *(long *)(lVar7 + (long)*(int *)((long)&DAT_005719ec + lVar6) * 8);
        lVar4 = *(long *)(lVar7 + (long)*(int *)((long)&DAT_005719f4 + lVar6) * 8);
        lVar7 = *(long *)(lVar7 + (long)*(int *)((long)&DAT_005719f4 + lVar6) * 8);
        fVar18 = *(float *)(lVar3 + 0x14);
        fVar22 = *(float *)(lVar3 + 0x18);
        fVar21 = *(float *)(lVar3 + 0x10);
        fVar11 = *(float *)(lVar4 + 0x18) - fVar22;
        fVar26 = *(float *)(lVar4 + 0x14) - fVar18;
        fVar13 = *(float *)(lVar7 + 0x14) - fVar18;
        fVar14 = *(float *)(lVar7 + 0x18) - fVar22;
        fVar16 = *(float *)(lVar4 + 0x10) - fVar21;
        fVar29 = *(float *)(lVar7 + 0x10) - fVar21;
        fVar15 = (float)NEON_fnmsub(fVar14,fVar26,fVar13 * fVar11);
        uVar12 = NEON_fnmsub(fVar29,fVar11,fVar14 * fVar16);
        fVar11 = (float)NEON_fnmsub(fVar13,fVar16,fVar29 * fVar26);
        uVar17 = NEON_fmadd(uVar12,local_78._4_4_,fVar15 * (float)local_78);
        fVar13 = (float)NEON_fmadd(local_70,fVar11,uVar17);
        if (1.192093e-07 <= ABS(fVar13)) {
          uVar32 = NEON_fmadd(fVar15,fVar21,fVar11 * fVar22);
          uVar17 = NEON_fmadd(*(undefined4 *)(param_1 + 4),uVar12,*(float *)param_1 * fVar15);
          fVar16 = (float)NEON_fmadd(uVar12,fVar18,uVar32);
          fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar11,uVar17);
          fVar13 = (fVar16 - fVar14) / fVar13;
          if (1.192093e-06 < fVar13 && fVar13 < *param_3) {
            fVar29 = (float)NEON_fmadd(fVar13,local_78._4_4_,*(undefined4 *)(param_1 + 4));
            fVar14 = (float)NEON_fmadd(fVar13,local_70,*(undefined4 *)(param_1 + 8));
            fVar26 = (float)NEON_fmadd(fVar13,(float)local_78,*(float *)param_1);
            fVar22 = fVar22 - fVar14;
            fVar24 = *(float *)(lVar4 + 0x14) - fVar29;
            fVar20 = *(float *)(lVar4 + 0x18) - fVar14;
            fVar16 = *(float *)(lVar7 + 0x14) - fVar29;
            fVar21 = fVar21 - fVar26;
            fVar18 = fVar18 - fVar29;
            fVar14 = *(float *)(lVar7 + 0x18) - fVar14;
            fVar29 = *(float *)(lVar4 + 0x10) - fVar26;
            fVar26 = *(float *)(lVar7 + 0x10) - fVar26;
            fVar27 = (float)NEON_fnmsub(fVar20,fVar18,fVar24 * fVar22);
            fVar31 = (float)NEON_fnmsub(fVar14,fVar24,fVar16 * fVar20);
            uVar30 = NEON_fnmsub(fVar29,fVar22,fVar21 * fVar20);
            fVar23 = (float)NEON_fnmsub(fVar22,fVar16,fVar18 * fVar14);
            uVar17 = NEON_fnmsub(fVar26,fVar20,fVar29 * fVar14);
            uVar25 = NEON_fnmsub(fVar21,fVar24,fVar29 * fVar18);
            uVar32 = NEON_fnmsub(fVar21,fVar14,fVar26 * fVar22);
            uVar28 = NEON_fmadd(uVar30,uVar12,fVar27 * fVar15);
            uVar30 = NEON_fnmsub(fVar29,fVar16,fVar26 * fVar24);
            uVar19 = NEON_fmadd(uVar17,uVar12,fVar31 * fVar15);
            uVar17 = NEON_fnmsub(fVar26,fVar18,fVar21 * fVar16);
            uVar12 = NEON_fmadd(uVar32,uVar12,fVar23 * fVar15);
            fVar15 = (float)NEON_fmadd(uVar25,fVar11,uVar28);
            fVar14 = (float)NEON_fmadd(uVar30,fVar11,uVar19);
            fVar11 = (float)NEON_fmadd(uVar17,fVar11,uVar12);
            if ((((((-1.192093e-06 < fVar15 && fVar14 != -1.192093e-06) &&
                   (fVar15 <= -1.192093e-06 || fVar14 >= -1.192093e-06)) && fVar11 != -1.192093e-06)
                  && (((fVar15 <= -1.192093e-06 || fVar14 == -1.192093e-06) ||
                      -1.192093e-06 < fVar15 && fVar14 < -1.192093e-06) || -1.192093e-06 <= fVar11))
                && (0.0 < fVar13)) && (iVar10 = iVar10 + 1, !param_6)) {
              *(undefined4 *)param_4 = 4;
              *param_5 = (int)lVar8;
              *param_3 = fVar13;
            }
          }
        }
        lVar6 = lVar6 + 0xc;
      } while (lVar6 != 0x30);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(this + 0x3d4));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


