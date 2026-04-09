// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ba50
// Entry Point: 00f0ba50
// Size: 120 bytes
// Signature: undefined FUN_00f0ba50(void)


void FUN_00f0ba50(long param_1,uint param_2,undefined8 param_3)

{
  undefined uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = (undefined *)
           FUN_00f10278(param_1,(-(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 |
                                (ulong)param_2 << 4) + 0x30,*(undefined *)(param_1 + 4));
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined *)(param_1 + 4);
  puVar3[4] = (char)param_2;
  bVar2 = *(byte *)(lVar4 + 0x20);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *puVar3 = 7;
  puVar3[2] = uVar1;
  puVar3[3] = 1;
  *(undefined2 *)(puVar3 + 5) = 0x14;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  puVar3[1] = bVar2 & 3;
  return;
}


