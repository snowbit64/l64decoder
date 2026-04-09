// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC1
// Entry Point: 00a8bce4
// Size: 992 bytes
// Signature: undefined __cdecl decodeBC1(uchar * param_1, uint param_2, uint param_3, uchar * param_4)


/* DXTUtil::decodeBC1(unsigned char const*, unsigned int, unsigned int, unsigned char*) */

void DXTUtil::decodeBC1(uchar *param_1,uint param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint local_8c;
  ulong local_88;
  
  if (3 < param_3) {
    uVar9 = param_2 >> 2;
    uVar8 = uVar9;
    if (uVar9 < 2) {
      uVar8 = 1;
    }
    local_88 = 0;
    local_8c = 0xb;
    do {
      if (3 < param_2) {
        uVar22 = 0;
        uVar21 = local_8c;
        do {
          puVar2 = (ushort *)(param_1 + (uVar9 * (int)local_88 + (int)uVar22) * 8);
          uVar17 = puVar2[1];
          uVar18 = *puVar2;
          uVar7 = *(byte *)(puVar2 + 1) & 0x1f;
          uVar15 = uVar7 * 8;
          uVar3 = *(byte *)((long)puVar2 + 3) & 0xf8;
          uVar16 = (*(byte *)puVar2 & 0x1f) * 8;
          uVar4 = uVar17 >> 3 & 0xfc;
          uVar24 = (ulong)*(int *)(puVar2 + 2);
          uVar5 = *(byte *)((long)puVar2 + 1) & 0xf8;
          uVar6 = uVar18 >> 3 & 0xfc;
          uVar10 = (uVar16 + uVar7 * 0x10) / 3;
          uVar11 = (uVar5 + uVar3 * 2) / 3;
          uVar12 = (uVar6 + uVar4 * 2) / 3;
          uVar7 = (uVar15 + (*(byte *)puVar2 & 0x1f) * 0x10) / 3;
          uVar19 = (uVar3 + uVar5 * 2) / 3;
          uVar20 = (uVar4 + uVar6 * 2) / 3;
          if (uVar18 <= uVar17) {
            uVar7 = uVar15 + uVar16 >> 1;
            uVar19 = uVar3 + uVar5 >> 1;
            uVar20 = uVar4 + uVar6 >> 1;
          }
          lVar23 = 4;
          uVar1 = uVar21;
          do {
            uVar25 = uVar5;
            uVar26 = uVar6;
            uVar27 = uVar16;
            switch(uVar24 & 3) {
            case 1:
              uVar25 = uVar3;
              uVar26 = uVar4;
              uVar27 = uVar15;
              break;
            case 2:
              uVar25 = uVar19;
              uVar26 = uVar20;
              uVar27 = uVar7;
              break;
            case 3:
              uVar25 = uVar11;
              uVar26 = uVar12;
              uVar27 = uVar10;
              if (uVar18 <= uVar17) {
                uVar25 = 0;
                uVar26 = 0;
                uVar27 = 0;
              }
            }
            param_4[uVar1 - 0xb] = (uchar)uVar25;
            param_4[uVar1 - 10] = (uchar)uVar26;
            param_4[uVar1 - 9] = (uchar)uVar27;
            uVar25 = uVar5;
            uVar26 = uVar6;
            uVar27 = uVar16;
            switch(uVar24 >> 2 & 3) {
            case 1:
              uVar25 = uVar3;
              uVar26 = uVar4;
              uVar27 = uVar15;
              break;
            case 2:
              uVar25 = uVar19;
              uVar26 = uVar20;
              uVar27 = uVar7;
              break;
            case 3:
              uVar25 = uVar11;
              uVar26 = uVar12;
              uVar27 = uVar10;
              if (uVar18 <= uVar17) {
                uVar25 = 0;
                uVar26 = 0;
                uVar27 = 0;
              }
            }
            param_4[uVar1 - 8] = (uchar)uVar25;
            param_4[uVar1 - 7] = (uchar)uVar26;
            param_4[uVar1 - 6] = (uchar)uVar27;
            uVar25 = uVar5;
            uVar26 = uVar6;
            uVar27 = uVar16;
            switch(uVar24 >> 4 & 3) {
            case 1:
              uVar25 = uVar3;
              uVar26 = uVar4;
              uVar27 = uVar15;
              break;
            case 2:
              uVar25 = uVar19;
              uVar26 = uVar20;
              uVar27 = uVar7;
              break;
            case 3:
              uVar25 = uVar11;
              uVar26 = uVar12;
              uVar27 = uVar10;
              if (uVar18 <= uVar17) {
                uVar25 = 0;
                uVar26 = 0;
                uVar27 = 0;
              }
            }
            param_4[uVar1 - 5] = (uchar)uVar25;
            param_4[uVar1 - 4] = (uchar)uVar26;
            param_4[uVar1 - 3] = (uchar)uVar27;
            uVar25 = uVar16;
            uVar26 = uVar5;
            uVar27 = uVar6;
            switch(uVar24 >> 6 & 3) {
            case 1:
              uVar25 = uVar15;
              uVar26 = uVar3;
              uVar27 = uVar4;
              break;
            case 2:
              uVar25 = uVar7;
              uVar26 = uVar19;
              uVar27 = uVar20;
              break;
            case 3:
              uVar25 = uVar10;
              uVar26 = uVar11;
              uVar27 = uVar12;
              if (uVar18 <= uVar17) {
                uVar25 = 0;
                uVar26 = 0;
                uVar27 = 0;
              }
            }
            uVar13 = uVar1 - 2;
            uVar14 = uVar1 - 1;
            param_4[uVar1] = (uchar)uVar25;
            uVar24 = uVar24 >> 8;
            uVar1 = uVar1 + param_2 * 3;
            lVar23 = lVar23 + -1;
            param_4[uVar13] = (uchar)uVar26;
            param_4[uVar14] = (uchar)uVar27;
          } while (lVar23 != 0);
          uVar22 = uVar22 + 1;
          uVar21 = uVar21 + 0xc;
        } while (uVar22 != uVar8);
      }
      local_8c = local_8c + param_2 * 0xc;
      local_88 = local_88 + 1;
    } while (local_88 != param_3 >> 2);
  }
  return;
}


