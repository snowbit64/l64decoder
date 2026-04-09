// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecursiveMultiply
// Entry Point: 00cf262c
// Size: 1172 bytes
// Signature: undefined __cdecl RecursiveMultiply(uint * param_1, uint * param_2, uint * param_3, uint * param_4, ulong param_5)


/* CryptoPP::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned long) */

void CryptoPP::RecursiveMultiply
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  
  if (param_5 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x00cf269c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)&DAT_021208a0 + (param_5 & 0x7ffffffffffffffc) * 2))(param_1,param_3,param_4)
    ;
    return;
  }
  uVar20 = param_5 >> 1;
  lVar5 = uVar20 - 1;
  lVar7 = uVar20 * 8 + -4;
  lVar12 = lVar7;
  lVar16 = lVar5;
  do {
    if (lVar16 == -1) break;
    puVar8 = param_3 + lVar16;
    puVar13 = (uint *)((long)param_3 + lVar12);
    if (*puVar13 < *puVar8) {
      uVar15 = 0;
      if (param_5 < 2) goto LAB_00cf2764;
      goto LAB_00cf270c;
    }
    lVar16 = lVar16 + -1;
    lVar12 = lVar12 + -4;
  } while (*puVar13 <= *puVar8);
  uVar15 = uVar20;
  if (1 < param_5) {
LAB_00cf270c:
    uVar18 = 0;
    lVar12 = 0;
    puVar8 = param_1 + 1;
    puVar13 = param_3 + (uVar15 ^ uVar20) + 1;
    puVar17 = param_3 + uVar15 + 1;
    do {
      uVar18 = uVar18 + 2;
      lVar12 = (lVar12 + (ulong)puVar17[-1]) - (ulong)puVar13[-1];
      puVar8[-1] = (uint)lVar12;
      lVar16 = ((ulong)*puVar17 - (ulong)*puVar13) + (lVar12 >> 0x3f);
      lVar12 = lVar16 >> 0x3f;
      *puVar8 = (uint)lVar16;
      puVar8 = puVar8 + 2;
      puVar13 = puVar13 + 2;
      puVar17 = puVar17 + 2;
    } while (uVar18 < uVar20);
  }
LAB_00cf2764:
  do {
    if (lVar5 == -1) break;
    puVar8 = param_4 + lVar5;
    puVar13 = (uint *)((long)param_4 + lVar7);
    if (*puVar13 < *puVar8) {
      uVar18 = 0;
      if (param_5 < 2) goto LAB_00cf2810;
      goto LAB_00cf27b8;
    }
    lVar5 = lVar5 + -1;
    lVar7 = lVar7 + -4;
  } while (*puVar13 <= *puVar8);
  uVar18 = uVar20;
  if (1 < param_5) {
LAB_00cf27b8:
    uVar14 = 0;
    lVar12 = 0;
    puVar8 = param_1 + uVar20 + 1;
    puVar13 = param_4 + (uVar18 ^ uVar20) + 1;
    puVar17 = param_4 + uVar18 + 1;
    do {
      uVar14 = uVar14 + 2;
      lVar12 = (lVar12 + (ulong)puVar17[-1]) - (ulong)puVar13[-1];
      puVar8[-1] = (uint)lVar12;
      lVar16 = ((ulong)*puVar17 - (ulong)*puVar13) + (lVar12 >> 0x3f);
      lVar12 = lVar16 >> 0x3f;
      *puVar8 = (uint)lVar16;
      puVar8 = puVar8 + 2;
      puVar13 = puVar13 + 2;
      puVar17 = puVar17 + 2;
    } while (uVar14 < uVar20);
  }
