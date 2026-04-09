// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d40fc4
// Entry Point: 00d40fc4
// Size: 168 bytes
// Signature: undefined FUN_00d40fc4(void)


undefined8 FUN_00d40fc4(long param_1,long param_2,long param_3,byte **param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  pbVar3 = (byte *)(param_2 + 2);
  lVar4 = (param_3 - (long)pbVar3) + -2;
  if (1 < lVar4) {
    do {
      if (pbVar3[1] != 0) goto LAB_00d41058;
      bVar1 = *pbVar3;
      bVar2 = *(byte *)(param_1 + 0x88 + (ulong)bVar1);
      uVar5 = (ulong)bVar2;
      if (0x23 < bVar2) goto LAB_00d41048;
      if ((1L << (uVar5 & 0x3f) & 0xfcb8fe600U) == 0) {
        if ((1L << (uVar5 & 0x3f) & 0x4400000U) == 0) {
          if (uVar5 != 0x15) goto LAB_00d41048;
          if (bVar1 == 9) goto LAB_00d41058;
        }
        else if ((char)bVar1 < '\0') {
LAB_00d41048:
          if ((bVar1 != 0x40) && (bVar1 != 0x24)) {
LAB_00d41058:
            *param_4 = pbVar3;
            return 0;
          }
        }
      }
      pbVar3 = pbVar3 + 2;
      lVar4 = lVar4 + -2;
    } while (1 < lVar4);
  }
  return 1;
}


