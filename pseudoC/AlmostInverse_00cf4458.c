// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlmostInverse
// Entry Point: 00cf4458
// Size: 1252 bytes
// Signature: undefined __cdecl AlmostInverse(uint * param_1, uint * param_2, uint * param_3, ulong param_4, uint * param_5, ulong param_6)


/* WARNING: Type propagation algorithm not settling */
/* CryptoPP::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned long,
   unsigned int const*, unsigned long) */

int CryptoPP::AlmostInverse
              (uint *param_1,uint *param_2,uint *param_3,ulong param_4,uint *param_5,ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  size_t __n;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  
  __n = param_6 * 4;
  puVar10 = param_2 + param_6;
  puVar12 = param_2 + param_6 * 2;
  puVar16 = param_2 + param_6 * 3;
  puVar9 = param_5 + (param_6 - 1);
  uVar19 = param_6;
  do {
    uVar20 = uVar19;
    if ((uVar20 == 0) || (puVar9[-1] != 0)) break;
    uVar8 = *puVar9;
    puVar9 = puVar9 + -2;
    uVar19 = uVar20 - 2;
  } while (uVar8 == 0);
  if (param_6 * 3 != 0) {
    memset(param_2,0,param_6 * 0xc);
  }
  *param_2 = 1;
  if (puVar12 != param_3) {
    memcpy(puVar12,param_3,param_4 << 2);
  }
  if (puVar16 != param_5) {
    memcpy(puVar16,param_5,__n);
  }
  iVar21 = 0;
  bVar4 = false;
  uVar19 = 2;
  bVar3 = uVar20 == 0;
  uVar8 = *puVar12;
  lVar5 = -4;
  if (bVar3) {
    lVar5 = 0;
  }
  if (uVar8 == 0) goto LAB_00cf4710;
LAB_00cf4550:
  uVar13 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
  uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  lVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
  iVar21 = (uint)lVar5 + iVar21;
  uVar8 = uVar8 >> (ulong)((uint)lVar5 & 0x1f);
  puVar9 = puVar12;
  puVar17 = param_2;
  do {
    if (uVar8 == 1) {
      uVar8 = puVar9[1];
      uVar6 = uVar20;
      while (uVar8 == 0) {
        if (uVar6 - 2 == 0) {
          if (!bVar4) {
            if (puVar17 == param_1) {
              return iVar21;
            }
            memcpy(param_1,puVar17,__n);
            return iVar21;
          }
          if (param_6 == 0) {
            return iVar21;
          }
          uVar19 = 0;
          lVar5 = 0;
          puVar10 = param_1 + 1;
          puVar12 = puVar17 + 1;
          puVar16 = param_5 + 1;
          do {
            uVar19 = uVar19 + 2;
            lVar5 = (lVar5 + (ulong)puVar16[-1]) - (ulong)puVar12[-1];
            puVar10[-1] = (uint)lVar5;
            lVar14 = ((ulong)*puVar16 - (ulong)*puVar12) + (lVar5 >> 0x3f);
            lVar5 = lVar14 >> 0x3f;
            *puVar10 = (uint)lVar14;
            puVar10 = puVar10 + 2;
            puVar12 = puVar12 + 2;
            puVar16 = puVar16 + 2;
          } while (uVar19 < param_6);
          return iVar21;
        }
        if (puVar9[uVar6 - 2] != 0) break;
        uVar8 = puVar9[uVar6 - 1];
        uVar6 = uVar6 - 2;
      }
    }
    uVar8 = (uint)lVar5;
    if (uVar8 == 0) {
LAB_00cf45f0:
      lVar5 = 0;
    }
    else {
      if (uVar20 != 0) {
        uVar13 = 0;
        uVar6 = uVar20;
        do {
          uVar18 = uVar6 - 1;
          uVar2 = puVar9[uVar6 - 1] >> (ulong)(uVar8 & 0x1f) | uVar13;
          uVar13 = puVar9[uVar6 - 1] << (ulong)(0x20 - uVar8 & 0x1f);
          puVar9[uVar6 - 1] = uVar2;
          uVar6 = uVar18;
        } while (uVar18 != 0);
      }
      if (uVar19 == 0) goto LAB_00cf45f0;
      uVar13 = 0;
      puVar12 = puVar10;
      uVar6 = uVar19;
      do {
        uVar6 = uVar6 - 1;
        uVar2 = *puVar12 << (ulong)(uVar8 & 0x1f) | uVar13;
        uVar13 = *puVar12 >> (ulong)(0x20 - uVar8 & 0x1f);
        *puVar12 = uVar2;
        puVar12 = puVar12 + 1;
      } while (uVar6 != 0);
      puVar10[uVar19] = puVar10[uVar19] + uVar13;
      if (uVar13 == 0) goto LAB_00cf45f0;
      lVar5 = 2;
    }
    uVar6 = lVar5 + uVar19;
    uVar19 = uVar20;
    do {
      uVar19 = uVar19 - 1;
      if (uVar19 == 0xffffffffffffffff) {
LAB_00cf4640:
        bVar7 = 0;
        lVar5 = 0;
        puVar12 = puVar9;
        goto LAB_00cf4648;
      }
      if (puVar16[uVar19] < puVar9[uVar19]) goto LAB_00cf4640;
    } while (puVar16[uVar19] <= puVar9[uVar19]);
    lVar5 = (long)puVar17 - (long)puVar10 >> 2;
    bVar7 = 1;
    puVar12 = puVar16;
    puVar16 = puVar9;
LAB_00cf4648:
    lVar14 = -2;
    if ((puVar12[uVar20 - 1] | puVar12[uVar20 - 2]) != 0) {
      lVar14 = 0;
    }
    uVar20 = lVar14 + uVar20;
    if (uVar20 != 0) {
      lVar14 = 0;
      uVar19 = 0;
      do {
        uVar18 = uVar19 + 2;
        puVar9 = puVar12 + uVar19;
        lVar14 = (lVar14 + (ulong)*puVar9) - (ulong)puVar16[uVar19];
        *puVar9 = (uint)lVar14;
        lVar15 = ((ulong)puVar9[1] - (ulong)(puVar16 + uVar19)[1]) + (lVar14 >> 0x3f);
        lVar14 = lVar15 >> 0x3f;
        puVar9[1] = (uint)lVar15;
        uVar19 = uVar18;
      } while (uVar18 < uVar20);
    }
    param_2 = puVar17 + -lVar5;
    if (uVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar19 = 0;
      uVar18 = 0;
      puVar9 = puVar10 + lVar5 + 1;
      puVar17 = puVar17 + (1 - lVar5);
      do {
        uVar19 = uVar19 + 2;
        uVar18 = uVar18 + puVar17[-1] + (ulong)puVar9[-1];
        puVar17[-1] = (uint)uVar18;
        uVar1 = (ulong)*puVar17 + (uVar18 >> 0x20) + (ulong)*puVar9;
        uVar18 = uVar1 >> 0x20;
        *puVar17 = (uint)uVar1;
        puVar9 = puVar9 + 2;
        puVar17 = puVar17 + 2;
      } while (uVar19 < uVar6);
    }
    puVar10 = puVar10 + lVar5;
    bVar4 = (bool)(bVar4 ^ bVar7);
    uVar19 = uVar6 + (uint)((int)uVar18 << 1);
    param_2[uVar6] = param_2[uVar6] + (int)uVar18;
    bVar3 = uVar20 == 0;
    uVar8 = *puVar12;
    lVar5 = -4;
    if (bVar3) {
      lVar5 = 0;
    }
    if (uVar8 != 0) goto LAB_00cf4550;
LAB_00cf4710:
    uVar18 = (ulong)!bVar3;
    uVar6 = uVar20;
    do {
      do {
        if (uVar6 == 0) {
          if (param_6 != 0) {
            memset(param_1,0,__n);
          }
          return 0;
        }
      } while ((puVar12[uVar6 - 2] == 0) &&
              (lVar14 = uVar6 - 1, uVar6 = uVar6 - 2, puVar12[lVar14] == 0));
      if (uVar20 != 0) {
        if (uVar20 != 1) {
          lVar14 = 0;
          lVar15 = 1;
          puVar9 = puVar12;
          lVar11 = uVar20 - uVar18;
          do {
            puVar17 = puVar12 + lVar15;
            lVar14 = lVar14 + 1;
            lVar15 = lVar14 + uVar18;
            lVar11 = lVar11 + -1;
            *puVar9 = *puVar17;
            puVar9 = puVar9 + 1;
          } while (lVar11 != 0);
        }
        memset((void *)((long)puVar12 + lVar5 + uVar20 * 4),0,uVar18 << 2);
      }
      uVar19 = uVar19 + (ulong)(puVar10[uVar19 - 1] != 0) * 2;
      uVar6 = uVar19;
      if (uVar19 != 0) {
        while (uVar6 = uVar6 - 1, (uVar19 != 0) <= uVar6) {
          puVar10[uVar6] = puVar10[uVar6 - (uVar19 != 0)];
        }
        *puVar10 = 0;
      }
      uVar8 = *puVar12;
      iVar21 = iVar21 + 0x20;
      uVar6 = uVar20;
    } while (uVar8 == 0);
    uVar13 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    lVar5 = LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
    iVar21 = (uint)lVar5 + iVar21;
    uVar8 = uVar8 >> (ulong)((uint)lVar5 & 0x1f);
    puVar9 = puVar12;
    puVar17 = param_2;
  } while( true );
}


