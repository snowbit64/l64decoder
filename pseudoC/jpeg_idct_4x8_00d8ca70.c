// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_4x8
// Entry Point: 00d8ca70
// Size: 1608 bytes
// Signature: undefined jpeg_idct_4x8(void)


void jpeg_idct_4x8(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  short *psVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ushort uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  long local_70;
  
  lVar7 = tpidr_el0;
  piVar13 = local_f0;
  local_70 = *(long *)(lVar7 + 0x28);
  psVar14 = (short *)(param_3 + 0x40);
  uVar16 = 5;
  lVar10 = *(long *)(param_1 + 0x198);
  piVar15 = *(int **)(param_2 + 0x58);
  do {
    uVar21 = psVar14[-0x10];
    if ((ushort)(psVar14[-0x18] | uVar21) == 0) {
      if ((((psVar14[-8] != 0) || (*psVar14 != 0)) || (psVar14[8] != 0)) ||
         ((psVar14[0x10] != 0 || (psVar14[0x18] != 0)))) {
        uVar21 = 0;
        goto LAB_00d8cb28;
      }
      lVar11 = 0x1c;
      iVar19 = (int)psVar14[-0x20] * *piVar15 * 4;
      *piVar13 = iVar19;
      piVar13[4] = iVar19;
      piVar13[8] = iVar19;
      piVar13[0xc] = iVar19;
      piVar13[0x10] = iVar19;
      piVar13[0x14] = iVar19;
      piVar13[0x18] = iVar19;
    }
    else {
LAB_00d8cb28:
      lVar11 = (long)piVar15[0x38] * (long)psVar14[0x18];
      lVar12 = (long)piVar15[0x28] * (long)psVar14[8];
      lVar26 = (long)piVar15[0x18] * (long)psVar14[-8];
      lVar20 = (long)piVar15[8] * (long)psVar14[-0x18];
      lVar25 = ((long)piVar15[0x30] * (long)psVar14[0x10] +
               (long)piVar15[0x10] * (long)(short)uVar21) * 0x1151;
      lVar22 = lVar25 + (long)piVar15[0x10] * (long)(short)uVar21 * 0x187e;
      lVar25 = lVar25 + (long)piVar15[0x30] * (long)psVar14[0x10] * -0x3b21;
      lVar9 = (lVar20 + lVar12 + lVar26 + lVar11) * 0x25a1;
      uVar18 = (long)(*piVar15 * (int)psVar14[-0x20]) << 0xd | 0x400;
      lVar23 = (lVar20 + lVar11) * -0x1ccd;
      lVar8 = (ulong)(uint)(piVar15[0x20] * (int)*psVar14) * 0x2000 + uVar18;
      lVar27 = lVar9 + (lVar20 + lVar12) * -0xc7c;
      lVar17 = uVar18 + (ulong)(uint)(piVar15[0x20] * (int)*psVar14) * -0x2000;
      lVar24 = (lVar26 + lVar12) * -0x5203;
      lVar1 = lVar22 + lVar8;
      lVar20 = lVar23 + lVar20 * 0x300b + lVar27;
      lVar9 = lVar9 + (lVar26 + lVar11) * -0x3ec5;
      lVar2 = lVar25 + lVar17;
      lVar17 = lVar17 - lVar25;
      lVar27 = lVar24 + lVar12 * 0x41b3 + lVar27;
      piVar13[0x1c] = (int)((ulong)(lVar1 - lVar20) >> 0xb);
      lVar12 = lVar24 + lVar26 * 0x6254 + lVar9;
      lVar8 = lVar8 - lVar22;
      lVar9 = lVar23 + lVar11 * 0x98e + lVar9;
      piVar13[8] = (int)((ulong)(lVar27 + lVar17) >> 0xb);
      iVar19 = (int)((ulong)(lVar8 - lVar9) >> 0xb);
      lVar11 = 0x10;
      *piVar13 = (int)((ulong)(lVar20 + lVar1) >> 0xb);
      piVar13[4] = (int)((ulong)(lVar12 + lVar2) >> 0xb);
      piVar13[0x18] = (int)((ulong)(lVar2 - lVar12) >> 0xb);
      piVar13[0x14] = (int)((ulong)(lVar17 - lVar27) >> 0xb);
      piVar13[0xc] = (int)((ulong)(lVar9 + lVar8) >> 0xb);
    }
    piVar13[lVar11] = iVar19;
    piVar13 = piVar13 + 1;
    piVar15 = piVar15 + 1;
    uVar16 = uVar16 - 1;
    psVar14 = psVar14 + 1;
    if (uVar16 < 2) {
      iVar19 = (local_f0[0] + 0x4010 + local_f0[2]) * 0x2000;
      lVar10 = lVar10 + -0x180;
      iVar6 = (local_f0[3] + local_f0[1]) * 0x1151;
      iVar5 = iVar6 + local_f0[1] * 0x187e;
      uVar18 = (ulong)param_5;
      puVar3 = (undefined *)(*param_4 + uVar18);
      iVar6 = iVar6 + local_f0[3] * -0x3b21;
      iVar4 = ((local_f0[0] + 0x4010) - local_f0[2]) * 0x2000;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_e0[0] + 0x4010 + local_e0[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[1] + uVar18);
      iVar6 = (local_e0[3] + local_e0[1]) * 0x1151;
      iVar4 = ((local_e0[0] + 0x4010) - local_e0[2]) * 0x2000;
      iVar5 = iVar6 + local_e0[1] * 0x187e;
      iVar6 = iVar6 + local_e0[3] * -0x3b21;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_d0[0] + 0x4010 + local_d0[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[2] + uVar18);
      iVar6 = (local_d0[3] + local_d0[1]) * 0x1151;
      iVar4 = ((local_d0[0] + 0x4010) - local_d0[2]) * 0x2000;
      iVar5 = iVar6 + local_d0[1] * 0x187e;
      iVar6 = iVar6 + local_d0[3] * -0x3b21;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_c0[0] + 0x4010 + local_c0[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[3] + uVar18);
      iVar6 = (local_c0[3] + local_c0[1]) * 0x1151;
      iVar4 = ((local_c0[0] + 0x4010) - local_c0[2]) * 0x2000;
      iVar5 = iVar6 + local_c0[1] * 0x187e;
      iVar6 = iVar6 + local_c0[3] * -0x3b21;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_b0[0] + 0x4010 + local_b0[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[4] + uVar18);
      iVar6 = (local_b0[3] + local_b0[1]) * 0x1151;
      iVar4 = ((local_b0[0] + 0x4010) - local_b0[2]) * 0x2000;
      iVar5 = iVar6 + local_b0[1] * 0x187e;
      iVar6 = iVar6 + local_b0[3] * -0x3b21;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_a0[0] + 0x4010 + local_a0[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[5] + uVar18);
      iVar6 = (local_a0[3] + local_a0[1]) * 0x1151;
      iVar4 = ((local_a0[0] + 0x4010) - local_a0[2]) * 0x2000;
      iVar5 = iVar6 + local_a0[1] * 0x187e;
      iVar6 = iVar6 + local_a0[3] * -0x3b21;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar19 = (local_90[0] + 0x4010 + local_90[2]) * 0x2000;
      iVar6 = (local_90[3] + local_90[1]) * 0x1151;
      iVar4 = ((local_90[0] + 0x4010) - local_90[2]) * 0x2000;
      iVar5 = iVar6 + local_90[1] * 0x187e;
      iVar6 = iVar6 + local_90[3] * -0x3b21;
      puVar3 = (undefined *)(param_4[6] + uVar18);
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      iVar6 = (local_80[3] + local_80[1]) * 0x1151;
      iVar5 = iVar6 + local_80[1] * 0x187e;
      iVar19 = (local_80[0] + 0x4010 + local_80[2]) * 0x2000;
      puVar3 = (undefined *)(param_4[7] + uVar18);
      iVar6 = iVar6 + local_80[3] * -0x3b21;
      iVar4 = ((local_80[0] + 0x4010) - local_80[2]) * 0x2000;
      *puVar3 = *(undefined *)(lVar10 + ((ulong)((uint)(iVar5 + iVar19) >> 0x12) & 0x3ff));
      puVar3[3] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar19 - iVar5) >> 0x12) & 0x3ff));
      puVar3[1] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar6 + iVar4) >> 0x12) & 0x3ff));
      puVar3[2] = *(undefined *)(lVar10 + ((ulong)((uint)(iVar4 - iVar6) >> 0x12) & 0x3ff));
      if (*(long *)(lVar7 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


