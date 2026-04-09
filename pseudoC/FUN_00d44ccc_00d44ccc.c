// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44ccc
// Entry Point: 00d44ccc
// Size: 160 bytes
// Signature: undefined FUN_00d44ccc(void)


bool FUN_00d44ccc(undefined8 param_1,ushort **param_2,long param_3,ushort **param_4,ushort *param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  
  puVar5 = *param_2;
  puVar4 = *param_4;
  uVar6 = param_3 - (long)puVar5 & 0xfffffffffffffffe;
  puVar1 = (ushort *)((long)puVar5 + uVar6);
  if ((long)param_5 - (long)puVar4 < (long)uVar6) {
    bVar3 = (*(byte *)(puVar1 + -1) & 0xf8) == 0xd8;
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
      *puVar4 = *puVar5 >> 8 | (ushort)((*puVar5 & 0xff00ff) << 8);
      *param_4 = puVar4 + 1;
      puVar5 = *param_2 + 1;
      *param_2 = puVar5;
      if (puVar2 <= puVar5) {
        return bVar3;
      }
      puVar4 = *param_4;
    }
    if (puVar4 == param_5) {
      return (bool)2;
    }
  }
  return bVar3;
}


