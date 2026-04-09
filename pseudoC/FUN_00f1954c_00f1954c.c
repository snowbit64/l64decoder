// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1954c
// Entry Point: 00f1954c
// Size: 600 bytes
// Signature: undefined FUN_00f1954c(void)


void FUN_00f1954c(long param_1)

{
  undefined8 uVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *__s;
  
  uVar1 = FUN_00f128c0(param_1,&DAT_0050a199,3);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xaf0) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xaf0);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"boolean",7);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xaf8) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xaf8);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"userdata",8);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb00) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb00);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"number",6);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb08) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb08);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"vector",6);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb10) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb10);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"string",6);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb18) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb18);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"table",5);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb20) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb20);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"function",8);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb28) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb28);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"userdata",8);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb30) = uVar1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xb30);
  *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | 8;
  uVar1 = FUN_00f128c0(param_1,"thread",6);
  lVar3 = 0xb40;
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb38) = uVar1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0xb38);
  *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
  do {
    __s = *(char **)((long)&PTR_visit_01016c48 + lVar3);
    sVar2 = strlen(__s);
    uVar1 = FUN_00f128c0(param_1,__s,sVar2);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3) = uVar1;
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + lVar3);
    lVar3 = lVar3 + 8;
    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | 8;
  } while (lVar3 != 0xbe0);
  return;
}


