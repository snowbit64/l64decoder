// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44a78
// Entry Point: 00d44a78
// Size: 168 bytes
// Signature: undefined FUN_00d44a78(void)


undefined8 FUN_00d44a78(long param_1,long param_2,long param_3,char **param_4)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  pcVar3 = (char *)(param_2 + 2);
  lVar4 = (param_3 - (long)pcVar3) + -2;
  if (1 < lVar4) {
    do {
      if (*pcVar3 != '\0') goto LAB_00d44b0c;
      bVar1 = pcVar3[1];
      bVar2 = *(byte *)(param_1 + 0x88 + (ulong)bVar1);
      uVar5 = (ulong)bVar2;
      if (0x23 < bVar2) goto LAB_00d44afc;
      if ((1L << (uVar5 & 0x3f) & 0xfcb8fe600U) == 0) {
        if ((1L << (uVar5 & 0x3f) & 0x4400000U) == 0) {
          if (uVar5 != 0x15) goto LAB_00d44afc;
          if (bVar1 == 9) goto LAB_00d44b0c;
        }
        else if ((char)bVar1 < '\0') {
LAB_00d44afc:
          if ((bVar1 != 0x40) && (bVar1 != 0x24)) {
LAB_00d44b0c:
            *param_4 = pcVar3;
            return 0;
          }
        }
      }
      pcVar3 = pcVar3 + 2;
      lVar4 = lVar4 + -2;
    } while (1 < lVar4);
  }
  return 1;
}


