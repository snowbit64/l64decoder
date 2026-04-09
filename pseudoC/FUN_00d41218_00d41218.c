// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d41218
// Entry Point: 00d41218
// Size: 152 bytes
// Signature: undefined FUN_00d41218(void)


bool FUN_00d41218(undefined8 param_1,ulong *param_2,long param_3,undefined8 *param_4,
                 undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  
  puVar5 = (undefined2 *)*param_2;
  puVar4 = (undefined2 *)*param_4;
  uVar6 = param_3 - (long)puVar5 & 0xfffffffffffffffe;
  puVar1 = (undefined2 *)((long)puVar5 + uVar6);
  if ((long)param_5 - (long)puVar4 < (long)uVar6) {
    bVar3 = (*(byte *)((long)puVar1 + -1) & 0xf8) == 0xd8;
    puVar2 = puVar1 + -1;
    if (!bVar3) {
      puVar2 = puVar1;
    }
  }
  else {
    bVar3 = false;
    puVar2 = puVar1;
  }
  if (puVar5 < puVar2) {
    while (puVar4 < param_5) {
      *puVar4 = *puVar5;
      *param_4 = puVar4 + 1;
      puVar5 = (undefined2 *)(*param_2 + 2);
      *param_2 = (ulong)puVar5;
      if (puVar2 <= puVar5) {
        return bVar3;
      }
      puVar4 = (undefined2 *)*param_4;
    }
    if (puVar4 == param_5) {
      return (bool)2;
    }
  }
  return bVar3;
}


