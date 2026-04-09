// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_build_grayscale_palette
// Entry Point: 00da97c8
// Size: 260 bytes
// Signature: undefined png_build_grayscale_palette(void)


/* WARNING: Removing unreachable block (ram,0x00da980c) */

void png_build_grayscale_palette(undefined4 param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar3;
  char cVar10;
  char cVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar12;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  cVar2 = -1;
  lVar1 = 2;
  switch(param_1) {
  case 1:
    break;
  case 2:
    cVar2 = 'U';
    lVar1 = 4;
    break;
  default:
    goto switchD_00da97f8_caseD_3;
  case 4:
    cVar2 = '\x11';
    lVar1 = 0x10;
    break;
  case 8:
    lVar1 = 0x100;
    uVar3 = 0x706050403020100;
    uVar12 = 0xf0e0d0c0b0a0908;
    do {
      cVar2 = (char)uVar3;
      cVar20 = cVar2 + '\x10';
      cVar4 = (char)((ulong)uVar3 >> 8);
      cVar21 = cVar4 + '\x10';
      cVar5 = (char)((ulong)uVar3 >> 0x10);
      cVar22 = cVar5 + '\x10';
      cVar6 = (char)((ulong)uVar3 >> 0x18);
      cVar23 = cVar6 + '\x10';
      cVar7 = (char)((ulong)uVar3 >> 0x20);
      cVar24 = cVar7 + '\x10';
      cVar8 = (char)((ulong)uVar3 >> 0x28);
      cVar25 = cVar8 + '\x10';
      cVar9 = (char)((ulong)uVar3 >> 0x30);
      cVar26 = cVar9 + '\x10';
      cVar10 = (char)((ulong)uVar3 >> 0x38);
      cVar27 = cVar10 + '\x10';
      cVar11 = (char)uVar12;
      cVar28 = cVar11 + '\x10';
      cVar13 = (char)((ulong)uVar12 >> 8);
      cVar29 = cVar13 + '\x10';
      cVar14 = (char)((ulong)uVar12 >> 0x10);
      cVar30 = cVar14 + '\x10';
      cVar15 = (char)((ulong)uVar12 >> 0x18);
      cVar31 = cVar15 + '\x10';
      cVar16 = (char)((ulong)uVar12 >> 0x20);
      cVar32 = cVar16 + '\x10';
      cVar17 = (char)((ulong)uVar12 >> 0x28);
      cVar33 = cVar17 + '\x10';
      cVar18 = (char)((ulong)uVar12 >> 0x30);
      cVar34 = cVar18 + '\x10';
      cVar19 = (char)((ulong)uVar12 >> 0x38);
      cVar35 = cVar19 + '\x10';
      lVar1 = lVar1 + -0x20;
      *param_2 = cVar2;
      param_2[1] = cVar2;
      param_2[2] = cVar2;
      param_2[3] = cVar4;
      param_2[4] = cVar4;
      param_2[5] = cVar4;
      param_2[6] = cVar5;
      param_2[7] = cVar5;
      param_2[8] = cVar5;
      param_2[9] = cVar6;
      param_2[10] = cVar6;
      param_2[0xb] = cVar6;
      param_2[0xc] = cVar7;
      param_2[0xd] = cVar7;
      param_2[0xe] = cVar7;
      param_2[0xf] = cVar8;
      param_2[0x10] = cVar8;
      param_2[0x11] = cVar8;
      param_2[0x12] = cVar9;
      param_2[0x13] = cVar9;
      param_2[0x14] = cVar9;
      param_2[0x15] = cVar10;
      param_2[0x16] = cVar10;
      param_2[0x17] = cVar10;
      param_2[0x18] = cVar11;
      param_2[0x19] = cVar11;
      param_2[0x1a] = cVar11;
      param_2[0x1b] = cVar13;
      param_2[0x1c] = cVar13;
      param_2[0x1d] = cVar13;
      param_2[0x1e] = cVar14;
      param_2[0x1f] = cVar14;
      param_2[0x20] = cVar14;
      param_2[0x21] = cVar15;
      param_2[0x22] = cVar15;
      param_2[0x23] = cVar15;
      param_2[0x24] = cVar16;
      param_2[0x25] = cVar16;
      param_2[0x26] = cVar16;
      param_2[0x27] = cVar17;
      param_2[0x28] = cVar17;
      param_2[0x29] = cVar17;
      param_2[0x2a] = cVar18;
      param_2[0x2b] = cVar18;
      param_2[0x2c] = cVar18;
      param_2[0x2d] = cVar19;
      param_2[0x2e] = cVar19;
      param_2[0x2f] = cVar19;
      uVar3 = CONCAT17(cVar10 + ' ',
                       CONCAT16(cVar9 + ' ',
                                CONCAT15(cVar8 + ' ',
                                         CONCAT14(cVar7 + ' ',
                                                  CONCAT13(cVar6 + ' ',
                                                           CONCAT12(cVar5 + ' ',
                                                                    CONCAT11(cVar4 + ' ',cVar2 + ' '
                                                                            )))))));
      uVar12 = CONCAT17(cVar19 + ' ',
                        CONCAT16(cVar18 + ' ',
                                 CONCAT15(cVar17 + ' ',
                                          CONCAT14(cVar16 + ' ',
                                                   CONCAT13(cVar15 + ' ',
                                                            CONCAT12(cVar14 + ' ',
                                                                     CONCAT11(cVar13 + ' ',
                                                                              cVar11 + ' ')))))));
      param_2[0x30] = cVar20;
      param_2[0x31] = cVar20;
      param_2[0x32] = cVar20;
      param_2[0x33] = cVar21;
      param_2[0x34] = cVar21;
      param_2[0x35] = cVar21;
      param_2[0x36] = cVar22;
      param_2[0x37] = cVar22;
      param_2[0x38] = cVar22;
      param_2[0x39] = cVar23;
      param_2[0x3a] = cVar23;
      param_2[0x3b] = cVar23;
      param_2[0x3c] = cVar24;
      param_2[0x3d] = cVar24;
      param_2[0x3e] = cVar24;
      param_2[0x3f] = cVar25;
      param_2[0x40] = cVar25;
      param_2[0x41] = cVar25;
      param_2[0x42] = cVar26;
      param_2[0x43] = cVar26;
      param_2[0x44] = cVar26;
      param_2[0x45] = cVar27;
      param_2[0x46] = cVar27;
      param_2[0x47] = cVar27;
      param_2[0x48] = cVar28;
      param_2[0x49] = cVar28;
      param_2[0x4a] = cVar28;
      param_2[0x4b] = cVar29;
      param_2[0x4c] = cVar29;
      param_2[0x4d] = cVar29;
      param_2[0x4e] = cVar30;
      param_2[0x4f] = cVar30;
      param_2[0x50] = cVar30;
      param_2[0x51] = cVar31;
      param_2[0x52] = cVar31;
      param_2[0x53] = cVar31;
      param_2[0x54] = cVar32;
      param_2[0x55] = cVar32;
      param_2[0x56] = cVar32;
      param_2[0x57] = cVar33;
      param_2[0x58] = cVar33;
      param_2[0x59] = cVar33;
      param_2[0x5a] = cVar34;
      param_2[0x5b] = cVar34;
      param_2[0x5c] = cVar34;
      param_2[0x5d] = cVar35;
      param_2[0x5e] = cVar35;
      param_2[0x5f] = cVar35;
      param_2 = param_2 + 0x60;
    } while (lVar1 != 0);
    goto switchD_00da97f8_caseD_3;
  }
  cVar4 = '\0';
  param_2 = param_2 + 1;
  do {
    param_2[-1] = cVar4;
    lVar1 = lVar1 + -1;
    *param_2 = cVar4;
    param_2[1] = cVar4;
    cVar4 = cVar4 + cVar2;
    param_2 = param_2 + 3;
  } while (lVar1 != 0);
switchD_00da97f8_caseD_3:
  return;
}


