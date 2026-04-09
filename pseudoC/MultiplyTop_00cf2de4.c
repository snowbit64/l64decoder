// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplyTop
// Entry Point: 00cf2de4
// Size: 1572 bytes
// Signature: undefined __cdecl MultiplyTop(uint * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, ulong param_6)


/* CryptoPP::MultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*,
   unsigned int const*, unsigned long) */

void CryptoPP::MultiplyTop
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_6 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x00cf2e58 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)&DAT_02120978 + (param_6 & 0x7ffffffffffffffc) * 2))
              (param_1,param_4,param_5,param_3[param_6 - 1]);
    return;
  }
  uVar18 = param_6 >> 1;
  lVar5 = uVar18 << 3;
  lVar12 = lVar5;
  uVar15 = uVar18;
  do {
    uVar17 = uVar18;
    if (uVar15 == 0) break;
    lVar1 = uVar15 - 1;
    uVar8 = *(uint *)((long)param_4 + lVar12 + -4);
    if (uVar8 < param_4[lVar1]) {
      uVar17 = 0;
      break;
    }
    lVar12 = lVar12 + -4;
    uVar15 = uVar15 - 1;
  } while (uVar8 <= param_4[lVar1]);
  if (1 < param_6) {
    uVar15 = 0;
    lVar12 = 0;
    puVar9 = param_1 + 1;
    puVar13 = param_4 + (uVar17 ^ uVar18) + 1;
    puVar10 = param_4 + uVar17 + 1;
    do {
      uVar15 = uVar15 + 2;
      lVar12 = (lVar12 + (ulong)puVar10[-1]) - (ulong)puVar13[-1];
      puVar9[-1] = (uint)lVar12;
      lVar1 = ((ulong)*puVar10 - (ulong)*puVar13) + (lVar12 >> 0x3f);
      lVar12 = lVar1 >> 0x3f;
      *puVar9 = (uint)lVar1;
      puVar9 = puVar9 + 2;
      puVar13 = puVar13 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar15 < uVar18);
  }
  uVar15 = uVar18;
  do {
    uVar16 = uVar18;
    if (uVar15 == 0) break;
    lVar12 = uVar15 - 1;
    uVar8 = *(uint *)((long)param_5 + lVar5 + -4);
    if (uVar8 < param_5[lVar12]) {
      uVar16 = 0;
      break;
    }
    lVar5 = lVar5 + -4;
    uVar15 = uVar15 - 1;
  } while (uVar8 <= param_5[lVar12]);
  if (1 < param_6) {
    uVar15 = 0;
    lVar12 = 0;
    puVar9 = param_1 + uVar18 + 1;
    puVar13 = param_5 + (uVar16 ^ uVar18) + 1;
    puVar10 = param_5 + uVar16 + 1;
    do {
      uVar15 = uVar15 + 2;
      lVar12 = (lVar12 + (ulong)puVar10[-1]) - (ulong)puVar13[-1];
      puVar9[-1] = (uint)lVar12;
      lVar5 = ((ulong)*puVar10 - (ulong)*puVar13) + (lVar12 >> 0x3f);
      lVar12 = lVar5 >> 0x3f;
      *puVar9 = (uint)lVar5;
      puVar9 = puVar9 + 2;
      puVar13 = puVar13 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar15 < uVar18);
  }
  puVar13 = param_1 + uVar18;
  puVar9 = param_2 + param_6;
  RecursiveMultiply(param_2,puVar9,param_1,puVar13,uVar18);
  RecursiveMultiply(param_1,puVar9,param_4 + uVar18,param_5 + uVar18,uVar18);
  uVar15 = uVar18;
  if (param_6 < 2) {
    iVar4 = 0;
    if (uVar17 == uVar16) goto LAB_00cf30d4;
LAB_00cf31d0:
    do {
      if (uVar15 == 0) {
LAB_00cf32ac:
        iVar7 = 0;
        goto joined_r0x00cf32b4;
      }
      lVar12 = uVar15 - 1;
      lVar5 = uVar15 - 1;
      if (param_1[lVar5] < param_2[param_6 + lVar12]) goto LAB_00cf32ac;
      uVar15 = uVar15 - 1;
    } while (param_1[lVar5] <= param_2[param_6 + lVar12]);
    iVar7 = 1;
joined_r0x00cf32b4:
    if (1 < param_6) {
      uVar15 = 0;
      uVar17 = 0;
      puVar10 = param_2 + uVar18 + 1;
      puVar14 = param_2 + param_6 + 1;
      do {
        uVar15 = uVar15 + 2;
        uVar17 = uVar17 + puVar14[-1] + (ulong)puVar10[-1];
        puVar14[-1] = (uint)uVar17;
        uVar16 = (ulong)*puVar14 + (uVar17 >> 0x20) + (ulong)*puVar10;
        uVar17 = uVar16 >> 0x20;
        *puVar14 = (uint)uVar16;
        puVar10 = puVar10 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar15 < uVar18);
      goto LAB_00cf3250;
    }
    uVar8 = iVar4 + iVar7;
LAB_00cf325c:
    uVar3 = *puVar9;
    *puVar9 = uVar3 + uVar8;
    iVar11 = iVar7;
    if (!CARRY4(uVar3,uVar8)) goto joined_r0x00cf32a4;
    if (3 < param_6) {
      uVar15 = 1;
      do {
        uVar8 = puVar9[uVar15];
        puVar9[uVar15] = uVar8 + 1;
        if (uVar8 != 0xffffffff) goto joined_r0x00cf32a4;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (uVar15 < uVar18);
      iVar11 = iVar7 + 1;
      goto joined_r0x00cf32a4;
    }
    iVar4 = 1;
  }
  else {
    uVar6 = 0;
    lVar12 = 0;
    puVar10 = puVar9 + 1;
    puVar14 = param_3 + 1;
    do {
      uVar6 = uVar6 + 2;
      lVar12 = (lVar12 + (ulong)puVar14[uVar18 - 1]) - (ulong)puVar14[-1];
      puVar10[-1] = (uint)lVar12;
      lVar5 = ((ulong)puVar14[uVar18] - (ulong)*puVar14) + (lVar12 >> 0x3f);
      lVar12 = lVar5 >> 0x3f;
      *puVar10 = (uint)lVar5;
      puVar10 = puVar10 + 2;
      puVar14 = puVar14 + 2;
    } while (uVar6 < uVar18);
    iVar4 = -(int)(lVar5 >> 0x3f);
    if (uVar17 != uVar16) {
      lVar12 = 0;
      uVar17 = 0;
      do {
        uVar16 = uVar17 + 2;
        puVar10 = param_2 + param_6 + uVar17;
        lVar12 = (lVar12 + (ulong)*puVar10) - (ulong)param_2[uVar17];
        *puVar10 = (uint)lVar12;
        lVar5 = ((ulong)puVar10[1] - (ulong)(param_2 + uVar17)[1]) + (lVar12 >> 0x3f);
        lVar12 = lVar5 >> 0x3f;
        puVar10[1] = (uint)lVar5;
        uVar17 = uVar16;
      } while (uVar16 < uVar18);
      iVar4 = iVar4 - (int)(lVar5 >> 0x3f);
      goto LAB_00cf31d0;
    }
    uVar16 = 0;
    uVar17 = 0;
    do {
      uVar6 = uVar17 + 2;
      puVar10 = param_2 + param_6 + uVar17;
      uVar16 = uVar16 + *puVar10 + (ulong)param_2[uVar17];
      *puVar10 = (uint)uVar16;
      uVar2 = (ulong)puVar10[1] + (uVar16 >> 0x20) + (ulong)(param_2 + uVar17)[1];
      uVar16 = uVar2 >> 0x20;
      puVar10[1] = (uint)uVar2;
      uVar17 = uVar6;
    } while (uVar6 < uVar18);
    iVar4 = iVar4 - (int)(uVar2 >> 0x20);
LAB_00cf30d4:
    do {
      if (uVar15 == 0) {
LAB_00cf3158:
        iVar7 = 0;
        goto joined_r0x00cf3160;
      }
      lVar12 = uVar15 - 1;
      lVar5 = uVar15 - 1;
      if (param_1[lVar5] < param_2[param_6 + lVar12]) goto LAB_00cf3158;
      uVar15 = uVar15 - 1;
    } while (param_1[lVar5] <= param_2[param_6 + lVar12]);
    iVar7 = 1;
joined_r0x00cf3160:
    if (param_6 < 2) {
      uVar17 = 0;
    }
    else {
      uVar15 = 0;
      uVar17 = 0;
      puVar10 = param_2 + uVar18 + 1;
      puVar14 = param_2 + param_6 + 1;
      do {
        uVar15 = uVar15 + 2;
        lVar12 = (uVar17 + puVar14[-1]) - (ulong)puVar10[-1];
        puVar14[-1] = (uint)lVar12;
        lVar12 = ((ulong)*puVar14 - (ulong)*puVar10) + (lVar12 >> 0x3f);
        uVar17 = lVar12 >> 0x3f;
        *puVar14 = (uint)lVar12;
        puVar10 = puVar10 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar15 < uVar18);
    }
LAB_00cf3250:
    iVar11 = (int)uVar17 + iVar7;
    uVar8 = iVar4 + iVar7;
    iVar7 = iVar11;
    if (-1 < (int)uVar8) goto LAB_00cf325c;
    uVar3 = *puVar9;
    iVar4 = 0;
    *puVar9 = uVar3 + uVar8;
    if (uVar3 < -uVar8) {
      if (3 < param_6) {
        uVar15 = 1;
        do {
          uVar8 = puVar9[uVar15];
          puVar9[uVar15] = uVar8 - 1;
          if (uVar8 != 0) goto joined_r0x00cf32a4;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar15 < uVar18);
      }
      iVar11 = iVar11 + -1;
      goto joined_r0x00cf32a4;
    }
  }
  iVar11 = iVar4 + iVar11;
joined_r0x00cf32a4:
  if (param_6 < 2) {
    *puVar13 = *puVar13 + iVar11;
  }
  else {
    uVar15 = 0;
    uVar17 = 0;
    puVar9 = param_1 + 1;
    puVar10 = param_2 + param_6 + 1;
    do {
      uVar15 = uVar15 + 2;
      uVar17 = uVar17 + puVar10[-1] + (ulong)puVar9[uVar18 - 1];
      puVar9[-1] = (uint)uVar17;
      uVar16 = (ulong)*puVar10 + (uVar17 >> 0x20) + (ulong)puVar9[uVar18];
      uVar17 = uVar16 >> 0x20;
      *puVar9 = (uint)uVar16;
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 2;
    } while (uVar15 < uVar18);
    uVar3 = *puVar13;
    uVar8 = iVar11 + (int)(uVar16 >> 0x20);
    *puVar13 = uVar8 + uVar3;
    if ((3 < param_6) && (CARRY4(uVar8,uVar3) != false)) {
      uVar15 = 1;
      do {
        uVar17 = (ulong)((int)uVar15 + 1);
        uVar8 = puVar13[uVar15];
        puVar13[uVar15] = uVar8 + 1;
        uVar15 = uVar17;
      } while ((uVar8 == 0xffffffff && uVar17 <= uVar18) &&
               (uVar8 != 0xffffffff || uVar18 != uVar17));
    }
  }
  return;
}


