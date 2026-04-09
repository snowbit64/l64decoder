// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyRegion
// Entry Point: 0098c174
// Size: 1400 bytes
// Signature: undefined __thiscall copyRegion(PlayerCenteredCollisionHeightmap * this, uint param_1, uint param_2, int param_3, uint param_4, uint param_5, int param_6)


/* PlayerCenteredCollisionHeightmap::copyRegion(unsigned int, unsigned int, int, unsigned int,
   unsigned int, int) */

void __thiscall
PlayerCenteredCollisionHeightmap::copyRegion
          (PlayerCenteredCollisionHeightmap *this,uint param_1,uint param_2,int param_3,uint param_4
          ,uint param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  if (param_6 < 1) {
    if (param_4 < param_5) {
      uVar7 = (ulong)(param_2 - 1);
      uVar12 = (ulong)(~param_1 + param_2);
      uVar3 = (param_3 + param_2) - 1;
      uVar14 = (ulong)uVar3;
      uVar21 = (ulong)param_1;
      uVar24 = (ulong)param_2;
      uVar2 = param_3 + param_1;
      uVar18 = uVar24 - uVar21;
      uVar20 = uVar18 & 0xfffffffffffffffc;
      uVar5 = (param_2 - 1) - param_1;
      iVar15 = param_5 - 1;
      uVar6 = uVar12 + 1 & 0x1fffffffc;
      uVar22 = param_5;
      do {
        uVar22 = uVar22 - 1;
        iVar8 = *(int *)this;
        lVar17 = *(long *)(this + 0x30);
        uVar26 = (ulong)(iVar8 * (uVar22 + param_6));
        uVar23 = (ulong)(iVar8 * uVar22);
        lVar9 = lVar17 + uVar26 * 8;
        if (0 < param_3 || param_6 != 0) {
          if (param_1 < param_2) {
            uVar27 = uVar21;
            if (((byte)(uVar18 < 4 |
                       CARRY4(uVar2,(uint)(~uVar21 + uVar24)) | ~uVar21 + uVar24 >> 0x20 != 0) == 0)
               && ((lVar17 + uVar21 * -8 + (uVar24 + uVar2 + uVar26) * 8 <=
                    lVar17 + uVar21 * 8 + uVar23 * 8 ||
                   (lVar17 + (uVar24 + uVar23) * 8 <= lVar17 + (ulong)uVar2 * 8 + uVar26 * 8)))) {
              puVar10 = (undefined8 *)
                        (lVar17 + (uVar21 + 2) * 8 + (ulong)(uint)(iVar8 * iVar15) * 8);
              uVar23 = uVar20;
              uVar25 = uVar2;
              do {
                puVar13 = (undefined8 *)(lVar9 + (ulong)uVar25 * 8);
                uVar25 = uVar25 + 4;
                uVar23 = uVar23 - 4;
                uVar11 = *puVar13;
                uVar29 = puVar13[3];
                uVar28 = puVar13[2];
                puVar10[-1] = puVar13[1];
                puVar10[-2] = uVar11;
                puVar10[1] = uVar29;
                *puVar10 = uVar28;
                puVar10 = puVar10 + 4;
              } while (uVar23 != 0);
              uVar27 = uVar20 + uVar21;
              if (uVar18 == uVar20) goto LAB_0098c400;
            }
            lVar19 = uVar24 - uVar27;
            uVar25 = param_3 + (int)uVar27;
            puVar10 = (undefined8 *)(lVar17 + (uVar27 + (uint)(iVar8 * iVar15)) * 8);
            do {
              uVar23 = (ulong)uVar25;
              lVar19 = lVar19 + -1;
              uVar25 = uVar25 + 1;
              *puVar10 = *(undefined8 *)(lVar9 + uVar23 * 8);
              puVar10 = puVar10 + 1;
            } while (lVar19 != 0);
          }
        }
        else if (param_1 < param_2) {
          uVar27 = uVar24;
          if ((((2 < ~param_1 + param_2) && (uVar5 <= uVar3)) &&
              (uVar4 = lVar17 + uVar7 * 8 + uVar23 * 8, uVar4 + (ulong)uVar5 * -8 <= uVar4)) &&
             (uVar4 = lVar17 + uVar14 * 8 + uVar26 * 8, uVar4 + (ulong)uVar5 * -8 <= uVar4)) {
            if ((lVar17 + (uVar14 + 1) * 8 + uVar26 * 8 <=
                 lVar17 + (uVar7 - uVar12) * 8 + uVar23 * 8) ||
               (lVar17 + (uVar7 + 1) * 8 + uVar23 * 8 <= lVar17 + (uVar14 - uVar12) * 8 + uVar26 * 8
               )) {
              uVar26 = uVar6;
              do {
                iVar16 = (int)uVar27;
                uVar27 = uVar27 - 4;
                uVar26 = uVar26 - 4;
                puVar10 = (undefined8 *)(lVar9 + (ulong)(uint)(param_3 + -1 + iVar16) * 8);
                puVar13 = (undefined8 *)(lVar17 + uVar23 * 8 + (ulong)(iVar16 - 1) * 8);
                uVar11 = puVar10[-1];
                uVar29 = puVar10[-2];
                uVar28 = puVar10[-3];
                *puVar13 = *puVar10;
                puVar13[-1] = uVar11;
                puVar13[-2] = uVar29;
                puVar13[-3] = uVar28;
              } while (uVar26 != 0);
              uVar27 = uVar24 - uVar6;
              if (uVar12 + 1 == uVar6) goto LAB_0098c400;
            }
          }
          puVar10 = (undefined8 *)
                    (lVar17 + ((ulong)(uint)(iVar8 * iVar15) + (ulong)((int)uVar27 - 1)) * 8);
          do {
            iVar8 = (int)uVar27;
            uVar25 = iVar8 - 1;
            uVar27 = (ulong)uVar25;
            *puVar10 = *(undefined8 *)(lVar9 + (ulong)(uint)(param_3 + -1 + iVar8) * 8);
            puVar10 = puVar10 + -1;
          } while (param_1 < uVar25);
        }
LAB_0098c400:
        iVar15 = iVar15 + -1;
      } while (param_4 < uVar22);
    }
    if ((int)param_4 <= (int)param_5) {
      lVar9 = (long)(int)param_2;
      iVar15 = param_6 + param_5;
      do {
        iVar8 = *(int *)(this + 8);
        lVar17 = *(long *)(this + 0x28);
        if (0 < param_3 || param_6 != 0) {
          if (param_1 <= param_2) {
            uVar6 = (ulong)param_1;
            do {
              iVar16 = (int)uVar6;
              puVar13 = (undefined8 *)(lVar17 + (ulong)(iVar8 * param_5) * 0xc + uVar6 * 0xc);
              uVar2 = iVar16 + 1;
              uVar6 = (ulong)uVar2;
              puVar10 = (undefined8 *)
                        (lVar17 + (ulong)(iVar8 * (param_5 + param_6)) * 0xc +
                        (ulong)(uint)(param_3 + iVar16) * 0xc);
              uVar11 = *puVar10;
              *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
              *puVar13 = uVar11;
            } while (uVar2 <= param_2);
          }
        }
        else if ((int)param_1 <= (int)param_2) {
          puVar10 = (undefined8 *)(lVar17 + lVar9 * 0xc + (ulong)(iVar8 * param_5) * 0xc);
          puVar13 = (undefined8 *)
                    (lVar17 + (param_3 + lVar9) * 0xc + (ulong)(uint)(iVar8 * iVar15) * 0xc);
          lVar17 = lVar9 + 1;
          do {
            lVar17 = lVar17 + -1;
            uVar11 = *puVar13;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar13 + 1);
            *puVar10 = uVar11;
            puVar10 = (undefined8 *)((long)puVar10 + -0xc);
            puVar13 = (undefined8 *)((long)puVar13 + -0xc);
          } while ((int)param_1 < lVar17);
        }
        iVar15 = iVar15 + -1;
        bVar1 = (int)param_4 < (int)param_5;
        param_5 = param_5 - 1;
      } while (bVar1);
    }
  }
  else {
    if (param_4 < param_5) {
      uVar6 = (ulong)param_1;
      uVar7 = (ulong)param_2;
      uVar3 = param_3 + param_1;
      uVar12 = uVar7 - uVar6;
      uVar14 = uVar12 & 0xfffffffffffffffc;
      uVar2 = param_4;
      do {
        if (param_1 < param_2) {
          lVar17 = *(long *)(this + 0x30);
          uVar20 = (ulong)(*(int *)this * (uVar2 + param_6));
          uVar18 = (ulong)(*(int *)this * uVar2);
          lVar9 = lVar17 + uVar20 * 8;
          uVar21 = uVar6;
          if (((byte)(uVar12 < 4 |
                     CARRY4(uVar3,(uint)(~uVar6 + uVar7)) | ~uVar6 + uVar7 >> 0x20 != 0) == 0) &&
             ((lVar17 + uVar6 * -8 + (uVar7 + uVar3 + uVar20) * 8 <= lVar17 + uVar6 * 8 + uVar18 * 8
              || (lVar17 + (uVar7 + uVar18) * 8 <= lVar17 + (ulong)uVar3 * 8 + uVar20 * 8)))) {
            puVar10 = (undefined8 *)(lVar17 + (uVar6 + 2) * 8 + uVar18 * 8);
            uVar21 = uVar14;
            uVar22 = uVar3;
            do {
              puVar13 = (undefined8 *)(lVar9 + (ulong)uVar22 * 8);
              uVar22 = uVar22 + 4;
              uVar21 = uVar21 - 4;
              uVar11 = *puVar13;
              uVar29 = puVar13[3];
              uVar28 = puVar13[2];
              puVar10[-1] = puVar13[1];
              puVar10[-2] = uVar11;
              puVar10[1] = uVar29;
              *puVar10 = uVar28;
              puVar10 = puVar10 + 4;
            } while (uVar21 != 0);
            uVar21 = uVar14 + uVar6;
            if (uVar12 == uVar14) goto LAB_0098c1f0;
          }
          lVar19 = uVar7 - uVar21;
          uVar22 = param_3 + (int)uVar21;
          puVar10 = (undefined8 *)(lVar17 + (uVar21 + uVar18) * 8);
          do {
            uVar21 = (ulong)uVar22;
            lVar19 = lVar19 + -1;
            uVar22 = uVar22 + 1;
            *puVar10 = *(undefined8 *)(lVar9 + uVar21 * 8);
            puVar10 = puVar10 + 1;
          } while (lVar19 != 0);
        }
LAB_0098c1f0:
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_5);
    }
    if (param_4 <= param_5) {
      do {
        if (param_1 <= param_2) {
          iVar15 = *(int *)(this + 8);
          lVar9 = *(long *)(this + 0x28);
          uVar6 = (ulong)param_1;
          do {
            iVar8 = (int)uVar6;
            puVar13 = (undefined8 *)(lVar9 + (ulong)(iVar15 * param_4) * 0xc + uVar6 * 0xc);
            uVar2 = iVar8 + 1;
            uVar6 = (ulong)uVar2;
            puVar10 = (undefined8 *)
                      (lVar9 + (ulong)(iVar15 * (param_4 + param_6)) * 0xc +
                      (ulong)(uint)(param_3 + iVar8) * 0xc);
            uVar11 = *puVar10;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
            *puVar13 = uVar11;
          } while (uVar2 <= param_2);
        }
        param_4 = param_4 + 1;
      } while (param_4 <= param_5);
    }
  }
  return;
}


