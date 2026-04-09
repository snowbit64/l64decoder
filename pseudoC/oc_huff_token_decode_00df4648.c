// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_huff_token_decode
// Entry Point: 00df4648
// Size: 188 bytes
// Signature: undefined oc_huff_token_decode(void)


byte oc_huff_token_decode(ulong *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar7;
  ulong uVar8;
  byte *pbVar6;
  
  uVar4 = (uint)*param_2;
  if (*param_2 != 0) {
    uVar7 = *(uint *)(param_1 + 3);
    uVar3 = *param_1;
    do {
      if ((int)uVar7 < (int)uVar4) {
        pbVar5 = (byte *)param_1[1];
        uVar1 = uVar7;
        if ((byte *)param_1[2] <= pbVar5) {
          uVar1 = 0x40000000;
        }
        if ((int)uVar1 < 0x39) {
          uVar2 = 0x38 - uVar7;
          pbVar6 = pbVar5;
          do {
            uVar7 = uVar7 + 8;
            uVar8 = (ulong)uVar2;
            pbVar5 = pbVar6 + 1;
            uVar1 = uVar7;
            if ((byte *)param_1[2] <= pbVar5) {
              uVar1 = 0x40000000;
            }
            uVar2 = uVar2 - 8;
            uVar3 = (ulong)*pbVar6 << (uVar8 & 0x3f) | uVar3;
            pbVar6 = pbVar5;
          } while ((int)uVar1 < 0x39);
        }
        uVar7 = uVar1;
        param_1[1] = (ulong)pbVar5;
        if ((int)uVar7 < (int)uVar4) {
          uVar3 = uVar3 | *pbVar5 >> ((ulong)uVar7 & 7);
        }
      }
      param_2 = *(byte **)(param_2 + (uVar3 >> ((ulong)-uVar4 & 0x3f)) * 8 + 8);
      uVar4 = (uint)*param_2;
      uVar3 = uVar3 << ((ulong)param_2[2] & 0x3f);
      uVar7 = uVar7 - param_2[2];
      *param_1 = uVar3;
      *(uint *)(param_1 + 3) = uVar7;
    } while (uVar4 != 0);
  }
  return param_2[1];
}