LAB_00cf2810:
  puVar17 = param_1 + uVar20;
  puVar8 = param_1 + param_5;
  puVar13 = param_2 + param_5;
  RecursiveMultiply(puVar8,puVar13,param_3 + uVar20,param_4 + uVar20,uVar20);
  RecursiveMultiply(param_2,puVar13,param_1,puVar17,uVar20);
  RecursiveMultiply(param_1,puVar13,param_3,param_4,uVar20);
  if (param_5 < 2) {
    uVar10 = 0;
    iVar6 = 0;
  }
  else {
    uVar14 = 0;
    uVar9 = 0;
    puVar13 = param_1 + uVar20 + 1;
    puVar19 = param_1 + param_5 + 1;
    do {
      uVar14 = uVar14 + 2;
      uVar9 = uVar9 + puVar19[-1] + (ulong)puVar13[-1];
      puVar19[-1] = (uint)uVar9;
      uVar1 = (ulong)*puVar19 + (uVar9 >> 0x20) + (ulong)*puVar13;
      uVar9 = uVar1 >> 0x20;
      *puVar19 = (uint)uVar1;
      puVar13 = puVar13 + 2;
      puVar19 = puVar19 + 2;
    } while (uVar14 < uVar20);
    uVar14 = 0;
    uVar9 = 0;
    do {
      uVar14 = uVar14 + 2;
      uVar9 = uVar9 + (param_1 + param_5 + 1)[-1] + (ulong)*param_1;
      param_1[uVar20] = (uint)uVar9;
      uVar2 = (ulong)param_1[param_5 + 1] + (uVar9 >> 0x20) + (ulong)param_1[1];
      uVar9 = uVar2 >> 0x20;
      param_1[uVar20 + 1] = (uint)uVar2;
      param_1 = param_1 + 2;
    } while (uVar14 < uVar20);
    uVar14 = 0;
    uVar9 = 0;
    puVar13 = puVar8;
    do {
      uVar14 = uVar14 + 2;
      uVar9 = uVar9 + *puVar13 + (ulong)puVar13[uVar20];
      *puVar13 = (uint)uVar9;
      uVar3 = (ulong)puVar13[1] + (uVar9 >> 0x20) + (ulong)puVar13[uVar20 + 1];
      puVar13[1] = (uint)uVar3;
      uVar9 = uVar3 >> 0x20;
      puVar13 = puVar13 + 2;
    } while (uVar14 < uVar20);
    iVar6 = (int)(uVar1 >> 0x20);
    uVar10 = (int)(uVar2 >> 0x20) + iVar6;
    iVar6 = (int)(uVar3 >> 0x20) + iVar6;
  }
  if (uVar15 == uVar18) {
    uVar18 = 0;
    uVar15 = 0;
    do {
      uVar14 = uVar15 + 2;
      puVar13 = puVar17 + uVar15;
      lVar12 = (uVar18 + *puVar13) - (ulong)param_2[uVar15];
      *puVar13 = (uint)lVar12;
      lVar12 = ((ulong)puVar13[1] - (ulong)(param_2 + uVar15)[1]) + (lVar12 >> 0x3f);
      uVar18 = lVar12 >> 0x3f;
      puVar13[1] = (uint)lVar12;
      uVar15 = uVar14;
    } while (uVar14 < param_5);
  }
  else {
    uVar18 = 0;
    uVar15 = 0;
    do {
      uVar14 = uVar15 + 2;
      puVar13 = puVar17 + uVar15;
      uVar18 = uVar18 + *puVar13 + (ulong)param_2[uVar15];
      *puVar13 = (uint)uVar18;
      uVar15 = (ulong)puVar13[1] + (uVar18 >> 0x20) + (ulong)(param_2 + uVar15)[1];
      uVar18 = uVar15 >> 0x20;
      puVar13[1] = (uint)uVar15;
      uVar15 = uVar14;
    } while (uVar14 < param_5);
  }
  uVar4 = *puVar8;
  *puVar8 = uVar4 + uVar10;
  if (CARRY4(uVar4,uVar10)) {
    if (3 < param_5) {
      uVar15 = 1;
      do {
        uVar10 = puVar8[uVar15];
        puVar8[uVar15] = uVar10 + 1;
        if (uVar10 != 0xffffffff) goto LAB_00cf2a58;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (uVar15 < uVar20);
    }
    iVar11 = 1;
  }
  else {
LAB_00cf2a58:
    iVar11 = 0;
  }
  uVar4 = puVar8[uVar20];
  uVar10 = iVar6 + (int)uVar18 + iVar11;
  puVar8[uVar20] = uVar10 + uVar4;
  if ((3 < param_5) && (CARRY4(uVar10,uVar4) != false)) {
    uVar15 = 1;
    do {
      uVar18 = (ulong)((int)uVar15 + 1);
      uVar10 = puVar8[uVar20 + uVar15];
      puVar8[uVar20 + uVar15] = uVar10 + 1;
      uVar15 = uVar18;
    } while ((uVar10 == 0xffffffff && uVar18 <= uVar20) &&
             (uVar10 != 0xffffffff || uVar20 != uVar18));
  }
  return;
}


