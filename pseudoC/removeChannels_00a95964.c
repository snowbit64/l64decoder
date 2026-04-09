// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChannels
// Entry Point: 00a95964
// Size: 620 bytes
// Signature: undefined __cdecl removeChannels(ImageDesc * param_1, uchar * param_2, bool param_3, bool param_4, bool param_5, bool param_6)


/* ImageUtil::removeChannels(ImageDesc const&, unsigned char*, bool, bool, bool, bool) */

undefined8
ImageUtil::removeChannels
          (ImageDesc *param_1,uchar *param_2,bool param_3,bool param_4,bool param_5,bool param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uchar *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  
  if (0xfffffffa < *(int *)(param_1 + 0x40) - 7U) {
    uVar19 = (ulong)*(uint *)(param_1 + 0x14);
    lVar20 = *(long *)(param_1 + 0x28);
    uVar1 = (uint)(2 < uVar19 && param_5);
    uVar2 = (uint)(3 < uVar19 && param_6);
    uVar3 = (uint)(1 < uVar19 && param_4);
    if ((((param_3) || (uVar3 != 0)) || (uVar1 != 0)) || (uVar2 != 0)) {
      if (*(uint *)(param_1 + 0x14) == uVar3 + (param_3 & 1) + uVar1 + uVar2) {
        return 1;
      }
      uVar21 = *(uint *)(param_1 + 0x18);
      uVar12 = 0;
      bVar8 = false;
      if (uVar21 < 9) {
        bVar7 = true;
        if ((1 << (ulong)(uVar21 & 0x1f) & 0x78U) == 0) {
          uVar21 = 1 << (ulong)(uVar21 & 0x1f);
          if ((uVar21 & 6) == 0) {
            if ((uVar21 & 0x180) == 0) {
              return 0;
            }
            bVar7 = false;
            bVar8 = false;
            uVar21 = 4;
          }
          else {
            uVar21 = 1;
          }
        }
        else {
          bVar7 = false;
          uVar21 = 2;
          bVar8 = true;
        }
        uVar13 = *(uint *)param_1;
        uVar14 = *(uint *)(param_1 + 4);
        uVar22 = 0;
        iVar18 = 0;
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        do {
          uVar4 = uVar13 >> 1;
          uVar5 = uVar14 >> 1;
          iVar18 = iVar18 + uVar21 * uVar13 * uVar14;
          uVar6 = uVar21 >> 1;
          if (uVar5 + uVar4 + uVar6 == 0) break;
          uVar22 = uVar22 + 1;
          if (uVar13 < 2) {
            uVar4 = 1;
          }
          if (uVar14 < 2) {
            uVar5 = 1;
          }
          if (uVar21 < 2) {
            uVar6 = 1;
          }
          uVar13 = uVar4;
          uVar14 = uVar5;
          uVar21 = uVar6;
        } while (uVar22 <= *(uint *)(param_1 + 0x10));
        if (bVar7) {
          puVar15 = (uchar *)(lVar20 + 3);
          do {
            puVar9 = param_2;
            if (param_3) {
              *param_2 = puVar15[-3];
              puVar9 = param_2 + 1;
            }
            if (uVar3 != 0) {
              *puVar9 = puVar15[-2];
              puVar9 = puVar9 + 1;
            }
            if (uVar1 != 0) {
              *puVar9 = puVar15[-1];
              puVar9 = puVar9 + 1;
            }
            param_2 = puVar9;
            if (uVar2 != 0) {
              param_2 = puVar9 + 1;
              *puVar9 = *puVar15;
            }
            iVar18 = iVar18 + -1;
            puVar15 = puVar15 + uVar19;
          } while (iVar18 != 0);
          return 1;
        }
        if (bVar8) {
          puVar16 = (undefined2 *)(lVar20 + 4);
          uVar12 = 1;
          do {
            puVar11 = (undefined2 *)param_2;
            if (param_3) {
              *(undefined2 *)param_2 = puVar16[-2];
              puVar11 = (undefined2 *)((long)param_2 + 2);
            }
            if (uVar3 != 0) {
              *puVar11 = puVar16[-1];
              puVar11 = puVar11 + 1;
            }
            if (uVar1 != 0) {
              *puVar11 = *puVar16;
              puVar11 = puVar11 + 1;
            }
            param_2 = (uchar *)puVar11;
            if (uVar2 != 0) {
              param_2 = (uchar *)(puVar11 + 1);
              *puVar11 = puVar16[1];
            }
            iVar18 = iVar18 + -1;
            puVar16 = puVar16 + uVar19;
          } while (iVar18 != 0);
        }
        else {
          puVar17 = (undefined4 *)(lVar20 + 8);
          uVar12 = 1;
          do {
            puVar10 = (undefined4 *)param_2;
            if (param_3) {
              *(undefined4 *)param_2 = puVar17[-2];
              puVar10 = (undefined4 *)((long)param_2 + 4);
            }
            if (uVar3 != 0) {
              *puVar10 = puVar17[-1];
              puVar10 = puVar10 + 1;
            }
            if (uVar1 != 0) {
              *puVar10 = *puVar17;
              puVar10 = puVar10 + 1;
            }
            param_2 = (uchar *)puVar10;
            if (uVar2 != 0) {
              param_2 = (uchar *)(puVar10 + 1);
              *puVar10 = puVar17[1];
            }
            iVar18 = iVar18 + -1;
            puVar17 = puVar17 + uVar19;
          } while (iVar18 != 0);
        }
      }
      return uVar12;
    }
  }
  return 0;
}


