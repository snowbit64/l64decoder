// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyCellRow
// Entry Point: 0098cdbc
// Size: 532 bytes
// Signature: undefined __thiscall copyCellRow(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5)


/* PlayerCenteredCollisionHeightmap::copyCellRow(unsigned int, unsigned int, int, unsigned int,
   unsigned int) */

void __thiscall
PlayerCenteredCollisionHeightmap::copyCellRow
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2,int param_3,uint param_4
          ,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar5 = *(long *)(this + 0x30);
  uVar11 = (ulong)(*(int *)this * param_5);
  uVar7 = (ulong)(*(int *)this * param_4);
  lVar1 = lVar5 + uVar11 * 8;
  if ((param_3 < 1) && (param_4 == param_5)) {
    if (param_1 < param_2) {
      uVar9 = (ulong)param_2;
      uVar16 = ~param_1 + param_2;
      uVar14 = (ulong)uVar16;
      if ((2 < uVar16) && (uVar4 = (param_3 + param_2) - 1, uVar16 <= uVar4)) {
        uVar16 = param_2 - 1;
        uVar13 = lVar5 + (uVar7 + uVar16) * 8;
        if ((uVar13 + uVar14 * -8 <= uVar13) &&
           (uVar13 = lVar5 + (uVar11 + uVar4) * 8, uVar13 + uVar14 * -8 <= uVar13)) {
          lVar10 = uVar7 + uVar16;
          lVar3 = uVar11 + ((param_3 + param_2) - 1);
          if ((lVar5 + lVar3 * 8 + 8U <= lVar5 + (lVar10 - (ulong)(uVar16 - param_1)) * 8) ||
             (lVar5 + lVar10 * 8 + 8U <= lVar5 + (lVar3 - (ulong)(uVar16 - param_1)) * 8)) {
            uVar15 = uVar14 + 1 & 0x1fffffffc;
            uVar13 = uVar9 - uVar15;
            uVar11 = uVar15;
            do {
              iVar8 = (int)uVar9;
              uVar9 = uVar9 - 4;
              uVar11 = uVar11 - 4;
              puVar6 = (undefined8 *)(lVar1 + (ulong)(uint)(param_3 + -1 + iVar8) * 8);
              puVar2 = (undefined8 *)(lVar5 + uVar7 * 8 + (ulong)(iVar8 - 1) * 8);
              uVar17 = puVar6[-1];
              uVar19 = puVar6[-2];
              uVar18 = puVar6[-3];
              *puVar2 = *puVar6;
              puVar2[-1] = uVar17;
              puVar2[-2] = uVar19;
              puVar2[-3] = uVar18;
            } while (uVar11 != 0);
            uVar9 = uVar13;
            if (uVar14 + 1 == uVar15) {
              return;
            }
          }
        }
      }
      puVar6 = (undefined8 *)(lVar5 + (uVar7 + ((int)uVar9 - 1)) * 8);
      do {
        iVar8 = (int)uVar9;
        uVar16 = iVar8 - 1;
        uVar9 = (ulong)uVar16;
        *puVar6 = *(undefined8 *)(lVar1 + (ulong)(uint)(param_3 + -1 + iVar8) * 8);
        puVar6 = puVar6 + -1;
      } while (param_1 < uVar16);
    }
  }
  else if (param_1 < param_2) {
    uVar9 = (ulong)param_1;
    uVar14 = (ulong)param_2;
    uVar13 = uVar14 - uVar9;
    if (3 < uVar13) {
      uVar16 = param_3 + param_1;
      if ((!CARRY4(uVar16,(uint)(~uVar9 + uVar14))) && (~uVar9 + uVar14 >> 0x20 == 0)) {
        uVar15 = lVar5 + (uVar9 + uVar7) * 8;
        if ((lVar5 + ((uVar14 + uVar11 + (ulong)(param_3 + param_1)) - uVar9) * 8 <= uVar15) ||
           (lVar5 + (uVar14 + uVar7) * 8 <= lVar5 + (uVar11 + (param_3 + param_1)) * 8)) {
          uVar12 = uVar13 & 0xfffffffffffffffc;
          puVar6 = (undefined8 *)(uVar15 + 0x10);
          uVar9 = uVar12 + uVar9;
          uVar11 = uVar12;
          do {
            puVar2 = (undefined8 *)(lVar1 + (ulong)uVar16 * 8);
            uVar16 = uVar16 + 4;
            uVar11 = uVar11 - 4;
            uVar17 = *puVar2;
            uVar19 = puVar2[3];
            uVar18 = puVar2[2];
            puVar6[-1] = puVar2[1];
            puVar6[-2] = uVar17;
            puVar6[1] = uVar19;
            *puVar6 = uVar18;
            puVar6 = puVar6 + 4;
          } while (uVar11 != 0);
          if (uVar13 == uVar12) {
            return;
          }
        }
      }
    }
    uVar16 = param_3 + (int)uVar9;
    lVar10 = uVar14 - uVar9;
    puVar6 = (undefined8 *)(lVar5 + (uVar9 + uVar7) * 8);
    do {
      uVar7 = (ulong)uVar16;
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + -1;
      *puVar6 = *(undefined8 *)(lVar1 + uVar7 * 8);
      puVar6 = puVar6 + 1;
    } while (lVar10 != 0);
  }
  return;
}


