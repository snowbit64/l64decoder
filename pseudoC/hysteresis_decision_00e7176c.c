// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hysteresis_decision
// Entry Point: 00e7176c
// Size: 148 bytes
// Signature: undefined hysteresis_decision(void)


ulong hysteresis_decision(short param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_4 < 1) {
    uVar3 = 0;
    if ((int)param_5 < 0) goto LAB_00e717bc;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      if (param_1 < *(short *)(param_2 + uVar2 * 2)) break;
      uVar2 = uVar2 + 1;
      uVar3 = (ulong)param_4;
    } while (param_4 != uVar2);
    if ((int)param_5 < (int)uVar3) {
LAB_00e717bc:
      uVar2 = -(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1;
      uVar1 = param_5;
      if ((int)*(short *)(param_3 + uVar2) + (int)*(short *)(param_2 + uVar2) <= (int)param_1) {
        uVar1 = (uint)uVar3;
      }
      uVar3 = (ulong)uVar1;
      goto joined_r0x00e717d8;
    }
  }
  uVar1 = (uint)uVar3;
joined_r0x00e717d8:
  if ((int)uVar1 < (int)param_5) {
    lVar4 = (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1) - 2;
    if ((int)param_1 <= (int)*(short *)(param_2 + lVar4) - (int)*(short *)(param_3 + lVar4)) {
      param_5 = (uint)uVar3;
    }
    return (ulong)param_5;
  }
  return uVar3;
}


