// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetEncoding
// Entry Point: 00d2d0b4
// Size: 168 bytes
// Signature: undefined XML_SetEncoding(void)


void * XML_SetEncoding(long param_1,void *param_2)

{
  char *pcVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((*(uint *)(param_1 + 0x388) | 2) == 3) {
    return (void *)0x0;
  }
  (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1c0));
  if (param_2 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    uVar2 = 0;
    do {
      pcVar1 = (char *)((long)param_2 + uVar2);
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    __dest = (void *)(**(code **)(param_1 + 0x18))(uVar2 & 0xffffffff);
    pvVar3 = __dest;
    if (__dest == (void *)0x0) goto LAB_00d2d148;
    memcpy(__dest,param_2,uVar2 & 0xffffffff);
  }
  __dest = (void *)0x1;
LAB_00d2d148:
  *(void **)(param_1 + 0x1c0) = pvVar3;
  return __dest;
}


