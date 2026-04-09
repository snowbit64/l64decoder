// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Split_Polygon
// Entry Point: 00eb6bec
// Size: 740 bytes
// Signature: undefined __thiscall Split_Polygon(polygon<float> * this, polygon * param_1, plane * param_2, polygon * param_3, polygon * param_4)


/* FLOAT_MATH::polygon<float>::Split_Polygon(FLOAT_MATH::polygon<float>*, FLOAT_MATH::plane<float>*,
   FLOAT_MATH::polygon<float>&, FLOAT_MATH::polygon<float>&) */

void __thiscall
FLOAT_MATH::polygon<float>::Split_Polygon
          (polygon<float> *this,polygon *param_1,plane *param_2,polygon *param_3,polygon *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 in_s16;
  float in_s17;
  undefined4 in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 local_1848;
  float local_1840 [766];
  undefined8 local_c48;
  float local_c40 [766];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = *(uint *)param_1;
  uVar5 = (ulong)uVar9;
  if ((int)uVar9 < 1) {
    uVar9 = 0;
    *(undefined4 *)param_3 = 0;
  }
  else {
    uVar10 = 0;
    iVar3 = uVar9 + (uVar9 & (int)uVar9 >> 0x1f) + -1;
    uVar9 = 0;
    uVar14 = *(undefined4 *)param_2;
    fVar11 = *(float *)(param_2 + 4);
    pfVar6 = (float *)(param_1 + 8);
    uVar19 = NEON_fmadd(*(float *)(param_1 + (long)iVar3 * 0xc + 4),uVar14,
                        *(float *)(param_1 + (long)iVar3 * 0xc + 8) * fVar11);
    uVar17 = *(undefined4 *)(param_2 + 8);
    fVar18 = *(float *)(param_2 + 0xc);
    fVar20 = (float)NEON_fmadd(*(float *)(param_1 + (long)iVar3 * 0xc + 0xc),uVar17,uVar19);
    fVar12 = *(float *)(param_1 + (long)iVar3 * 0xc + 4);
    fVar15 = *(float *)(param_1 + (long)iVar3 * 0xc + 0xc);
    fVar20 = fVar18 + fVar20;
    fVar21 = *(float *)(param_1 + (long)iVar3 * 0xc + 8);
    do {
      while( true ) {
        fVar22 = *pfVar6;
        fVar16 = pfVar6[1];
        fVar13 = pfVar6[-1];
        uVar19 = NEON_fmadd(fVar13,uVar14,fVar11 * fVar22);
        fVar23 = (float)NEON_fmadd(fVar16,uVar17,uVar19);
        fVar23 = fVar18 + fVar23;
        if (fVar23 <= 0.0) break;
        if (fVar20 < 0.0) {
          uVar19 = NEON_fmadd(fVar12,uVar14,fVar21 * fVar11);
          fVar20 = (float)NEON_fmadd(fVar15,uVar17,uVar19);
          if (((0.0 < fVar23) || (0.0 < fVar18 + fVar20)) &&
             ((fVar23 < 0.0 || (fVar18 + fVar20 < 0.0)))) {
            uVar19 = NEON_fmadd(fVar12 - fVar13,uVar14,(fVar21 - fVar22) * fVar11);
            fVar20 = (float)NEON_fmadd(fVar15 - fVar16,uVar17,uVar19);
            fVar20 = -(fVar18 + (fVar23 - fVar18)) / fVar20;
            in_s18 = NEON_fmadd(fVar12 - fVar13,fVar20,fVar13);
            in_s20 = (float)NEON_fmadd(fVar21 - fVar22,fVar20,fVar22);
            in_s21 = (float)NEON_fmadd(fVar15 - fVar16,fVar20,fVar16);
          }
          lVar1 = (long)(int)uVar9;
          puVar7 = (undefined8 *)((long)&local_1848 + lVar1 * 0xc);
          uVar9 = uVar9 + 1;
          lVar2 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          *(undefined4 *)puVar7 = in_s18;
          local_1840[lVar1 * 3 + -1] = in_s20;
          local_1840[lVar1 * 3] = in_s21;
          fVar12 = local_1840[lVar1 * 3];
          *(undefined8 *)((long)&local_c48 + lVar2 * 0xc) = *puVar7;
          local_c40[lVar2 * 3] = fVar12;
        }
        pfVar8 = (float *)((long)&local_c48 + (long)(int)uVar10 * 0xc);
        uVar10 = uVar10 + 1;
LAB_00eb6ce0:
        *pfVar8 = fVar13;
        pfVar8[1] = fVar22;
        pfVar8[2] = fVar16;
        pfVar6 = pfVar6 + 3;
        uVar5 = uVar5 - 1;
        fVar12 = fVar13;
        fVar15 = fVar16;
        fVar20 = fVar23;
        fVar21 = fVar22;
        if (uVar5 == 0) goto LAB_00eb6e54;
      }
      if (fVar23 < 0.0) {
        if (0.0 < fVar20) {
          uVar19 = NEON_fmadd(fVar13,uVar14,fVar22 * fVar11);
          uVar24 = NEON_fmadd(fVar12,uVar14,fVar21 * fVar11);
          fVar20 = (float)NEON_fmadd(fVar16,uVar17,uVar19);
          fVar25 = (float)NEON_fmadd(fVar15,uVar17,uVar24);
          fVar20 = fVar18 + fVar20;
          if (((0.0 < fVar20) || (0.0 < fVar18 + fVar25)) &&
             ((fVar20 < 0.0 || (fVar18 + fVar25 < 0.0)))) {
            uVar19 = NEON_fmadd(fVar12 - fVar13,uVar14,(fVar21 - fVar22) * fVar11);
            fVar25 = (float)NEON_fmadd(fVar15 - fVar16,uVar17,uVar19);
            fVar25 = -(fVar18 + (fVar20 - fVar18)) / fVar25;
            in_s16 = NEON_fmadd(fVar12 - fVar13,fVar25,fVar13);
            in_s17 = (float)NEON_fmadd(fVar21 - fVar22,fVar25,fVar22);
            in_s19 = (float)NEON_fmadd(fVar15 - fVar16,fVar25,fVar16);
          }
          lVar1 = (long)(int)uVar9;
          puVar7 = (undefined8 *)((long)&local_1848 + lVar1 * 0xc);
          uVar9 = uVar9 + 1;
          lVar2 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          *(undefined4 *)puVar7 = in_s16;
          local_1840[lVar1 * 3 + -1] = in_s17;
          local_1840[lVar1 * 3] = in_s19;
          fVar12 = local_1840[lVar1 * 3];
          *(undefined8 *)((long)&local_c48 + lVar2 * 0xc) = *puVar7;
          local_c40[lVar2 * 3] = fVar12;
        }
        pfVar8 = (float *)((long)&local_1848 + (long)(int)uVar9 * 0xc);
        uVar9 = uVar9 + 1;
        goto LAB_00eb6ce0;
      }
      lVar1 = (long)(int)uVar9;
      puVar7 = (undefined8 *)((long)&local_1848 + lVar1 * 0xc);
      uVar9 = uVar9 + 1;
      lVar2 = (long)(int)uVar10;
      uVar10 = uVar10 + 1;
      *(float *)puVar7 = fVar13;
      local_1840[lVar1 * 3 + -1] = fVar22;
      local_1840[lVar1 * 3] = fVar16;
      fVar12 = local_1840[lVar1 * 3];
      *(undefined8 *)((long)&local_c48 + lVar2 * 0xc) = *puVar7;
      local_c40[lVar2 * 3] = fVar12;
      pfVar6 = pfVar6 + 3;
      uVar5 = uVar5 - 1;
      fVar12 = fVar13;
      fVar15 = fVar16;
      fVar20 = fVar23;
      fVar21 = fVar22;
    } while (uVar5 != 0);
LAB_00eb6e54:
    if (0 < (int)uVar10) {
      this = (polygon<float> *)memcpy(param_3 + 4,&local_c48,(ulong)uVar10 * 0xc);
    }
    *(uint *)param_3 = uVar10;
    if (0 < (int)uVar9) {
      this = (polygon<float> *)memcpy(param_4 + 4,&local_1848,(ulong)uVar9 * 0xc);
    }
  }
  *(uint *)param_4 = uVar9;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


