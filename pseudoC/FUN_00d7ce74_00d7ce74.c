// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7ce74
// Entry Point: 00d7ce74
// Size: 224 bytes
// Signature: undefined FUN_00d7ce74(void)


void FUN_00d7ce74(long *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  
  lVar5 = *param_1;
  uVar1 = *(uint *)(lVar5 + 0x28);
  if (((int)uVar1 < 1) || (*(int *)(lVar5 + 0x90) < (int)uVar1)) {
    if ((*(long *)(lVar5 + 0x98) != 0) &&
       ((*(int *)(lVar5 + 0xa0) <= (int)uVar1 && ((int)uVar1 <= *(int *)(lVar5 + 0xa4))))) {
      pcVar3 = *(char **)(*(long *)(lVar5 + 0x98) + (long)(int)(uVar1 - *(int *)(lVar5 + 0xa0)) * 8)
      ;
      goto joined_r0x00d7cec4;
    }
  }
  else {
    pcVar3 = *(char **)(*(long *)(lVar5 + 0x88) + (ulong)uVar1 * 8);
joined_r0x00d7cec4:
    pcVar4 = pcVar3;
    if (pcVar3 != (char *)0x0) goto LAB_00d7ceec;
  }
  *(uint *)(lVar5 + 0x2c) = uVar1;
  pcVar3 = **(char ***)(lVar5 + 0x88);
  pcVar4 = pcVar3;
LAB_00d7ceec:
  do {
    pcVar6 = pcVar3 + 1;
    cVar2 = *pcVar3;
    if (cVar2 == '\0') goto LAB_00d7cf20;
    pcVar3 = pcVar6;
  } while (cVar2 != '%');
  if (*pcVar6 == 's') {
    FUN_00d7cf64(param_2,0xffffffffffffffff,pcVar4,lVar5 + 0x2c);
    return;
  }
LAB_00d7cf20:
  FUN_00d7cf64(param_2,0xffffffffffffffff,pcVar4,*(undefined4 *)(lVar5 + 0x2c),
               *(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x34),
               *(undefined4 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x3c),
               *(undefined4 *)(lVar5 + 0x40),*(undefined4 *)(lVar5 + 0x44),
               *(undefined4 *)(lVar5 + 0x48));
  return;
}


