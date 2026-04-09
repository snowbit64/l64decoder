// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLocalClosestPosition
// Entry Point: 00b56e88
// Size: 1264 bytes
// Signature: undefined __cdecl getLocalClosestPosition(float param_1, float param_2, Vector3 * param_3, float param_4, Vector3 * param_5)


/* LinearSpline::getLocalClosestPosition(float, float, Vector3 const&, float, Vector3&) const */

float LinearSpline::getLocalClosestPosition
                (float param_1,float param_2,Vector3 *param_3,float param_4,Vector3 *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *in_x2;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_78;
  float local_74;
  float fStack_70;
  float local_68;
  float local_64;
  float local_60;
  undefined auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  fVar17 = param_1 - param_2 * 0.5;
  fVar18 = param_2 * 0.5 + param_1;
  (**(code **)(*(long *)param_3 + 0x10))(fVar17,param_3,&local_68,auStack_58);
  (**(code **)(*(long *)param_3 + 0x10))(fVar18,param_3,&local_78,auStack_58);
  if (0.0 <= fVar17) {
    fVar11 = *(float *)(param_3 + 0x2c);
    uVar5 = *(uint *)(param_3 + 0x28);
    lVar4 = *(long *)(param_3 + 0x10);
    if (uVar5 == 0) {
LAB_00b56fa4:
      iVar7 = 0;
    }
    else {
      uVar6 = 0;
      uVar8 = uVar5;
      do {
        uVar1 = uVar8 + uVar6 >> 1;
        if (*(float *)(lVar4 + (ulong)uVar1 * 4) < fVar17 * fVar11) {
          uVar6 = uVar1 + 1;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
      } while (uVar6 < uVar8);
      if (uVar6 == 0) goto LAB_00b56fa4;
LAB_00b56f9c:
      iVar7 = uVar6 - 1;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (iVar7 + 1U) / uVar5;
    }
    uVar6 = (iVar7 + 1U) - uVar6 * uVar5;
    if (uVar5 == 0) goto LAB_00b5700c;
LAB_00b56fd4:
    uVar8 = 0;
    uVar1 = uVar5;
    do {
      uVar2 = uVar1 + uVar8 >> 1;
      if (*(float *)(lVar4 + (ulong)uVar2 * 4) < fVar18 * fVar11) {
        uVar8 = uVar2 + 1;
        uVar2 = uVar1;
      }
      uVar1 = uVar2;
    } while (uVar8 < uVar1);
    if (uVar8 == 0) goto LAB_00b5700c;
    uVar8 = uVar8 - 1;
  }
  else {
    if (*(int *)(param_3 + 8) == 1) {
      fVar11 = *(float *)(param_3 + 0x2c);
      uVar5 = *(uint *)(param_3 + 0x28);
      lVar4 = *(long *)(param_3 + 0x10);
      fVar17 = fVar17 + 1.0;
      if (uVar5 != 0) {
        uVar6 = 0;
        uVar8 = uVar5;
        do {
          uVar1 = uVar8 + uVar6 >> 1;
          if (*(float *)(lVar4 + (ulong)uVar1 * 4) < fVar17 * fVar11) {
            uVar6 = uVar1 + 1;
            uVar1 = uVar8;
          }
          uVar8 = uVar1;
        } while (uVar6 < uVar8);
        if (uVar6 != 0) goto LAB_00b56f9c;
      }
      goto LAB_00b56fa4;
    }
    fVar11 = *(float *)(param_3 + 0x2c);
    uVar6 = 0;
    lVar4 = *(long *)(param_3 + 0x10);
    fVar17 = 0.0;
    uVar5 = *(uint *)(param_3 + 0x28);
    if (uVar5 != 0) goto LAB_00b56fd4;
LAB_00b5700c:
    uVar8 = 0;
  }
  lVar9 = *(long *)(param_3 + 0x18);
  pfVar10 = (float *)(lVar9 + (ulong)(uVar6 * 3) * 4);
  fVar15 = pfVar10[1] - local_64;
  fVar19 = *pfVar10 - local_68;
  fVar16 = pfVar10[2] - local_60;
  uVar12 = NEON_fmadd(fVar19,fVar19,fVar15 * fVar15);
  fVar20 = (float)NEON_fmadd(fVar16,fVar16,uVar12);
  fVar11 = *(float *)param_5;
  if (1e-06 <= fVar20) {
    fVar13 = *(float *)(param_5 + 4);
    fVar14 = *(float *)(param_5 + 8);
    uVar12 = NEON_fmadd(fVar11 - local_68,fVar19,fVar15 * (fVar13 - local_64));
    fVar22 = (float)NEON_fmadd(fVar14 - local_60,fVar16,uVar12);
    fVar21 = fVar22 / fVar20;
    if (fVar22 / fVar20 <= 0.0) {
      fVar21 = 0.0;
    }
    fVar20 = (float)NEON_fmin(fVar21,0x3f800000);
    local_68 = local_68 + fVar19 * fVar20;
    local_64 = local_64 + fVar15 * fVar20;
    local_60 = local_60 + fVar16 * fVar20;
    uVar12 = NEON_fmadd(fVar13 - local_64,fVar13 - local_64,
                        (fVar11 - local_68) * (fVar11 - local_68));
    fVar15 = (float)NEON_fmadd(fVar14 - local_60,fVar14 - local_60,uVar12);
    if (fVar15 < 3.402823e+38) {
      fVar17 = (float)NEON_fmadd(fVar20,*(float *)(lVar4 + (ulong)uVar6 * 4) - fVar17,fVar17);
      goto LAB_00b57124;
    }
  }
  else {
    fVar13 = *(float *)(param_5 + 4);
    fVar14 = *(float *)(param_5 + 8);
    uVar12 = NEON_fmadd(local_64 - fVar13,local_64 - fVar13,
                        (local_68 - fVar11) * (local_68 - fVar11));
    fVar15 = (float)NEON_fmadd(local_60 - fVar14,local_60 - fVar14,uVar12);
    if (fVar15 < 3.402823e+38) goto LAB_00b57124;
  }
  fVar15 = 3.402823e+38;
  fVar17 = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
LAB_00b57124:
  if (uVar6 != uVar8) {
    fVar16 = *(float *)(lVar4 + (long)(int)uVar6 * 4);
    do {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = (uVar6 + 1) / uVar5;
      }
      pfVar10 = (float *)(lVar9 + (long)(int)(uVar6 * 3) * 4);
      fVar22 = *pfVar10;
      fVar20 = pfVar10[1];
      fVar21 = pfVar10[2];
      uVar6 = (uVar6 + 1) - uVar1 * uVar5;
      pfVar10 = (float *)(lVar9 + (long)(int)uVar6 * 0xc);
      fVar25 = pfVar10[1] - fVar20;
      fVar26 = pfVar10[2] - fVar21;
      fVar27 = *pfVar10 - fVar22;
      uVar12 = NEON_fmadd(fVar27,fVar27,fVar25 * fVar25);
      fVar23 = (float)NEON_fmadd(fVar26,fVar26,uVar12);
      fVar19 = *(float *)(lVar4 + (long)(int)uVar6 * 4);
      if (1e-06 <= fVar23) {
        uVar12 = NEON_fmadd(fVar11 - fVar22,fVar27,fVar25 * (fVar13 - fVar20));
        fVar28 = (float)NEON_fmadd(fVar14 - fVar21,fVar26,uVar12);
        fVar24 = fVar28 / fVar23;
        if (fVar28 / fVar23 <= 0.0) {
          fVar24 = 0.0;
        }
        fVar24 = (float)NEON_fmin(fVar24,0x3f800000);
        fVar22 = fVar22 + fVar27 * fVar24;
        fVar20 = fVar20 + fVar25 * fVar24;
        fVar21 = fVar21 + fVar26 * fVar24;
        uVar12 = NEON_fmadd(fVar13 - fVar20,fVar13 - fVar20,(fVar11 - fVar22) * (fVar11 - fVar22));
        fVar23 = (float)NEON_fmadd(fVar14 - fVar21,fVar14 - fVar21,uVar12);
        if (fVar23 < fVar15) {
          fVar16 = (float)NEON_fmadd(fVar24,fVar19 - fVar16,fVar16);
          goto LAB_00b571c4;
        }
      }
      else {
        uVar12 = NEON_fmadd(fVar20 - fVar13,fVar20 - fVar13,(fVar22 - fVar11) * (fVar22 - fVar11));
        fVar23 = (float)NEON_fmadd(fVar21 - fVar14,fVar21 - fVar14,uVar12);
        if (fVar23 < fVar15) {
LAB_00b571c4:
          fVar17 = fVar16;
          fVar15 = fVar23;
          local_68 = fVar22;
          local_64 = fVar20;
          local_60 = fVar21;
        }
      }
      fVar16 = fVar19;
    } while (uVar6 != uVar8);
  }
  pfVar10 = (float *)(lVar9 + (ulong)(uVar8 * 3) * 4);
  fVar21 = *pfVar10;
  fVar20 = pfVar10[1];
  fVar16 = pfVar10[2];
  local_74 = local_74 - fVar20;
  fStack_70 = fStack_70 - fVar16;
  local_78 = local_78 - fVar21;
  uVar12 = NEON_fmadd(local_78,local_78,local_74 * local_74);
  fVar22 = (float)NEON_fmadd(fStack_70,fStack_70,uVar12);
  fVar19 = *(float *)(lVar4 + (ulong)uVar8 * 4);
  if (1e-06 <= fVar22) {
    uVar12 = NEON_fmadd(fVar11 - fVar21,local_78,local_74 * (fVar13 - fVar20));
    fVar25 = (float)NEON_fmadd(fVar14 - fVar16,fStack_70,uVar12);
    fVar23 = fVar25 / fVar22;
    if (fVar25 / fVar22 <= 0.0) {
      fVar23 = 0.0;
    }
    fVar22 = (float)NEON_fmin(fVar23,0x3f800000);
    fVar21 = fVar21 + local_78 * fVar22;
    fVar20 = fVar20 + local_74 * fVar22;
    fVar11 = fVar11 - fVar21;
    fVar16 = fVar16 + fStack_70 * fVar22;
    fVar13 = fVar13 - fVar20;
    fVar14 = fVar14 - fVar16;
    uVar12 = NEON_fmadd(fVar13,fVar13,fVar11 * fVar11);
    fVar11 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
    if (fVar11 < fVar15) {
      fVar17 = (float)NEON_fmadd(fVar22,fVar18 - fVar19,fVar19);
      local_68 = fVar21;
      local_64 = fVar20;
      local_60 = fVar16;
    }
  }
  else {
    uVar12 = NEON_fmadd(fVar20 - fVar13,fVar20 - fVar13,(fVar21 - fVar11) * (fVar21 - fVar11));
    fVar18 = (float)NEON_fmadd(fVar16 - fVar14,fVar16 - fVar14,uVar12);
    if (fVar18 < fVar15) {
      fVar17 = fVar19;
      local_68 = fVar21;
      local_64 = fVar20;
      local_60 = fVar16;
    }
  }
  *in_x2 = local_68;
  in_x2[1] = local_64;
  in_x2[2] = local_60;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return fVar17 / *(float *)(param_3 + 0x2c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


