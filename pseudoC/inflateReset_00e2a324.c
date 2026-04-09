// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateReset
// Entry Point: 00e2a324
// Size: 172 bytes
// Signature: undefined inflateReset(void)


undefined8 inflateReset(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x48) != 0)) &&
     (((plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0 && (*plVar3 == param_1)) &&
      (*(int *)(plVar3 + 1) - 0x3f34U < 0x20)))) {
    plVar3[8] = 0;
    *(undefined4 *)((long)plVar3 + 0x3c) = 0;
    plVar3[5] = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar2 = *(uint *)(plVar3 + 2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (uVar2 != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)uVar2 & 1;
    }
    plVar1 = plVar3 + 0xab;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0x8000;
    plVar3[0x12] = (long)plVar1;
    plVar3[0xd] = (long)plVar1;
    plVar3[0xe] = (long)plVar1;
    plVar3[1] = 0x3f34;
    plVar3[6] = 0;
    plVar3[10] = 0;
    *(undefined4 *)(plVar3 + 0xb) = 0;
    plVar3[0x37d] = -0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}


