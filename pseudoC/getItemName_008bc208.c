// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getItemName
// Entry Point: 008bc208
// Size: 52 bytes
// Signature: undefined getItemName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::getItemName() */

undefined * SoundPlayer::getItemName(void)

{
  long in_x0;
  undefined *puVar1;
  
  if ((*(char *)(in_x0 + 0xd9) != '\0') && (*(long *)(in_x0 + 0xe8) != *(long *)(in_x0 + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)
             (**(code **)(**(long **)(*(long *)(in_x0 + 0xe8) + (ulong)*(uint *)(in_x0 + 0x100) * 8)
                         + 0x40))();
    return puVar1;
  }
  return &DAT_0050a39f;
}


