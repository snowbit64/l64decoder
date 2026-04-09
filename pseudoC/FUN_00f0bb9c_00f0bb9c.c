// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bb9c
// Entry Point: 00f0bb9c
// Size: 124 bytes
// Signature: undefined FUN_00f0bb9c(void)


void FUN_00f0bb9c(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x60);
  while ((lVar1 != 0 && (param_2 <= *(ulong *)(lVar1 + 8)))) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x20);
    plVar2 = (long *)(lVar1 + 0x10);
    *(long *)(*(long *)(lVar1 + 0x18) + 0x10) = *plVar2;
    *(undefined8 *)(*plVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    lVar4 = (*(long **)(lVar1 + 8))[1];
    lVar3 = **(long **)(lVar1 + 8);
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)(lVar1 + 0x18) = lVar4;
    *plVar2 = lVar3;
    FUN_00f0ca40(param_1,lVar1);
    lVar1 = *(long *)(param_1 + 0x60);
  }
  return;
}


