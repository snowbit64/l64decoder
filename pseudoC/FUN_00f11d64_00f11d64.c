// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11d64
// Entry Point: 00f11d64
// Size: 400 bytes
// Signature: undefined FUN_00f11d64(void)


undefined * FUN_00f11d64(long param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined *)FUN_00f10278(param_1,0x80,*(undefined *)(param_1 + 4));
  lVar6 = *(long *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar6 + 0x20);
  *puVar4 = 9;
  puVar4[1] = bVar1 & 3;
  uVar2 = *(undefined *)(param_1 + 4);
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x58) = 0;
  *(undefined8 *)(puVar4 + 0x50) = 0;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  *(undefined8 *)(puVar4 + 0x70) = 0;
  *(undefined8 *)(puVar4 + 0x78) = 0;
  uVar3 = *(undefined *)(param_1 + 4);
  *(undefined8 *)(puVar4 + 0x30) = 0;
  puVar4[2] = uVar2;
  *(long *)(puVar4 + 0x18) = lVar6;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  puVar4[4] = uVar3;
  lVar6 = FUN_00f10090(param_1,0x140);
  *(long *)(puVar4 + 0x20) = lVar6;
  *(long *)(puVar4 + 0x38) = lVar6 + 0x118;
  *(long *)(puVar4 + 0x40) = lVar6;
  *(undefined4 *)(puVar4 + 0x4c) = 8;
  lVar5 = FUN_00f10090(param_1,0x2d0,puVar4[2]);
  *(undefined4 *)(lVar5 + 0x1c) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(puVar4 + 0x48) = 0x2d;
  plVar7 = *(long **)(puVar4 + 0x20);
  *(long *)(puVar4 + 0x28) = lVar5 + 0x280;
  *(long *)(puVar4 + 0x30) = lVar5;
  lVar6 = lVar5 + 0x10;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  plVar7[2] = lVar5 + 0x150;
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *plVar7 = lVar6;
  plVar7[1] = lVar5;
  uVar2 = *(undefined *)(param_1 + 6);
  *(undefined4 *)(lVar5 + 0x4c) = 0;
  *(undefined4 *)(lVar5 + 0x5c) = 0;
  *(undefined4 *)(lVar5 + 0x6c) = 0;
  *(undefined4 *)(lVar5 + 0x7c) = 0;
  *(undefined4 *)(lVar5 + 0x8c) = 0;
  *(undefined4 *)(lVar5 + 0x9c) = 0;
  *(undefined4 *)(lVar5 + 0xac) = 0;
  *(undefined4 *)(lVar5 + 0xbc) = 0;
  *(undefined4 *)(lVar5 + 0xcc) = 0;
  *(undefined4 *)(lVar5 + 0xdc) = 0;
  *(undefined4 *)(lVar5 + 0xec) = 0;
  *(undefined4 *)(lVar5 + 0xfc) = 0;
  *(undefined4 *)(lVar5 + 0x10c) = 0;
  *(undefined4 *)(lVar5 + 0x11c) = 0;
  *(undefined4 *)(lVar5 + 300) = 0;
  *(undefined4 *)(lVar5 + 0x13c) = 0;
  *(undefined4 *)(lVar5 + 0x14c) = 0;
  *(undefined4 *)(lVar5 + 0x15c) = 0;
  *(undefined4 *)(lVar5 + 0x16c) = 0;
  *(undefined4 *)(lVar5 + 0x17c) = 0;
  *(undefined4 *)(lVar5 + 0x18c) = 0;
  *(undefined4 *)(lVar5 + 0x19c) = 0;
  *(undefined4 *)(lVar5 + 0x1ac) = 0;
  *(undefined4 *)(lVar5 + 0x1bc) = 0;
  *(undefined4 *)(lVar5 + 0x1cc) = 0;
  *(undefined4 *)(lVar5 + 0x1dc) = 0;
  *(undefined4 *)(lVar5 + 0x1ec) = 0;
  *(undefined4 *)(lVar5 + 0x1fc) = 0;
  *(undefined4 *)(lVar5 + 0x20c) = 0;
  *(undefined4 *)(lVar5 + 0x21c) = 0;
  *(undefined4 *)(lVar5 + 0x22c) = 0;
  *(undefined4 *)(lVar5 + 0x23c) = 0;
  *(undefined4 *)(lVar5 + 0x24c) = 0;
  *(undefined4 *)(lVar5 + 0x25c) = 0;
  *(undefined4 *)(lVar5 + 0x26c) = 0;
  *(undefined4 *)(lVar5 + 0x27c) = 0;
  *(undefined4 *)(lVar5 + 0x28c) = 0;
  *(undefined4 *)(lVar5 + 0x29c) = 0;
  *(undefined4 *)(lVar5 + 0x2ac) = 0;
  *(undefined4 *)(lVar5 + 700) = 0;
  *(undefined4 *)(lVar5 + 0x2cc) = 0;
  *(undefined4 *)(lVar5 + 0xc) = 0;
  *(long *)(puVar4 + 8) = lVar6;
  *(long *)(puVar4 + 0x10) = lVar6;
  *(undefined8 *)(puVar4 + 0x58) = uVar8;
  puVar4[6] = uVar2;
  return puVar4;
}


