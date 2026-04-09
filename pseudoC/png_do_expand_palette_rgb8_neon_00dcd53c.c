// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_expand_palette_rgb8_neon
// Entry Point: 00dcd53c
// Size: 256 bytes
// Signature: undefined png_do_expand_palette_rgb8_neon(void)


uint png_do_expand_palette_rgb8_neon
               (undefined param_1,undefined param_2,long param_3,uint *param_4,undefined8 param_5,
               long *param_6,long *param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined uVar10;
  undefined uVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  
  uVar2 = *param_4;
  if (uVar2 < 9) {
    return 0;
  }
  iVar4 = 0;
  lVar6 = *(long *)(param_3 + 0x288);
  lVar7 = *param_7 + -0x17;
  uVar5 = 8;
  *param_7 = lVar7;
  while( true ) {
    puVar8 = (undefined *)(lVar7 - iVar4);
    pbVar9 = (byte *)(*param_6 - (long)(int)(uVar5 - 8));
    uVar3 = *(undefined *)(lVar6 + (ulong)pbVar9[-7] * 3 + 2);
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-6] * 3);
    uVar10 = *puVar1;
    uVar17 = puVar1[1];
    uVar24 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-5] * 3);
    uVar11 = *puVar1;
    uVar18 = puVar1[1];
    uVar25 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-4] * 3);
    uVar12 = *puVar1;
    uVar19 = puVar1[1];
    uVar26 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-3] * 3);
    uVar13 = *puVar1;
    uVar20 = puVar1[1];
    uVar27 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-2] * 3);
    uVar14 = *puVar1;
    uVar21 = puVar1[1];
    uVar28 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)pbVar9[-1] * 3);
    uVar15 = *puVar1;
    uVar22 = puVar1[1];
    uVar29 = puVar1[2];
    puVar1 = (undefined *)(lVar6 + (ulong)*pbVar9 * 3);
    uVar16 = *puVar1;
    uVar23 = puVar1[1];
    uVar30 = puVar1[2];
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar10;
    puVar8[4] = uVar17;
    puVar8[5] = uVar24;
    puVar8[6] = uVar11;
    puVar8[7] = uVar18;
    puVar8[8] = uVar25;
    puVar8[9] = uVar12;
    puVar8[10] = uVar19;
    puVar8[0xb] = uVar26;
    puVar8[0xc] = uVar13;
    puVar8[0xd] = uVar20;
    puVar8[0xe] = uVar27;
    puVar8[0xf] = uVar14;
    puVar8[0x10] = uVar21;
    puVar8[0x11] = uVar28;
    puVar8[0x12] = uVar15;
    puVar8[0x13] = uVar22;
    puVar8[0x14] = uVar29;
    puVar8[0x15] = uVar16;
    puVar8[0x16] = uVar23;
    puVar8[0x17] = uVar30;
    if (uVar2 <= uVar5) break;
    lVar7 = *param_7;
    uVar5 = uVar5 + 8;
    iVar4 = iVar4 + 0x18;
  }
  if (uVar2 != uVar5) {
    uVar5 = uVar5 - 8;
  }
  *param_6 = *param_6 - (long)(int)uVar5;
  *param_7 = *param_7 - (long)(int)(uVar5 * 3);
  return uVar5;
}


