// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d4d8
// Entry Point: 00d3d4d8
// Size: 160 bytes
// Signature: undefined FUN_00d3d4d8(void)


undefined8 FUN_00d3d4d8(long param_1,long param_2,long param_3,byte **param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = (byte *)(param_2 + 1);
  param_3 = ~(ulong)pbVar3 + param_3;
  if (0 < param_3) {
    do {
      bVar1 = *pbVar3;
      bVar2 = *(byte *)(param_1 + 0x88 + (ulong)bVar1);
      uVar4 = (ulong)bVar2;
      if (0x23 < bVar2) goto LAB_00d3d554;
      if ((1L << (uVar4 & 0x3f) & 0xfcb8fe600U) == 0) {
        if ((1L << (uVar4 & 0x3f) & 0x4400000U) == 0) {
          if (uVar4 != 0x15) goto LAB_00d3d554;
          if (bVar1 == 9) goto LAB_00d3d564;
        }
        else if ((char)bVar1 < '\0') {
LAB_00d3d554:
          if ((bVar1 != 0x40) && (bVar1 != 0x24)) {
LAB_00d3d564:
            *param_4 = pbVar3;
            return 0;
          }
        }
      }
      pbVar3 = pbVar3 + 1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return 1;
}


