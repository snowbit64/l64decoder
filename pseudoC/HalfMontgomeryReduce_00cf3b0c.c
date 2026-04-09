// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HalfMontgomeryReduce
// Entry Point: 00cf3b0c
// Size: 1140 bytes
// Signature: undefined __cdecl HalfMontgomeryReduce(uint * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, ulong param_7)


/* CryptoPP::HalfMontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int const*, unsigned long) */

void CryptoPP::HalfMontgomeryReduce
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               ulong param_7)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  
  uVar13 = param_7 >> 1;
  puVar2 = param_2 + param_7;
  RecursiveMultiply(param_2,puVar2,param_6,param_3 + param_7 + uVar13,uVar13);
  if (param_7 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar9 = 0;
    do {
      uVar1 = uVar9 + 2;
      puVar12 = param_2 + uVar9;
      uVar17 = uVar17 + *puVar12 + (ulong)param_3[uVar9];
      *puVar12 = (uint)uVar17;
      uVar9 = (ulong)puVar12[1] + (uVar17 >> 0x20) + (ulong)(param_3 + uVar9)[1];
      uVar17 = uVar9 >> 0x20;
      puVar12[1] = (uint)uVar9;
      uVar9 = uVar1;
    } while (uVar1 < param_7);
  }
  iVar16 = (int)uVar17;
  puVar12 = puVar2 + uVar13;
  RecursiveMultiplyBottom(puVar12,puVar2,param_2,param_5,uVar13);
  MultiplyTop(puVar2,param_1,param_2,puVar12,param_4,uVar13);
  if (param_7 < 2) {
    RecursiveMultiply(param_2,param_1,puVar12,param_4 + uVar13,uVar13);
    lVar15 = 0;
  }
  else {
    uVar17 = 0;
    lVar15 = 0;
    puVar8 = param_2 + uVar13 + 1;
    puVar11 = param_2 + param_7 + 1;
    do {
      uVar17 = uVar17 + 2;
      lVar15 = (lVar15 + (ulong)puVar8[-1]) - (ulong)puVar11[-1];
      puVar11[-1] = (uint)lVar15;
      lVar6 = ((ulong)*puVar8 - (ulong)*puVar11) + (lVar15 >> 0x3f);
      lVar15 = lVar6 >> 0x3f;
      *puVar11 = (uint)lVar6;
      puVar8 = puVar8 + 2;
      puVar11 = puVar11 + 2;
    } while (uVar17 < uVar13);
    RecursiveMultiply(param_2,param_1,puVar12,param_4 + uVar13,uVar13);
    lVar15 = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17 + 2;
      puVar12 = param_2 + uVar17;
      lVar15 = (lVar15 + (ulong)param_2[param_7 + uVar17]) - (ulong)*puVar12;
      *puVar12 = (uint)lVar15;
      lVar3 = ((ulong)(param_2 + param_7 + uVar17)[1] - (ulong)puVar12[1]) + (lVar15 >> 0x3f);
      lVar15 = lVar3 >> 0x3f;
      puVar12[1] = (uint)lVar3;
      uVar17 = uVar9;
    } while (uVar9 < uVar13);
    uVar17 = 0;
    lVar15 = 0;
    puVar12 = param_2 + uVar13 + 1;
    puVar8 = param_3 + param_7 + 1;
    do {
      uVar17 = uVar17 + 2;
      lVar15 = (lVar15 + (ulong)puVar8[-1]) - (ulong)puVar12[-1];
      puVar12[-1] = (uint)lVar15;
      lVar4 = ((ulong)*puVar8 - (ulong)*puVar12) + (lVar15 >> 0x3f);
      lVar15 = lVar4 >> 0x3f;
      *puVar12 = (uint)lVar4;
      puVar12 = puVar12 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar17 < uVar13);
    iVar16 = iVar16 + (int)(lVar6 >> 0x3f) + (int)(lVar3 >> 0x3f);
  }
  RecursiveMultiply(param_1,puVar2,param_6 + uVar13,param_3 + param_7 + uVar13,uVar13);
  iVar14 = (int)lVar15;
  if (param_7 != 0) {
    uVar9 = 0;
    uVar17 = 0;
    do {
      uVar1 = uVar17 + 2;
      puVar2 = param_1 + uVar17;
      uVar9 = uVar9 + *puVar2 + (ulong)param_2[uVar17];
      *puVar2 = (uint)uVar9;
      uVar5 = (ulong)puVar2[1] + (uVar9 >> 0x20) + (ulong)(param_2 + uVar17)[1];
      uVar9 = uVar5 >> 0x20;
      puVar2[1] = (uint)uVar5;
      uVar17 = uVar1;
    } while (uVar1 < param_7);
    iVar14 = (int)(uVar5 >> 0x20) + iVar14;
  }
  if (iVar16 < 1) {
    if (iVar16 < 0) {
      puVar2 = param_1 + uVar13;
      iVar10 = 0;
      uVar7 = *puVar2;
      *puVar2 = uVar7 + iVar16;
      if (uVar7 < (uint)-iVar16) {
        if (3 < param_7) {
          uVar17 = 1;
          do {
            uVar7 = puVar2[uVar17];
            puVar2[uVar17] = uVar7 - 1;
            if (uVar7 != 0) goto joined_r0x00cf3f78;
            uVar17 = (ulong)((int)uVar17 + 1);
          } while (uVar17 < uVar13);
          iVar14 = iVar14 + -1;
          goto joined_r0x00cf3f78;
        }
        iVar10 = -1;
      }
      iVar14 = iVar10 + iVar14;
    }
  }
  else {
    puVar2 = param_1 + uVar13;
    uVar7 = *puVar2;
    *puVar2 = uVar7 + 1;
    if (uVar7 == 0xffffffff) {
      if (param_7 < 4) {
        iVar14 = iVar14 + 1;
      }
      else {
        uVar17 = 1;
        do {
          uVar7 = puVar2[uVar17];
          puVar2[uVar17] = uVar7 + 1;
          if (uVar7 != 0xffffffff) goto joined_r0x00cf3f78;
          uVar17 = (ulong)((int)uVar17 + 1);
        } while (uVar17 < uVar13);
        iVar14 = iVar14 + 1;
      }
    }
  }
joined_r0x00cf3f78:
  if (iVar14 < 1) {
    if ((param_7 != 0) && (iVar14 != 0)) {
      uVar17 = 0;
      uVar13 = 0;
      do {
        uVar9 = uVar13 + 2;
        puVar2 = param_1 + uVar13;
        uVar17 = uVar17 + *puVar2 + (ulong)param_4[uVar13];
        *puVar2 = (uint)uVar17;
        uVar13 = (ulong)puVar2[1] + (uVar17 >> 0x20) + (ulong)(param_4 + uVar13)[1];
        uVar17 = uVar13 >> 0x20;
        puVar2[1] = (uint)uVar13;
        uVar13 = uVar9;
      } while (uVar9 < param_7);
    }
  }
  else if (param_7 != 0) {
    lVar15 = 0;
    uVar13 = 0;
    do {
      uVar17 = uVar13 + 2;
      puVar2 = param_1 + uVar13;
      lVar15 = (lVar15 + (ulong)*puVar2) - (ulong)param_4[uVar13];
      *puVar2 = (uint)lVar15;
      lVar6 = ((ulong)puVar2[1] - (ulong)(param_4 + uVar13)[1]) + (lVar15 >> 0x3f);
      lVar15 = lVar6 >> 0x3f;
      puVar2[1] = (uint)lVar6;
      uVar13 = uVar17;
    } while (uVar17 < param_7);
  }
  return;
}


