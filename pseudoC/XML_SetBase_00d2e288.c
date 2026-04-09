// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetBase
// Entry Point: 00d2e288
// Size: 164 bytes
// Signature: undefined XML_SetBase(void)


undefined8 XML_SetBase(long param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x2a0);
    do {
      pcVar2 = *(char **)(lVar4 + 0xb8);
      if (pcVar2 == *(char **)(lVar4 + 0xb0)) {
        cVar1 = FUN_00d328e8(lVar4 + 0xa0);
        if (cVar1 == '\0') {
          return 0;
        }
        pcVar2 = *(char **)(lVar4 + 0xb8);
      }
      cVar1 = *param_2;
      *(char **)(lVar4 + 0xb8) = pcVar2 + 1;
      *pcVar2 = cVar1;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    lVar3 = *(long *)(lVar4 + 0xc0);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar4 + 0xb8);
    if (lVar3 == 0) {
      return 0;
    }
  }
  *(long *)(param_1 + 0x2a8) = lVar3;
  return 1;
}


