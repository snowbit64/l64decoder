// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_VQ_weights_laroia
// Entry Point: 00e94650
// Size: 244 bytes
// Signature: undefined silk_NLSF_VQ_weights_laroia(void)


void silk_NLSF_VQ_weights_laroia(undefined2 *param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  undefined2 *puVar8;
  ulong uVar9;
  
  sVar2 = *param_2;
  uVar5 = (int)sVar2;
  if (sVar2 < 2) {
    uVar5 = 1;
  }
  uVar3 = (int)param_2[1] - (int)sVar2;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = 0x20000 / uVar5;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = 0x20000 / uVar3;
  }
  uVar4 = uVar5 + uVar4;
  if (0x7ffe < uVar4) {
    uVar4 = 0x7fff;
  }
  uVar6 = (ulong)(param_3 - 1U);
  *param_1 = (short)uVar4;
  if (param_3 < 3) {
    uVar6 = (ulong)(int)(param_3 - 1U);
  }
  else {
    psVar7 = param_2 + 2;
    uVar9 = 1;
    puVar8 = param_1 + 2;
    do {
      uVar9 = uVar9 + 2;
      uVar3 = (int)*psVar7 - (int)psVar7[-1];
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20000 / uVar3;
      }
      uVar5 = uVar4 + uVar5;
      if (0x7ffe < uVar5) {
        uVar5 = 0x7fff;
      }
      puVar8[-1] = (short)uVar5;
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      uVar3 = (int)*psVar1 - (int)sVar2;
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = 0x20000 / uVar3;
      }
      uVar4 = uVar5 + uVar4;
      if (0x7ffe < uVar4) {
        uVar4 = 0x7fff;
      }
      *puVar8 = (short)uVar4;
      puVar8 = puVar8 + 2;
    } while (uVar9 < uVar6);
  }
  uVar3 = 0x8000 - (int)param_2[uVar6];
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = 0x20000 / uVar3;
  }
  uVar4 = uVar4 + uVar5;
  if (0x7ffe < uVar4) {
    uVar4 = 0x7fff;
  }
  param_1[uVar6] = (short)uVar4;
  return;
}


