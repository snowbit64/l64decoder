// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_check_palette_indexes
// Entry Point: 00dc46bc
// Size: 640 bytes
// Signature: undefined png_do_check_palette_indexes(void)


void png_do_check_palette_indexes(long param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  
  if ((*(ushort *)(param_1 + 0x290) != 0) &&
     ((int)(uint)*(ushort *)(param_1 + 0x290) < 1 << (ulong)(*(byte *)((long)param_2 + 0x11) & 0x1f)
     )) {
    pbVar4 = *(byte **)(param_1 + 0x260);
    lVar9 = *(long *)(param_2 + 2);
    uVar11 = -(*param_2 * (uint)*(byte *)((long)param_2 + 0x13)) & 7;
    pbVar5 = pbVar4 + lVar9 + -1;
    switch((uint)*(byte *)((long)param_2 + 0x11)) {
    case 1:
      if (pbVar4 < pbVar5) {
        if (*pbVar5 >> (ulong)uVar11 != 0) {
          *(undefined4 *)(param_1 + 0x294) = 1;
        }
        pbVar5 = pbVar4 + lVar9 + -2;
        if (pbVar4 < pbVar5) {
          uVar13 = lVar9 - 2;
          if (1 < uVar13) {
            uVar15 = uVar13 & 0xfffffffffffffffe;
            pbVar5 = pbVar5 + -uVar15;
            pbVar10 = pbVar4 + lVar9 + -3;
            uVar17 = uVar15;
            do {
              if ((pbVar10[1] | *pbVar10) != 0) {
                *(undefined4 *)(param_1 + 0x294) = 1;
              }
              pbVar10 = pbVar10 + -2;
              uVar17 = uVar17 - 2;
            } while (uVar17 != 0);
            if (uVar13 == uVar15) {
              return;
            }
          }
          do {
            if (*pbVar5 != 0) {
              *(undefined4 *)(param_1 + 0x294) = 1;
            }
            pbVar5 = pbVar5 + -1;
          } while (pbVar4 < pbVar5);
        }
      }
      break;
    case 2:
      if (pbVar4 < pbVar5) {
        uVar1 = *(uint *)(param_1 + 0x294);
        bVar2 = *pbVar5 >> (ulong)uVar11;
        uVar11 = bVar2 & 3;
        uVar3 = bVar2 >> 2 & 3;
        uVar6 = bVar2 >> 4 & 3;
        uVar7 = uVar11;
        if ((int)uVar11 <= (int)uVar1) {
          uVar7 = uVar1;
        }
        uVar16 = (uint)(bVar2 >> 6);
        uVar14 = uVar3;
        if (uVar3 <= uVar7) {
          uVar14 = uVar7;
        }
        uVar12 = uVar6;
        if (uVar6 <= uVar14) {
          uVar12 = uVar14;
        }
        uVar8 = uVar16;
        if (uVar16 <= uVar12) {
          uVar8 = uVar12;
        }
        if (((int)uVar11 <= (int)uVar1) && (uVar3 <= uVar7)) goto LAB_00dc48cc;
        do {
          *(uint *)(param_1 + 0x294) = uVar8;
          uVar11 = uVar8;
          while( true ) {
            pbVar5 = pbVar5 + -1;
            if (pbVar5 <= pbVar4) {
              return;
            }
            bVar2 = *pbVar5;
            uVar7 = bVar2 & 3;
            uVar3 = bVar2 >> 2 & 3;
            uVar6 = bVar2 >> 4 & 3;
            uVar1 = uVar7;
            if (uVar7 <= uVar11) {
              uVar1 = uVar11;
            }
            uVar16 = (uint)(bVar2 >> 6);
            uVar14 = uVar3;
            if ((int)uVar3 <= (int)uVar1) {
              uVar14 = uVar1;
            }
            uVar12 = uVar6;
            if (uVar6 <= uVar14) {
              uVar12 = uVar14;
            }
            uVar8 = uVar16;
            if (uVar16 <= uVar12) {
              uVar8 = uVar12;
            }
            if ((uVar11 < uVar7) || ((int)uVar1 < (int)uVar3)) break;
LAB_00dc48cc:
            if ((uVar14 < uVar6) || (uVar11 = uVar8, uVar12 < uVar16)) break;
          }
        } while( true );
      }
      break;
    case 4:
      if (pbVar4 < pbVar5) {
        uVar1 = *(uint *)(param_1 + 0x294);
        uVar7 = *pbVar5 >> (ulong)uVar11 & 0xf;
        uVar3 = (uint)(byte)((*pbVar5 >> (ulong)uVar11) >> 4);
        uVar11 = uVar7;
        if ((int)uVar7 <= (int)uVar1) {
          uVar11 = uVar1;
        }
        uVar6 = uVar3;
        if (uVar3 <= uVar11) {
          uVar6 = uVar11;
        }
        if (((int)uVar7 <= (int)uVar1) && (uVar7 = uVar6, uVar3 <= uVar11)) goto LAB_00dc488c;
        do {
          *(uint *)(param_1 + 0x294) = uVar6;
          uVar7 = uVar6;
LAB_00dc488c:
          do {
            pbVar5 = pbVar5 + -1;
            if (pbVar5 <= pbVar4) {
              return;
            }
            uVar11 = *pbVar5 & 0xf;
            bVar2 = *pbVar5 >> 4;
            uVar1 = uVar11;
            if (uVar11 <= uVar7) {
              uVar1 = uVar7;
            }
            uVar6 = (uint)bVar2;
            if ((int)(uint)bVar2 <= (int)uVar1) {
              uVar6 = uVar1;
            }
          } while ((uVar11 <= uVar7) && (uVar7 = uVar6, (int)(uint)bVar2 <= (int)uVar1));
        } while( true );
      }
      break;
    case 8:
      if (pbVar4 < pbVar5) {
        uVar11 = *(uint *)(param_1 + 0x294);
        do {
          if ((int)uVar11 < (int)(uint)*pbVar5) {
            uVar11 = (uint)*pbVar5;
            *(uint *)(param_1 + 0x294) = uVar11;
          }
          pbVar5 = pbVar5 + -1;
        } while (pbVar4 < pbVar5);
      }
    }
  }
  return;
}


