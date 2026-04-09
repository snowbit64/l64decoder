// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectorigin
// Entry Point: 00f6d23c
// Size: 1100 bytes
// Signature: undefined __cdecl projectorigin(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, float * param_5, uint * param_6)


/* gjkepa2_impl::GJK::projectorigin(btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&, float*, unsigned int&) */

float gjkepa2_impl::GJK::projectorigin
                (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
                float *param_5,uint *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  uint local_ac;
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar3 = *(float *)param_4;
  fVar2 = *(float *)(param_4 + 4);
  fVar5 = *(float *)param_2;
  fVar18 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_4 + 8);
  fVar16 = *(float *)(param_2 + 8);
  fVar26 = fVar7 - fVar2;
  fVar15 = *(float *)(param_1 + 8);
  fVar11 = *(float *)(param_3 + 4) - fVar2;
  fVar21 = fVar18 - *(float *)(param_3 + 4);
  fVar10 = fVar16 - fVar4;
  fVar9 = fVar6 - fVar3;
  fVar27 = fVar15 - fVar4;
  fVar8 = fVar5 - fVar3;
  fVar13 = *(float *)param_3 - fVar3;
  fVar23 = fVar16 - *(float *)(param_3 + 8);
  fVar14 = *(float *)(param_3 + 8) - fVar4;
  fVar20 = fVar5 - *(float *)param_3;
  fVar12 = fVar18 - fVar2;
  fVar24 = (float)NEON_fnmsub(fVar20,fVar7 - fVar18,fVar21 * (fVar6 - fVar5));
  uVar19 = NEON_fnmsub(fVar21,fVar15 - fVar16,fVar23 * (fVar7 - fVar18));
  uVar25 = NEON_fmadd(fVar8 * fVar27,fVar11,fVar10 * fVar26 * fVar13);
  uVar22 = NEON_fmadd(fVar8 * fVar26,fVar14,fVar11 * fVar10 * fVar9);
  uVar17 = NEON_fnmsub(fVar23,fVar6 - fVar5,fVar20 * (fVar15 - fVar16));
  fVar5 = (float)NEON_fmadd(fVar27 * fVar13,fVar12,uVar22);
  fVar16 = (float)NEON_fmadd(fVar14 * fVar9,fVar12,uVar25);
  uVar19 = NEON_fmadd(uVar19,fVar6,fVar24 * fVar15);
  fVar16 = fVar16 - fVar5;
  fVar6 = (float)NEON_fmadd(uVar17,fVar7,uVar19);
  fVar5 = -1.0;
  if ((fVar16 * fVar6 <= 0.0) && (fVar5 = -1.0, fVar16 != 0.0)) {
    fVar6 = (float)NEON_fmsub(fVar12,fVar27,fVar10 * fVar26);
    uVar19 = NEON_fmsub(fVar9,fVar10,fVar8 * fVar27);
    uVar17 = NEON_fnmsub(fVar9,fVar12,fVar8 * fVar26);
    fVar5 = -1.0;
    local_a0 = 0.0;
    local_a8 = 0;
    local_ac = 0;
    uVar19 = NEON_fmadd(uVar19,fVar2,fVar3 * fVar6);
    fVar6 = (float)NEON_fmadd(fVar4,uVar17,uVar19);
    if (0.0 < fVar6 * fVar16) {
      fVar5 = (float)projectorigin(param_1,param_2,param_4,(float *)&local_a8,&local_ac);
      *param_6 = (local_ac & 4) << 1 | local_ac & 2 | local_ac & 1;
      *(undefined8 *)param_5 = local_a8;
      param_5[2] = 0.0;
      param_5[3] = local_a0;
      fVar3 = *(float *)param_4;
      fVar2 = *(float *)(param_4 + 4);
      fVar4 = *(float *)(param_4 + 8);
    }
    fVar6 = (float)NEON_fnmsub(fVar14,fVar12,fVar11 * fVar10);
    uVar19 = NEON_fnmsub(fVar13,fVar10,fVar8 * fVar14);
    uVar17 = NEON_fnmsub(fVar8,fVar11,fVar13 * fVar12);
    uVar19 = NEON_fmadd(uVar19,fVar2,fVar3 * fVar6);
    fVar2 = (float)NEON_fmadd(fVar4,uVar17,uVar19);
    if (0.0 < fVar2 * fVar16) {
      fVar2 = (float)projectorigin(param_2,param_3,param_4,(float *)&local_a8,&local_ac);
      if ((fVar5 < 0.0) || (fVar2 < fVar5)) {
        *param_6 = (local_ac & 7) << 1;
        *(undefined8 *)(param_5 + 1) = local_a8;
        *param_5 = 0.0;
        param_5[3] = local_a0;
        fVar5 = fVar2;
      }
    }
    fVar2 = (float)NEON_fnmsub(fVar27,fVar11,fVar26 * fVar14);
    uVar17 = NEON_fnmsub(fVar13,fVar26,fVar9 * fVar11);
    uVar19 = NEON_fmadd(fVar14 * fVar9 - fVar27 * fVar13,*(undefined4 *)(param_4 + 4),
                        *(float *)param_4 * fVar2);
    fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),uVar17,uVar19);
    if (0.0 < fVar2 * fVar16) {
      fVar2 = (float)projectorigin(param_3,param_1,param_4,(float *)&local_a8,&local_ac);
      if ((fVar5 < 0.0) || (fVar2 < fVar5)) {
        *param_6 = (local_ac & 4) << 1 | local_ac >> 1 & 1 | (local_ac & 1) << 2;
        *param_5 = local_a8._4_4_;
        param_5[1] = 0.0;
        param_5[2] = (float)local_a8;
        param_5[3] = local_a0;
        fVar5 = fVar2;
      }
    }
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
      *param_6 = 0xf;
      fVar16 = 1.0 / fVar16;
      uVar19 = NEON_fmadd(*(float *)param_2 * *(float *)(param_3 + 4),*(float *)(param_4 + 8),
                          *(float *)(param_4 + 4) * *(float *)(param_2 + 8) * *(float *)param_3);
      uVar17 = NEON_fmadd(*(float *)param_2 * *(float *)(param_3 + 8),*(float *)(param_4 + 4),
                          *(float *)(param_2 + 8) * *(float *)(param_3 + 4) * *(float *)param_4);
      fVar2 = (float)NEON_fmadd(*(float *)(param_3 + 8) * *(float *)param_4,
                                *(undefined4 *)(param_2 + 4),uVar19);
      fVar3 = (float)NEON_fmadd(*(float *)(param_4 + 8) * *(float *)param_3,
                                *(undefined4 *)(param_2 + 4),uVar17);
      fVar2 = (fVar3 - fVar2) * fVar16;
      *param_5 = fVar2;
      uVar19 = NEON_fmadd(*(float *)param_3 * *(float *)(param_1 + 4),*(float *)(param_4 + 8),
                          *(float *)(param_4 + 4) * *(float *)(param_3 + 8) * *(float *)param_1);
      uVar17 = NEON_fmadd(*(float *)param_3 * *(float *)(param_1 + 8),*(float *)(param_4 + 4),
                          *(float *)(param_3 + 8) * *(float *)(param_1 + 4) * *(float *)param_4);
      fVar3 = (float)NEON_fmadd(*(float *)(param_1 + 8) * *(float *)param_4,
                                *(undefined4 *)(param_3 + 4),uVar19);
      fVar4 = (float)NEON_fmadd(*(float *)(param_4 + 8) * *(float *)param_1,
                                *(undefined4 *)(param_3 + 4),uVar17);
      fVar3 = (fVar4 - fVar3) * fVar16;
      param_5[1] = fVar3;
      uVar19 = NEON_fmadd(*(float *)param_1 * *(float *)(param_2 + 4),*(float *)(param_4 + 8),
                          *(float *)(param_4 + 4) * *(float *)(param_1 + 8) * *(float *)param_2);
      uVar17 = NEON_fmadd(*(float *)param_1 * *(float *)(param_2 + 8),*(float *)(param_4 + 4),
                          *(float *)(param_1 + 8) * *(float *)(param_2 + 4) * *(float *)param_4);
      fVar4 = (float)NEON_fmadd(*(float *)(param_2 + 8) * *(float *)param_4,
                                *(undefined4 *)(param_1 + 4),uVar19);
      fVar6 = (float)NEON_fmadd(*(float *)(param_4 + 8) * *(float *)param_2,
                                *(undefined4 *)(param_1 + 4),uVar17);
      fVar16 = (fVar6 - fVar4) * fVar16;
      param_5[2] = fVar16;
      param_5[3] = 1.0 - (fVar2 + fVar3 + fVar16);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


