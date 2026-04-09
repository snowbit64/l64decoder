// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PositiveSubtract
// Entry Point: 00cfd3bc
// Size: 1016 bytes
// Signature: undefined __cdecl PositiveSubtract(Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::PositiveSubtract(CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer
   const&) */

void CryptoPP::PositiveSubtract(Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined4 uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar19 = *(ulong *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  uVar6 = uVar19 & 0xffffffff;
  lVar12 = 0;
  do {
    lVar7 = lVar12;
    uVar15 = (uint)uVar6;
    if (uVar19 + lVar7 == 0) break;
    uVar6 = (ulong)(uVar15 + 1);
    lVar12 = lVar7 + -1;
  } while (*(int *)(lVar3 + uVar19 * 4 + -4 + lVar7 * 4) == 0);
  uVar6 = *(ulong *)(param_3 + 0x18);
  lVar12 = *(long *)(param_3 + 0x20);
  iVar16 = (int)uVar19;
  uVar17 = iVar16 + (uVar15 & 1);
  uVar19 = (ulong)uVar17 + lVar7;
  iVar1 = -uVar17;
  uVar10 = uVar6 & 0xffffffff;
  uVar13 = uVar6 & 0xffffffff;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    uVar17 = (uint)uVar13;
    iVar18 = (int)uVar10;
    if (uVar6 + lVar9 == 0) break;
    uVar13 = (ulong)(uVar17 + 1);
    uVar10 = (ulong)(iVar18 - 1);
    lVar11 = lVar9 + -1;
  } while (*(int *)(lVar12 + uVar6 * 4 + -4 + lVar9 * 4) == 0);
  uVar20 = (int)uVar6 + (uVar17 & 1);
  iVar14 = (int)lVar7;
  if ((uint)((ulong)uVar20 + lVar9) < (uint)uVar19) {
    lVar7 = *(long *)(param_1 + 0x20);
    uVar19 = (ulong)uVar20 + lVar9 & 0xffffffff;
    if (-uVar20 == (int)lVar9) {
      uVar20 = 0;
    }
    else {
      uVar10 = 0;
      lVar11 = 0;
      puVar2 = (uint *)(lVar12 + 4);
      puVar8 = (undefined4 *)(lVar7 + 4);
      puVar5 = (uint *)(lVar3 + 4);
      do {
        uVar10 = uVar10 + 2;
        lVar12 = (lVar11 + (ulong)puVar5[-1]) - (ulong)puVar2[-1];
        puVar8[-1] = (int)lVar12;
        lVar12 = ((ulong)*puVar5 - (ulong)*puVar2) + (lVar12 >> 0x3f);
        lVar11 = lVar12 >> 0x3f;
        *puVar8 = (int)lVar12;
        puVar2 = puVar2 + 2;
        puVar8 = puVar8 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar10 < uVar19);
      uVar20 = (uint)((ulong)lVar12 >> 0x3f);
    }
    uVar6 = (ulong)(((iVar16 + (uVar15 & 1)) - ((int)uVar6 + (uVar17 & 1))) + iVar14) - lVar9;
    if (lVar7 != lVar3) {
      memcpy((void *)(lVar7 + uVar19 * 4),(void *)(lVar3 + uVar19 * 4),(uVar6 & 0xffffffff) << 2);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    puVar2 = (uint *)(lVar3 + uVar19 * 4);
    uVar15 = *puVar2;
    uVar4 = 0;
    *puVar2 = uVar15 - uVar20;
    if ((uVar15 < uVar20) && (uVar15 = (uint)uVar6, 1 < uVar15)) {
      uVar19 = 1;
      do {
        uVar17 = (int)uVar19 + 1;
        uVar20 = puVar2[uVar19];
        puVar2[uVar19] = uVar20 - 1;
        uVar19 = (ulong)uVar17;
      } while (uVar20 == 0 && uVar17 < uVar15);
LAB_00cfd68c:
      uVar4 = 0;
    }
  }
  else {
    if (((iVar16 + (uVar15 & 1)) - uVar20) + iVar14 == (int)lVar9) {
      lVar7 = (ulong)(iVar16 + (uVar15 & 1) + iVar14) << 2;
      do {
        if (lVar7 == 0) {
LAB_00cfd634:
          if (iVar1 != iVar14) {
            uVar6 = 0;
            lVar7 = 0;
            puVar2 = (uint *)(lVar3 + 4);
            puVar5 = (uint *)(lVar12 + 4);
            puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + 4);
            do {
              uVar6 = uVar6 + 2;
              lVar3 = (lVar7 + (ulong)puVar2[-1]) - (ulong)puVar5[-1];
              puVar8[-1] = (int)lVar3;
              lVar3 = ((ulong)*puVar2 - (ulong)*puVar5) + (lVar3 >> 0x3f);
              lVar7 = lVar3 >> 0x3f;
              *puVar8 = (int)lVar3;
              puVar2 = puVar2 + 2;
              puVar5 = puVar5 + 2;
              puVar8 = puVar8 + 2;
            } while (uVar6 < (uVar19 & 0xffffffff));
          }
          goto LAB_00cfd68c;
        }
        uVar15 = *(uint *)(lVar3 + -4 + lVar7);
        uVar17 = *(uint *)(lVar12 + -4 + lVar7);
        if (uVar17 < uVar15) goto LAB_00cfd634;
        lVar7 = lVar7 + -4;
      } while (uVar17 <= uVar15);
      if (iVar1 != iVar14) {
        uVar6 = 0;
        lVar7 = 0;
        puVar2 = (uint *)(lVar3 + 4);
        puVar5 = (uint *)(lVar12 + 4);
        puVar8 = (undefined4 *)(*(long *)(param_1 + 0x20) + 4);
        do {
          uVar6 = uVar6 + 2;
          lVar3 = (lVar7 + (ulong)puVar5[-1]) - (ulong)puVar2[-1];
          puVar8[-1] = (int)lVar3;
          lVar3 = ((ulong)*puVar5 - (ulong)*puVar2) + (lVar3 >> 0x3f);
          lVar7 = lVar3 >> 0x3f;
          *puVar8 = (int)lVar3;
          puVar2 = puVar2 + 2;
          puVar5 = puVar5 + 2;
          puVar8 = puVar8 + 2;
        } while (uVar6 < (uVar19 & 0xffffffff));
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
      uVar19 = uVar19 & 0xffffffff;
      if (iVar1 == iVar14) {
        uVar21 = 0;
        uVar20 = 0;
      }
      else {
        uVar6 = 0;
        lVar11 = 0;
        puVar2 = (uint *)(lVar3 + 4);
        puVar8 = (undefined4 *)(lVar7 + 4);
        puVar5 = (uint *)(lVar12 + 4);
        do {
          uVar6 = uVar6 + 2;
          lVar3 = (lVar11 + (ulong)puVar5[-1]) - (ulong)puVar2[-1];
          puVar8[-1] = (int)lVar3;
          lVar3 = ((ulong)*puVar5 - (ulong)*puVar2) + (lVar3 >> 0x3f);
          lVar11 = lVar3 >> 0x3f;
          *puVar8 = (int)lVar3;
          puVar2 = puVar2 + 2;
          puVar8 = puVar8 + 2;
          puVar5 = puVar5 + 2;
        } while (uVar6 < uVar19);
        uVar20 = (uint)((ulong)lVar3 >> 0x20);
        uVar21 = uVar20 >> 0x1f;
        uVar20 = uVar20 >> 0x1f;
      }
      if (lVar7 != lVar12) {
        memcpy((void *)(lVar7 + uVar19 * 4),(void *)(lVar12 + uVar19 * 4),
               (ulong)(((iVar18 + (uVar17 & 1)) - (iVar16 + (uVar15 & 1))) - iVar14) << 2);
        lVar12 = *(long *)(param_1 + 0x20);
        uVar20 = uVar21;
      }
      puVar2 = (uint *)(lVar12 + uVar19 * 4);
      uVar21 = *puVar2;
      uVar4 = 1;
      *puVar2 = uVar21 - uVar20;
      if ((uVar20 <= uVar21) || (((iVar18 + (uVar17 & 1)) - (iVar16 + (uVar15 & 1))) - iVar14 < 2))
      goto LAB_00cfd798;
      uVar19 = 1;
      do {
        uVar20 = (int)uVar19 + 1;
        uVar21 = puVar2[uVar19];
        puVar2[uVar19] = uVar21 - 1;
        uVar19 = (ulong)uVar20;
      } while (uVar21 == 0 && uVar20 < ((iVar18 + (uVar17 & 1)) - (iVar16 + (uVar15 & 1))) - iVar14)
      ;
    }
    uVar4 = 1;
  }
LAB_00cfd798:
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  return;
}


