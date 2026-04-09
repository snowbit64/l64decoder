// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2cf98
// Entry Point: 00d2cf98
// Size: 284 bytes
// Signature: undefined FUN_00d2cf98(void)


void FUN_00d2cf98(undefined8 *param_1,void *param_2)

{
  char *pcVar1;
  void *__dest;
  ulong uVar2;
  
  param_1[0x42] = FUN_00d2f174;
  XmlPrologStateInit(param_1 + 0x3e);
  if (param_2 != (void *)0x0) {
    uVar2 = 0;
    do {
      pcVar1 = (char *)((long)param_2 + uVar2);
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    __dest = (void *)(*(code *)param_1[3])(uVar2 & 0xffffffff);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,uVar2 & 0xffffffff);
    }
    param_1[0x38] = __dest;
  }
  param_1[0x55] = 0;
  XmlInitEncoding(param_1 + 0x25,param_1 + 0x24,0);
  param_1[0x1d] = param_1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  param_1[6] = param_1[2];
  param_1[7] = param_1[2];
  param_1[0x56] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x292) = 0;
  *(undefined8 *)((long)param_1 + 0x28a) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined *)(param_1 + 0x49) = 1;
  param_1[0x58] = 0;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x3d] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0;
  param_1[0x73] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return;
}


