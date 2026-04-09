// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateTriListIndex
// Entry Point: 008f1a5c
// Size: 532 bytes
// Signature: undefined __cdecl generateTriListIndex(uint param_1, uint param_2, ushort * * param_3)


/* GeoMipMappingTerrainPatch::generateTriListIndex(unsigned int, unsigned int, unsigned short*&) */

ulong GeoMipMappingTerrainPatch::generateTriListIndex(uint param_1,uint param_2,ushort **param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  
  do {
    uVar15 = param_1;
    uVar3 = 1 << (ulong)(uVar15 & 0x1f);
    param_1 = uVar15 - 1;
  } while (param_2 < uVar3);
  uVar6 = param_2 - 1 >> (ulong)(uVar15 & 0x1f);
  uVar23 = (ulong)(uVar6 * uVar6 * 6);
  puVar16 = (ushort *)operator_new__(uVar23 << 1);
  *param_3 = puVar16;
  if (uVar6 != 0) {
    uVar22 = 0;
    uVar2 = uVar6;
    do {
      uVar8 = uVar2 - 3;
      uVar24 = 0;
      uVar25 = uVar6;
      if (2 < uVar2) {
        uVar2 = 3;
      }
      do {
        uVar9 = uVar25 - 3;
        if (2 < uVar25) {
          uVar25 = 3;
        }
        if (uVar6 != uVar22) {
          uVar26 = 0;
          uVar1 = (ulong)(uVar25 - 1) + 1;
          iVar4 = uVar24 << (ulong)(uVar15 & 0x1f);
          uVar18 = uVar1 & 0x1fffffffe;
          iVar5 = (int)uVar18 << (ulong)(uVar15 & 0x1f);
          do {
            if (uVar6 != uVar24) {
              iVar21 = iVar4 + (uVar26 + uVar22 << (ulong)(uVar15 & 0x1f)) * param_2;
              iVar7 = iVar4 + (uVar26 + uVar22 + 1 << (ulong)(uVar15 & 0x1f)) * param_2;
              if (uVar25 - 1 == 0) {
                uVar28 = 0;
                puVar17 = puVar16;
                iVar19 = iVar7;
                iVar20 = iVar21;
              }
              else {
                uVar29 = 0;
                puVar17 = puVar16 + uVar18 * 6;
                iVar19 = iVar7 + iVar5;
                iVar20 = iVar21 + iVar5;
                puVar16 = puVar16 + 6;
                do {
                  iVar27 = (int)uVar29;
                  uVar29 = uVar29 + 2;
                  sVar13 = (short)(iVar27 << (ulong)(uVar15 & 0x1f));
                  uVar12 = (short)iVar21 + sVar13;
                  uVar14 = (short)iVar7 + sVar13;
                  sVar13 = (short)uVar3;
                  uVar10 = uVar12 + sVar13;
                  uVar11 = uVar14 + sVar13;
                  puVar16[-6] = uVar12;
                  puVar16[-5] = uVar14;
                  *puVar16 = uVar10;
                  puVar16[1] = uVar11;
                  puVar16[-4] = uVar10;
                  puVar16[2] = uVar10 + sVar13;
                  puVar16[-3] = uVar14;
                  puVar16[3] = uVar11;
                  puVar16[-2] = uVar11;
                  puVar16[4] = uVar11 + sVar13;
                  puVar16[-1] = uVar10;
                  puVar16[5] = uVar10 + sVar13;
                  puVar16 = puVar16 + 0xc;
                } while (uVar18 != uVar29);
                uVar28 = (uint)uVar1 & 0xfffffffe;
                puVar16 = puVar17;
                if (uVar1 == uVar18) goto LAB_008f1b48;
              }
              iVar21 = uVar25 - uVar28;
              do {
                *puVar17 = (ushort)iVar20;
                iVar20 = iVar20 + uVar3;
                puVar16 = puVar17 + 6;
                puVar17[1] = (ushort)iVar19;
                iVar21 = iVar21 + -1;
                puVar17[3] = (ushort)iVar19;
                puVar17[2] = (ushort)iVar20;
                puVar17[4] = (ushort)(iVar19 + uVar3);
                puVar17[5] = (ushort)iVar20;
                puVar17 = puVar16;
                iVar19 = iVar19 + uVar3;
              } while (iVar21 != 0);
            }
LAB_008f1b48:
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar2);
        }
        uVar24 = uVar24 + 3;
        uVar25 = uVar9;
      } while (uVar24 < uVar6);
      uVar22 = uVar22 + 3;
      uVar2 = uVar8;
    } while (uVar22 < uVar6);
  }
  return uVar23;
}


