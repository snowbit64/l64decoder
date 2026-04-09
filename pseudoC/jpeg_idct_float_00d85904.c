// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_float
// Entry Point: 00d85904
// Size: 960 bytes
// Signature: undefined jpeg_idct_float(void)


void jpeg_idct_float(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  ushort uVar8;
  float *pfVar9;
  long lVar10;
  short *psVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_128 [64];
  long local_28;
  
  lVar3 = tpidr_el0;
  pfVar9 = local_128;
  psVar11 = (short *)(param_3 + 0x40);
  local_28 = *(long *)(lVar3 + 0x28);
  uVar13 = 9;
  lVar10 = *(long *)(param_1 + 0x198);
  pfVar12 = *(float **)(param_2 + 0x58);
  do {
    uVar8 = psVar11[-0x10];
    if ((ushort)(psVar11[-0x18] | uVar8) == 0) {
      if ((((psVar11[-8] != 0) || (*psVar11 != 0)) || (psVar11[8] != 0)) ||
         ((psVar11[0x10] != 0 || (psVar11[0x18] != 0)))) {
        uVar8 = 0;
        goto LAB_00d85990;
      }
      lVar7 = 0x38;
      fVar4 = *pfVar12 * (float)(int)psVar11[-0x20];
      *pfVar9 = fVar4;
      pfVar9[8] = fVar4;
      pfVar9[0x10] = fVar4;
      pfVar9[0x18] = fVar4;
      pfVar9[0x20] = fVar4;
      pfVar9[0x28] = fVar4;
      pfVar9[0x30] = fVar4;
    }
    else {
LAB_00d85990:
      fVar14 = pfVar12[8] * (float)(int)psVar11[-0x18];
      lVar7 = 0x20;
      fVar18 = pfVar12[0x28] * (float)(int)psVar11[8] - pfVar12[0x18] * (float)(int)psVar11[-8];
      fVar21 = fVar14 - pfVar12[0x38] * (float)(int)psVar11[0x18];
      fVar4 = pfVar12[0x18] * (float)(int)psVar11[-8] + pfVar12[0x28] * (float)(int)psVar11[8];
      fVar14 = fVar14 + pfVar12[0x38] * (float)(int)psVar11[0x18];
      fVar5 = (fVar18 + fVar21) * 1.847759;
      fVar20 = pfVar12[0x10] * (float)(int)(short)uVar8 + pfVar12[0x30] * (float)(int)psVar11[0x10];
      fVar17 = fVar4 + fVar14;
      fVar6 = (float)NEON_fmadd(fVar18,0xc0273d75,fVar5);
      fVar19 = *pfVar12 * (float)(int)psVar11[-0x20] + pfVar12[0x20] * (float)(int)*psVar11;
      fVar18 = *pfVar12 * (float)(int)psVar11[-0x20] - pfVar12[0x20] * (float)(int)*psVar11;
      fVar15 = (float)NEON_fnmsub(pfVar12[0x10] * (float)(int)(short)uVar8 -
                                  pfVar12[0x30] * (float)(int)psVar11[0x10],0x3fb504f3,fVar20);
      fVar6 = fVar6 - fVar17;
      fVar16 = fVar19 + fVar20;
      fVar5 = (float)NEON_fmadd(fVar21,0xbf8a8bd4,fVar5);
      fVar21 = fVar18 + fVar15;
      fVar18 = fVar18 - fVar15;
      fVar19 = fVar19 - fVar20;
      fVar14 = (fVar14 - fVar4) * 1.414214 - fVar6;
      *pfVar9 = fVar16 + fVar17;
      pfVar9[0x38] = fVar16 - fVar17;
      pfVar9[8] = fVar21 + fVar6;
      fVar4 = fVar19 - (fVar5 - fVar14);
      pfVar9[0x30] = fVar21 - fVar6;
      pfVar9[0x10] = fVar18 + fVar14;
      pfVar9[0x28] = fVar18 - fVar14;
      pfVar9[0x18] = fVar19 + (fVar5 - fVar14);
    }
    pfVar9[lVar7] = fVar4;
    pfVar9 = pfVar9 + 1;
    pfVar12 = pfVar12 + 1;
    uVar13 = uVar13 - 1;
    psVar11 = psVar11 + 1;
    if (uVar13 < 2) {
      lVar10 = lVar10 + -0x180;
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 8;
        puVar2 = (undefined *)(*(long *)(param_4 + lVar7) + (ulong)param_5);
        fVar14 = local_128[lVar7 + 5] - local_128[lVar7 + 3];
        fVar5 = local_128[lVar7 + 5] + local_128[lVar7 + 3];
        fVar21 = local_128[lVar7] + 512.5 + local_128[lVar7 + 4];
        fVar4 = (local_128[lVar7] + 512.5) - local_128[lVar7 + 4];
        fVar15 = local_128[lVar7 + 1] - local_128[lVar7 + 7];
        fVar19 = local_128[lVar7 + 2] + local_128[lVar7 + 6];
        fVar6 = local_128[lVar7 + 1] + local_128[lVar7 + 7];
        fVar20 = fVar21 + fVar19;
        fVar22 = fVar5 + fVar6;
        fVar16 = (fVar14 + fVar15) * 1.847759;
        fVar18 = (float)NEON_fnmsub(local_128[lVar7 + 2] - local_128[lVar7 + 6],0x3fb504f3,fVar19);
        fVar14 = (float)NEON_fmadd(fVar14,0xc0273d75,fVar16);
        fVar17 = fVar4 + fVar18;
        fVar4 = fVar4 - fVar18;
        fVar14 = fVar14 - fVar22;
        *puVar2 = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar20 + fVar22) & 0x3ff));
        fVar5 = (fVar6 - fVar5) * 1.414214 - fVar14;
        puVar2[7] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar20 - fVar22) & 0x3ff));
        fVar18 = (float)NEON_fmadd(fVar15,0xbf8a8bd4,fVar16);
        puVar2[1] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar17 + fVar14) & 0x3ff));
        fVar21 = fVar21 - fVar19;
        puVar2[6] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar17 - fVar14) & 0x3ff));
        puVar2[2] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar4 + fVar5) & 0x3ff));
        puVar2[5] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar4 - fVar5) & 0x3ff));
        puVar2[3] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar21 + (fVar18 - fVar5)) & 0x3ff))
        ;
        puVar2[4] = *(undefined *)(lVar10 + ((ulong)(uint)(int)(fVar21 - (fVar18 - fVar5)) & 0x3ff))
        ;
        lVar7 = lVar1;
      } while (lVar1 != 0x40);
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


