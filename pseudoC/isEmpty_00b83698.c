// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEmpty
// Entry Point: 00b83698
// Size: 80 bytes
// Signature: undefined isEmpty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BuddyAllocator::isEmpty() const */

bool BuddyAllocator::isEmpty(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *in_x0;
  int *piVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)((long)in_x0 + 0x1c);
  if (uVar1 == 0) {
    return true;
  }
  if (*(int *)(*in_x0 + 8) != 0) {
    return false;
  }
  piVar4 = (int *)(*in_x0 + 0x28);
  uVar3 = 1;
  do {
    uVar5 = uVar3;
    if (uVar1 == uVar5) break;
    iVar2 = *piVar4;
    piVar4 = piVar4 + 8;
    uVar3 = uVar5 + 1;
  } while (iVar2 == 0);
  return uVar1 <= uVar5;
}


