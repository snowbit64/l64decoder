// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_gains_dequant
// Entry Point: 00e67f70
// Size: 232 bytes
// Signature: undefined silk_gains_dequant(void)


void silk_gains_dequant(long param_1,char *param_2,byte *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if (0 < (int)param_5) {
    uVar5 = 0;
    do {
      if (((uint)uVar5 | param_4) == 0) {
        uVar3 = (int)*param_2;
        if ((int)*param_2 <= (int)((int)(char)*param_3 - 0x10U)) {
          uVar3 = (int)(char)*param_3 - 0x10U;
        }
      }
      else {
        iVar4 = param_2[uVar5] + -4;
        iVar1 = (char)*param_3 + 8;
        if (iVar1 < iVar4) {
          iVar4 = iVar4 * 2 - iVar1;
        }
        uVar3 = (uint)*param_3 + iVar4;
      }
      uVar3 = uVar3 & ((int)(char)uVar3 >> 7 ^ 0xffffffffU);
      if (0x3e < (uVar3 & 0xff)) {
        uVar3 = 0x3f;
      }
      *param_3 = (byte)uVar3;
      uVar2 = silk_log2lin(((uVar3 & 0xff) * 0x1d1c71 >> 0x10) + 0x82a);
      *(undefined4 *)(param_1 + uVar5 * 4) = uVar2;
      uVar5 = uVar5 + 1;
    } while (param_5 != uVar5);
  }
  return;
}


