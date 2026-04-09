// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00c70d84
// Size: 100 bytes
// Signature: undefined play(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoPlayer::play() */

undefined8 VideoPlayer::play(void)

{
  undefined *in_x0;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(in_x0 + 0x38);
  *in_x0 = 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(*(undefined4 *)(in_x0 + 4),0x3f800000,0,0,plVar1,0,0);
  }
  *(undefined4 *)(in_x0 + 0x50) = 0;
  uVar2 = Watch::getCurrentTicks();
  *(undefined8 *)(in_x0 + 0x48) = uVar2;
  return 1;
}


