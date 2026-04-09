// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tick
// Entry Point: 00713fcc
// Size: 120 bytes
// Signature: undefined tick(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTBehavior::tick() */

ulong BTBehavior::tick(void)

{
  long *in_x0;
  ulong uVar1;
  
  if (*(int *)(in_x0 + 1) != 3) {
    uVar1 = (**(code **)(*in_x0 + 0x18))();
    *(int *)(in_x0 + 1) = (int)uVar1;
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  uVar1 = (**(code **)(*in_x0 + 0x10))();
  *(int *)(in_x0 + 1) = (int)uVar1;
  if ((int)uVar1 != 3) {
    (**(code **)(*in_x0 + 0x20))();
    uVar1 = (ulong)*(uint *)(in_x0 + 1);
  }
  return uVar1;
}


