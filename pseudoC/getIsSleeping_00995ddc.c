// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsSleeping
// Entry Point: 00995ddc
// Size: 44 bytes
// Signature: undefined getIsSleeping(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsRBObject::getIsSleeping() const */

bool Bt2PhysicsRBObject::getIsSleeping(void)

{
  int iVar1;
  long in_x0;
  
  if (*(long *)(in_x0 + 0x30) != 0) {
    iVar1 = *(int *)(*(long *)(in_x0 + 0x30) + 0xec);
    return iVar1 == 2 || iVar1 == 5;
  }
  return true;
}


