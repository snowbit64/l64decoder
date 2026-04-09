// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de3010
// Entry Point: 00de3010
// Size: 508 bytes
// Signature: undefined FUN_00de3010(void)


int FUN_00de3010(float param_1,float param_2,float param_3,float *param_4,uint param_5,long param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
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
  long local_48 [7];
  
  lVar3 = tpidr_el0;
  local_48[6] = *(long *)(lVar3 + 0x28);
  if (0 < (int)param_5) {
    uVar7 = (ulong)param_5;
    if (param_5 < 8) {
      uVar5 = 0;
LAB_00de30a4:
      lVar6 = uVar7 - uVar5;
      pfVar10 = param_4 + uVar5 * 3 + 2;
      pfVar12 = (float *)((long)local_48 + uVar5 * 4);
      do {
        fVar16 = *pfVar10;
        lVar6 = lVar6 + -1;
        pfVar1 = pfVar10 + -2;
        pfVar10 = pfVar10 + 3;
        fVar16 = (float)NEON_fmadd(param_1,*pfVar1,fVar16 * param_2);
        *pfVar12 = fVar16 + param_3;
        pfVar12 = pfVar12 + 1;
      } while (lVar6 != 0);
    }
    else {
      uVar5 = uVar7 & 0xfffffff8;
      plVar9 = local_48 + 2;
      uVar13 = uVar5;
      pfVar10 = param_4;
      do {
        uVar13 = uVar13 - 8;
        fVar16 = *pfVar10;
        fVar21 = pfVar10[2];
        fVar17 = pfVar10[3];
        fVar23 = pfVar10[5];
        fVar14 = pfVar10[0xc];
        fVar22 = pfVar10[0xe];
        fVar18 = pfVar10[0xf];
        fVar24 = pfVar10[0x11];
        fVar19 = pfVar10[0x12];
        fVar25 = pfVar10[0x14];
        fVar20 = pfVar10[0x15];
        fVar26 = pfVar10[0x17];
        plVar9[-1] = CONCAT44(pfVar10[0xb] * param_2 + pfVar10[9] * param_1 + param_3,
                              pfVar10[8] * param_2 + pfVar10[6] * param_1 + param_3);
        plVar9[-2] = CONCAT44(fVar23 * param_2 + fVar17 * param_1 + param_3,
                              fVar21 * param_2 + fVar16 * param_1 + param_3);
        plVar9[1] = CONCAT44(fVar26 * param_2 + fVar20 * param_1 + param_3,
                             fVar25 * param_2 + fVar19 * param_1 + param_3);
        *plVar9 = CONCAT44(fVar24 * param_2 + fVar18 * param_1 + param_3,
                           fVar22 * param_2 + fVar14 * param_1 + param_3);
        plVar9 = plVar9 + 4;
        pfVar10 = pfVar10 + 0x18;
      } while (uVar13 != 0);
      if (uVar5 != uVar7) goto LAB_00de30a4;
    }
    iVar11 = param_5 - 1;
    if (0 < (int)param_5) {
      uVar8 = 0;
      iVar4 = 0;
      uVar13 = 0;
      do {
        fVar14 = *(float *)((long)local_48 + (long)iVar11 * 4);
        fVar16 = *(float *)((long)local_48 + uVar13 * 4);
        if (fVar14 < 0.0 == 0.0 <= fVar16) {
          lVar6 = (long)iVar4 + (long)iVar4 * 2;
          iVar4 = iVar4 + 1;
          fVar14 = fVar14 / (fVar14 - fVar16);
          puVar2 = (undefined4 *)(param_6 + (long)(int)lVar6 * 4);
          uVar15 = NEON_fmadd(param_4[uVar8] - param_4[(long)iVar11 * 3],fVar14,
                              param_4[(long)iVar11 * 3]);
          *puVar2 = uVar15;
          uVar15 = NEON_fmadd(param_4[uVar8 + 1] - param_4[(long)(iVar11 * 3) + 1],fVar14,
                              param_4[(long)(iVar11 * 3) + 1]);
          *(undefined4 *)(param_6 + lVar6 * 4 + 4) = uVar15;
          uVar15 = NEON_fmadd(param_4[uVar8 + 2] - param_4[(long)(iVar11 * 3) + 2],fVar14,
                              param_4[(long)(iVar11 * 3) + 2]);
          puVar2[2] = uVar15;
        }
        if (0.0 <= fVar16) {
          lVar6 = (long)iVar4 + (long)iVar4 * 2;
          iVar4 = iVar4 + 1;
          pfVar10 = (float *)(param_6 + (long)(int)lVar6 * 4);
          *pfVar10 = param_4[uVar8];
          *(float *)(param_6 + lVar6 * 4 + 4) = param_4[uVar8 + 1];
          pfVar10[2] = param_4[uVar8 + 2];
        }
        uVar5 = uVar13 + 1;
        iVar11 = (int)uVar13;
        uVar8 = uVar8 + 3;
        uVar13 = uVar5;
      } while (uVar7 != uVar5);
      goto LAB_00de31e8;
    }
  }
  iVar4 = 0;
LAB_00de31e8:
  if (*(long *)(lVar3 + 0x28) == local_48[6]) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


