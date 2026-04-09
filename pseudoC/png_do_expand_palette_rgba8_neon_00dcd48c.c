// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_expand_palette_rgba8_neon
// Entry Point: 00dcd48c
// Size: 176 bytes
// Signature: undefined png_do_expand_palette_rgba8_neon(void)


uint png_do_expand_palette_rgba8_neon
               (long param_1,uint *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = *param_2;
  if (uVar2 < 4) {
    return 0;
  }
  lVar3 = 0;
  iVar4 = 0;
  lVar7 = *(long *)(param_1 + 0x410);
  lVar8 = *param_5 + -0xf;
  uVar6 = 4;
  *param_5 = lVar8;
  while( true ) {
    pbVar1 = (byte *)(*param_4 + lVar3);
    uVar9 = *(undefined4 *)(lVar7 + (ulong)pbVar1[-3] * 4);
    uVar10 = *(undefined4 *)(lVar7 + (ulong)pbVar1[-2] * 4);
    ((undefined8 *)(lVar8 - iVar4))[1] =
         CONCAT44(*(undefined4 *)(lVar7 + (ulong)*pbVar1 * 4),
                  *(undefined4 *)(lVar7 + (ulong)pbVar1[-1] * 4));
    *(undefined8 *)(lVar8 - iVar4) = CONCAT44(uVar10,uVar9);
    if (uVar2 <= uVar6) break;
    lVar8 = *param_5;
    iVar4 = iVar4 + 0x10;
    uVar6 = uVar6 + 4;
    lVar3 = lVar3 + -4;
  }
  uVar5 = (uint)uVar6;
  if (uVar2 != uVar5) {
    uVar5 = -(int)lVar3;
  }
  *param_4 = *param_4 - (long)(int)uVar5;
  *param_5 = *param_5 - (long)(int)(uVar5 << 2);
  return uVar5;
}


