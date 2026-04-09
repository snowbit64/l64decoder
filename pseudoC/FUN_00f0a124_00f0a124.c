// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a124
// Entry Point: 00f0a124
// Size: 216 bytes
// Signature: undefined FUN_00f0a124(void)


int FUN_00f0a124(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (0 < (int)*(uint *)(param_1 + 0x60))) {
    uVar3 = 0;
    do {
      if ((*(char *)(*(long *)(param_1 + 0x10) + uVar3 * 4) != 'A') &&
         (iVar4 = *(int *)(*(long *)(param_1 + 0x28) +
                          (long)(int)((uint)uVar3 >> (ulong)(*(uint *)(param_1 + 0x78) & 0x1f)) * 4)
                  + (uint)*(byte *)(*(long *)(param_1 + 0x20) + uVar3), param_2 <= iVar4))
      goto LAB_00f0a19c;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x60) != uVar3);
  }
  iVar4 = -1;
LAB_00f0a19c:
  uVar3 = (ulong)*(uint *)(param_1 + 100);
  if (0 < (int)*(uint *)(param_1 + 100)) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    do {
      iVar2 = FUN_00f0a124(*puVar5,param_2);
      iVar1 = iVar2;
      if (((iVar4 != -1) && (iVar1 = iVar4, param_2 <= iVar2)) && (iVar1 = iVar2, iVar4 <= iVar2)) {
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      puVar5 = puVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}


