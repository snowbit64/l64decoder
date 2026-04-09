// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1229c
// Entry Point: 00f1229c
// Size: 460 bytes
// Signature: undefined FUN_00f1229c(void)


void FUN_00f1229c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  lVar2 = FUN_00f10090(param_1,0x140,*(undefined *)(param_1 + 2));
  *(long *)(param_1 + 0x20) = lVar2;
  *(long *)(param_1 + 0x38) = lVar2 + 0x118;
  *(long *)(param_1 + 0x40) = lVar2;
  *(undefined4 *)(param_1 + 0x4c) = 8;
  lVar3 = FUN_00f10090(param_1,0x2d0,*(undefined *)(param_1 + 2));
  *(undefined4 *)(lVar3 + 0x1c) = 0;
  *(undefined4 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x2d;
  plVar5 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x28) = lVar3 + 0x280;
  *(long *)(param_1 + 0x30) = lVar3;
  lVar2 = lVar3 + 0x10;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  *(undefined4 *)(lVar3 + 0x6c) = 0;
  *(undefined4 *)(lVar3 + 0x7c) = 0;
  *(undefined4 *)(lVar3 + 0x8c) = 0;
  *(undefined4 *)(lVar3 + 0x9c) = 0;
  *(undefined4 *)(lVar3 + 0xac) = 0;
  *(undefined4 *)(lVar3 + 0xbc) = 0;
  *(undefined4 *)(lVar3 + 0xcc) = 0;
  *(undefined4 *)(lVar3 + 0xdc) = 0;
  *(undefined4 *)(lVar3 + 0xec) = 0;
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x10c) = 0;
  *(undefined4 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 300) = 0;
  *(undefined4 *)(lVar3 + 0x13c) = 0;
  *(undefined4 *)(lVar3 + 0x14c) = 0;
  *(undefined4 *)(lVar3 + 0x15c) = 0;
  *(undefined4 *)(lVar3 + 0x16c) = 0;
  *(undefined4 *)(lVar3 + 0x17c) = 0;
  *(undefined4 *)(lVar3 + 0x18c) = 0;
  *(undefined4 *)(lVar3 + 0x19c) = 0;
  *(undefined4 *)(lVar3 + 0x1ac) = 0;
  *(undefined4 *)(lVar3 + 0x1bc) = 0;
  *(undefined4 *)(lVar3 + 0x1cc) = 0;
  *(undefined4 *)(lVar3 + 0x1dc) = 0;
  *(undefined4 *)(lVar3 + 0x1ec) = 0;
  *(undefined4 *)(lVar3 + 0x1fc) = 0;
  *(undefined4 *)(lVar3 + 0x20c) = 0;
  *(undefined4 *)(lVar3 + 0x21c) = 0;
  *(undefined4 *)(lVar3 + 0x22c) = 0;
  *(undefined4 *)(lVar3 + 0x23c) = 0;
  *(undefined4 *)(lVar3 + 0x24c) = 0;
  *(undefined4 *)(lVar3 + 0x25c) = 0;
  *(undefined4 *)(lVar3 + 0x26c) = 0;
  *(undefined4 *)(lVar3 + 0x27c) = 0;
  *(undefined4 *)(lVar3 + 0x28c) = 0;
  *(undefined4 *)(lVar3 + 0x29c) = 0;
  *(undefined4 *)(lVar3 + 0x2ac) = 0;
  *(undefined4 *)(lVar3 + 700) = 0;
  *(undefined4 *)(lVar3 + 0x2cc) = 0;
  *(undefined4 *)(lVar3 + 0xc) = 0;
  *plVar5 = lVar2;
  plVar5[1] = lVar3;
  *(long *)(param_1 + 8) = lVar2;
  *(long *)(param_1 + 0x10) = lVar2;
  plVar5[2] = lVar3 + 0x150;
  uVar4 = FUN_00f16e6c(param_1,0,2);
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar4 = FUN_00f16e6c(param_1,0,2);
  *(undefined8 *)(lVar2 + 0xbf0) = uVar4;
  *(undefined4 *)(lVar2 + 0xbfc) = 6;
  FUN_00f1250c(param_1,0x20);
  FUN_00f1954c(param_1);
  lVar2 = FUN_00f128c0(param_1,"not enough memory",0x11);
  *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | 8;
  lVar2 = FUN_00f128c0(param_1,"error in error handling",0x17);
  bVar1 = *(byte *)(lVar2 + 1);
  *(long *)(lVar6 + 0x40) = *(long *)(lVar6 + 0x48) << 2;
  *(byte *)(lVar2 + 1) = bVar1 | 8;
  return;
}


