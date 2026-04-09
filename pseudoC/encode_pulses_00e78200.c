// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode_pulses
// Entry Point: 00e78200
// Size: 200 bytes
// Signature: undefined encode_pulses(void)


void encode_pulses(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar7 = (long)param_2;
  uVar10 = 2;
  uVar4 = *(uint *)(param_1 + (long)(param_2 + -1) * 4);
  uVar6 = uVar4 >> 0x1f;
  uVar8 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar8 = uVar4;
  }
  do {
    iVar5 = *(int *)(param_1 + -8 + lVar7 * 4);
    uVar9 = (uint)uVar10;
    uVar4 = uVar9;
    if (uVar8 <= uVar10) {
      uVar4 = uVar8;
    }
    uVar2 = uVar9;
    if (uVar10 <= uVar8) {
      uVar2 = uVar8;
    }
    iVar1 = -iVar5;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    uVar8 = iVar1 + uVar8;
    uVar6 = *(int *)((&PTR_DAT_01014238)[(int)uVar4] + (ulong)uVar2 * 4) + uVar6;
    if (iVar5 < 0) {
      uVar4 = uVar9;
      if (uVar8 < uVar10) {
        uVar4 = uVar8 + 1;
      }
      if (uVar10 <= uVar8 + 1) {
        uVar9 = uVar8 + 1;
      }
      uVar6 = *(int *)((&PTR_DAT_01014238)[(int)uVar4] + (ulong)uVar9 * 4) + uVar6;
    }
    lVar7 = lVar7 + -1;
    uVar10 = uVar10 + 1;
  } while (1 < lVar7);
  iVar5 = param_2;
  if (param_3 <= param_2) {
    iVar5 = param_3;
  }
  iVar1 = param_2;
  if (param_2 <= param_3) {
    iVar1 = param_3;
  }
  iVar3 = param_2;
  if (param_3 + 1 <= param_2) {
    iVar3 = param_3 + 1;
  }
  if (param_2 <= param_3 + 1) {
    param_2 = param_3 + 1;
  }
  ec_enc_uint(param_4,uVar6,
              *(int *)((&PTR_DAT_01014238)[iVar3] + (long)param_2 * 4) +
              *(int *)((&PTR_DAT_01014238)[iVar5] + (long)iVar1 * 4));
  return;
}


