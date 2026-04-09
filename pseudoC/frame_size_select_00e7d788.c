// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: frame_size_select
// Entry Point: 00e7d788
// Size: 276 bytes
// Signature: undefined frame_size_select(void)


ulong frame_size_select(ulong param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (iVar3 < param_3 / 400) {
    return 0xffffffff;
  }
  if (param_2 != 5000) {
    if (8 < param_2 - 0x1389) {
      return 0xffffffff;
    }
    if (param_2 >> 1 < 0x9c7) {
      uVar1 = param_3 / 400 << (ulong)(param_2 - 0x1389 & 0x1f);
    }
    else {
      uVar1 = (int)((param_2 - 0x138b) * param_3) / 0x32;
    }
    param_1 = (ulong)uVar1;
    if (iVar3 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  iVar3 = (int)param_1;
  if (iVar3 * 400 == param_3) {
    return param_1;
  }
  if (iVar3 * 200 == param_3) {
    return param_1;
  }
  if (iVar3 * 100 == param_3) {
    return param_1;
  }
  iVar2 = iVar3 * 0x32;
  if (iVar2 == param_3) {
    return param_1;
  }
  if (iVar3 * 0x19 == param_3) {
    return param_1;
  }
  if (iVar2 != param_3 * 3) {
    if (iVar2 == param_3 * 4) {
      return param_1;
    }
    if (iVar2 != param_3 * 5) {
      if (iVar2 != param_3 * 6) {
        return 0xffffffff;
      }
      return param_1;
    }
    return param_1;
  }
  return param_1;
}


