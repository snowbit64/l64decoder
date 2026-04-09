// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collide
// Entry Point: 00f94bdc
// Size: 996 bytes
// Signature: undefined __cdecl collide(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, float * param_4, float * param_5, float param_6)


/* SphereTriangleDetector::collide(btVector3 const&, btVector3&, btVector3&, float&, float&, float)
    */

void SphereTriangleDetector::collide
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float *param_4,
               float *param_5,float param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float unaff_s9;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_b0;
  float fStack_ac;
  float local_98;
  undefined8 local_94;
  float local_88;
  undefined8 local_84;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x10);
  fVar21 = *(float *)(plVar5 + 0xc);
  fVar24 = *(float *)((long)plVar5 + 100);
  fVar23 = *(float *)(plVar5 + 10);
  fVar14 = *(float *)((long)plVar5 + 0x54);
  fVar17 = *(float *)(plVar5 + 0xe);
  fVar20 = *(float *)((long)plVar5 + 0x74);
  fVar15 = *(float *)(plVar5 + 0xd);
  fVar26 = *(float *)(plVar5 + 0xb);
  fVar19 = *(float *)(plVar5 + 0xf);
  fVar27 = (float)NEON_fnmsub(fVar20 - fVar14,fVar21 - fVar23,(fVar17 - fVar23) * (fVar24 - fVar14))
  ;
  fVar28 = (float)NEON_fnmsub(fVar19 - fVar26,fVar24 - fVar14,(fVar20 - fVar14) * (fVar15 - fVar26))
  ;
  fVar10 = (float)NEON_fnmsub(fVar17 - fVar23,fVar15 - fVar26,(fVar19 - fVar26) * (fVar21 - fVar23))
  ;
  uVar7 = NEON_fmadd(fVar28,fVar28,fVar27 * fVar27);
  fVar8 = (float)NEON_fmadd(fVar10,fVar10,uVar7);
  fVar12 = 1.0 / SQRT(fVar8);
  fVar8 = *(float *)param_2;
  fVar9 = *(float *)(param_2 + 4);
  fVar28 = fVar12 * fVar28;
  fVar10 = fVar12 * fVar10;
  fVar11 = *(float *)(param_2 + 8);
  fVar12 = fVar12 * fVar27;
  uVar7 = NEON_fmadd(fVar10,fVar9 - fVar14,fVar28 * (fVar8 - fVar23));
  fVar27 = *(float *)(*(long *)(param_1 + 8) + 0x1c) * *(float *)(*(long *)(param_1 + 8) + 0x2c);
  fVar13 = (float)NEON_fmadd(fVar12,fVar11 - fVar26,uVar7);
  fVar18 = fVar27 + param_6;
  if (fVar13 < 0.0) {
    fVar13 = -fVar13;
    fVar28 = -fVar28;
    fVar10 = -fVar10;
    fVar12 = -fVar12;
  }
  if (fVar13 < fVar18) {
    fVar22 = (float)NEON_fnmsub(fVar12,fVar14 - fVar20,fVar10 * (fVar26 - fVar19));
    uVar25 = NEON_fnmsub(fVar28,fVar26 - fVar19,fVar12 * (fVar23 - fVar17));
    uVar6 = CONCAT44((-((fVar15 - fVar26) * fVar10) + (fVar24 - fVar14) * fVar12) * (fVar8 - fVar23)
                     + (fVar9 - fVar14) *
                       (-((fVar21 - fVar23) * fVar12) + (fVar15 - fVar26) * fVar28) +
                     (fVar11 - fVar26) *
                     (-((fVar24 - fVar14) * fVar28) + (fVar21 - fVar23) * fVar10),
                     (-((fVar19 - fVar15) * fVar10) + (fVar20 - fVar24) * fVar12) * (fVar8 - fVar21)
                     + (fVar9 - fVar24) *
                       (-((fVar17 - fVar21) * fVar12) + (fVar19 - fVar15) * fVar28) +
                     (fVar11 - fVar15) *
                     (-((fVar20 - fVar24) * fVar28) + (fVar17 - fVar21) * fVar10));
    uVar7 = NEON_fnmsub(fVar10,fVar23 - fVar17,fVar28 * (fVar14 - fVar20));
    uVar16 = NEON_fcmgt(uVar6,0,4);
    uVar25 = NEON_fmadd(uVar25,fVar9 - fVar20,fVar22 * (fVar8 - fVar17));
    fVar14 = (float)NEON_fmadd(uVar7,fVar11 - fVar19,uVar25);
    if (((((uVar16 & 0x100000000) != 0) && ((uVar16 & 1) != 0)) && (0.0 < fVar14)) ||
       (((uVar16 = NEON_fcmle(uVar6,0,2), (uVar16 & 0x100000000) != 0 && ((uVar16 & 1) != 0)) &&
        (fVar14 <= 0.0)))) {
      unaff_s9 = (float)NEON_fmsub(fVar28,fVar13,fVar8);
      local_b0 = (float)NEON_fmsub(fVar10,fVar13,fVar9);
      fStack_ac = (float)NEON_fmsub(fVar12,fVar13,fVar11);
LAB_00f94de0:
      fVar8 = fVar8 - unaff_s9;
      fVar9 = fVar9 - local_b0;
      fVar11 = fVar11 - fStack_ac;
      uVar7 = NEON_fmadd(fVar9,fVar9,fVar8 * fVar8);
      fVar13 = (float)NEON_fmadd(fVar11,fVar11,uVar7);
      if (fVar13 < fVar18 * fVar18) {
        if (fVar13 <= 1.192093e-07) {
          fVar27 = -fVar27;
        }
        else {
          fVar12 = 1.0 / SQRT(fVar13);
          fVar28 = fVar12 * fVar8;
          fVar10 = fVar12 * fVar9;
          fVar12 = fVar12 * fVar11;
          fVar27 = SQRT(fVar13) - fVar27;
        }
        uVar6 = 1;
        param_4[3] = 0.0;
        *param_4 = fVar28;
        param_4[1] = fVar10;
        param_4[2] = fVar12;
        *(float *)param_3 = unaff_s9;
        *(float *)(param_3 + 4) = local_b0;
        *(float *)(param_3 + 8) = fStack_ac;
        *(undefined4 *)(param_3 + 0xc) = 0;
        *param_5 = fVar27;
        goto LAB_00f94f70;
      }
    }
    else {
      local_b0 = 0.0;
      fStack_ac = 0.0;
      iVar3 = (**(code **)(*plVar5 + 200))();
      if (0 < iVar3) {
        bVar2 = false;
        iVar3 = 0;
        do {
          (**(code **)(**(long **)(param_1 + 0x10) + 0xd0))
                    (*(long **)(param_1 + 0x10),iVar3,&local_88,&local_98);
          fVar8 = (float)local_84;
          fVar21 = (float)*(undefined8 *)(param_2 + 4);
          fVar17 = fVar21 - fVar8;
          fVar9 = (float)((ulong)local_84 >> 0x20);
          fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
          fVar19 = fVar23 - fVar9;
          fVar11 = (float)local_94 - fVar8;
          fVar24 = (float)((ulong)local_94 >> 0x20);
          fVar13 = fVar24 - fVar9;
          fVar15 = *(float *)param_2 - local_88;
          fVar14 = local_98 - local_88;
          fVar26 = (float)NEON_fmadd(fVar14,fVar15,fVar11 * fVar17);
          fVar26 = fVar26 + fVar13 * fVar19;
          fVar20 = 0.0;
          if (0.0 < fVar26) {
            fVar20 = (float)NEON_fmadd(fVar14,fVar14,fVar11 * fVar11);
            fVar20 = fVar20 + fVar13 * fVar13;
            if (fVar20 <= fVar26) {
              fVar15 = *(float *)param_2 - local_98;
              fVar17 = fVar21 - (float)local_94;
              fVar19 = fVar23 - fVar24;
              fVar20 = 1.0;
            }
            else {
              fVar20 = fVar26 / fVar20;
              fVar15 = (float)NEON_fmsub(fVar20,fVar14,fVar15);
              fVar17 = fVar17 - fVar11 * fVar20;
              fVar19 = fVar19 - fVar13 * fVar20;
            }
          }
          fVar15 = (float)NEON_fmadd(fVar15,fVar15,fVar17 * fVar17);
          if (fVar15 + fVar19 * fVar19 < fVar18 * fVar18) {
            unaff_s9 = (float)NEON_fmadd(fVar20,fVar14,local_88);
            bVar2 = true;
            local_b0 = fVar8 + fVar11 * fVar20;
            fStack_ac = fVar9 + fVar13 * fVar20;
          }
          iVar3 = iVar3 + 1;
          iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 200))();
        } while (iVar3 < iVar4);
        if (bVar2) {
          fVar8 = *(float *)param_2;
          fVar9 = *(float *)(param_2 + 4);
          fVar11 = *(float *)(param_2 + 8);
          goto LAB_00f94de0;
        }
      }
    }
  }
  uVar6 = 0;
LAB_00f94f70:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


