// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0c8bc
// Entry Point: 00f0c8bc
// Size: 304 bytes
// Signature: undefined FUN_00f0c8bc(void)


void FUN_00f0c8bc(long param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  
  cVar2 = *param_2;
  bVar1 = param_2[1] & 0xfc;
  param_2[1] = bVar1;
  while( true ) {
    if (cVar2 != '\b') {
      switch(cVar2) {
      case '\x06':
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(char **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_2 + 0x28) = uVar4;
        break;
      case '\a':
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(char **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_2 + 8) = uVar4;
        return;
      case '\t':
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(char **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_2 + 0x68) = uVar4;
        return;
      case '\n':
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(char **)(param_1 + 0x28) = param_2;
        *(undefined8 *)(param_2 + 0x58) = uVar4;
        return;
      case '\v':
        plVar5 = *(long **)(param_2 + 8);
        if ((4 < *(int *)((long)plVar5 + 0xc)) && ((*(byte *)(*plVar5 + 1) & 3) != 0)) {
          FUN_00f0c8bc();
          plVar5 = *(long **)(param_2 + 8);
        }
        if (plVar5 == (long *)(param_2 + 0x10)) {
          param_2[1] = param_2[1] | 4;
          return;
        }
      }
      return;
    }
    pcVar3 = *(char **)(param_2 + 8);
    param_2[1] = bVar1 | 4;
    if (pcVar3 == (char *)0x0) {
      return;
    }
    if ((pcVar3[1] & 3U) == 0) break;
    cVar2 = *pcVar3;
    bVar1 = pcVar3[1] & 0xfc;
    pcVar3[1] = bVar1;
    param_2 = pcVar3;
  }
  return;
}


