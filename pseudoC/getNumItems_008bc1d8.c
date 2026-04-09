// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumItems
// Entry Point: 008bc1d8
// Size: 48 bytes
// Signature: undefined getNumItems(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::getNumItems() */

undefined8 SoundPlayer::getNumItems(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if ((*(char *)(in_x0 + 0xd9) != '\0') && (*(long *)(in_x0 + 0xe8) != *(long *)(in_x0 + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 0xe8) + (ulong)*(uint *)(in_x0 + 0x100) * 8)
                        + 0x38))();
    return uVar1;
  }
  return 0;
}


