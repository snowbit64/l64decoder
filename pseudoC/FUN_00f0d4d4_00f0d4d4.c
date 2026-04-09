// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0d4d4
// Entry Point: 00f0d4d4
// Size: 208 bytes
// Signature: undefined FUN_00f0d4d4(void)


void FUN_00f0d4d4(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(*(long *)(param_2 + 0x58) + 1) & 3) != 0) {
    FUN_00f0c8bc(param_1);
  }
  lVar1 = *(long *)(param_2 + 0x70);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) & 0xfc;
  }
  plVar2 = *(long **)(param_2 + 8);
  for (plVar3 = *(long **)(param_2 + 0x30); plVar3 < plVar2; plVar3 = plVar3 + 2) {
    if ((4 < *(int *)((long)plVar3 + 0xc)) && ((*(byte *)(*plVar3 + 1) & 3) != 0)) {
      FUN_00f0c8bc(param_1);
      plVar2 = *(long **)(param_2 + 8);
    }
  }
  for (lVar1 = *(long *)(param_2 + 0x60); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    *(undefined *)(lVar1 + 3) = 1;
    if ((*(byte *)(lVar1 + 1) & 3) != 0) {
      FUN_00f0c8bc(param_1,lVar1);
    }
  }
  return;
}


