// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3aae4
// Entry Point: 00d3aae4
// Size: 220 bytes
// Signature: undefined FUN_00d3aae4(void)


undefined8 FUN_00d3aae4(long param_1,byte **param_2,byte *param_3,short **param_4,short *param_5)

{
  short sVar1;
  byte *pbVar2;
  short *psVar3;
  
  pbVar2 = *param_2;
  if (pbVar2 < param_3) {
    psVar3 = *param_4;
    do {
      if (param_5 <= psVar3) {
        if (psVar3 != param_5) {
          return 0;
        }
        return 2;
      }
      sVar1 = *(short *)(param_1 + 0x1e0 + (ulong)*pbVar2 * 2);
      if (sVar1 == 0) {
        sVar1 = (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8));
        pbVar2 = *param_2 + ((ulong)*(byte *)(param_1 + 0x88 + (ulong)**param_2) - 3);
      }
      else {
        pbVar2 = pbVar2 + 1;
      }
      *param_2 = pbVar2;
      psVar3 = *param_4 + 1;
      **param_4 = sVar1;
      *param_4 = psVar3;
      pbVar2 = *param_2;
    } while (pbVar2 < param_3);
  }
  return 0;
}


