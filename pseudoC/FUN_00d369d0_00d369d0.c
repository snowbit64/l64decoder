// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d369d0
// Entry Point: 00d369d0
// Size: 320 bytes
// Signature: undefined FUN_00d369d0(void)


undefined8 FUN_00d369d0(long param_1,char **param_2)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  lVar6 = 0;
  lVar5 = *(long *)(param_1 + 0x2a0);
  pcVar7 = *param_2;
  cVar1 = *pcVar7;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar1 == ':') break;
    lVar6 = lVar6 + 1;
    cVar1 = pcVar7[lVar6];
  }
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    pcVar4 = *(char **)(lVar5 + 0xb8);
    if (pcVar4 == *(char **)(lVar5 + 0xb0)) {
      cVar1 = FUN_00d328e8(lVar5 + 0xa0);
      if (cVar1 == '\0') {
        return 0;
      }
      pcVar4 = *(char **)(lVar5 + 0xb8);
    }
    cVar1 = *pcVar7;
    *(char **)(lVar5 + 0xb8) = pcVar4 + 1;
    *pcVar4 = cVar1;
    pcVar7 = pcVar7 + 1;
  }
  puVar3 = *(undefined **)(lVar5 + 0xb8);
  if (puVar3 == *(undefined **)(lVar5 + 0xb0)) {
    cVar1 = FUN_00d328e8(lVar5 + 0xa0);
    if (cVar1 == '\0') {
      return 0;
    }
    puVar3 = *(undefined **)(lVar5 + 0xb8);
  }
  *(undefined **)(lVar5 + 0xb8) = puVar3 + 1;
  *puVar3 = 0;
  plVar2 = (long *)FUN_00d31dd4(param_1,lVar5 + 0x78,*(undefined8 *)(lVar5 + 0xc0),0x10);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (*plVar2 == *(long *)(lVar5 + 0xc0)) {
    *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(lVar5 + 0xb8);
  }
  else {
    *(long *)(lVar5 + 0xb8) = *(long *)(lVar5 + 0xc0);
  }
  param_2[1] = (char *)plVar2;
  return 1;
}


