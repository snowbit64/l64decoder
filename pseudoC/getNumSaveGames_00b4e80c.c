// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumSaveGames
// Entry Point: 00b4e80c
// Size: 44 bytes
// Signature: undefined getNumSaveGames(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::getNumSaveGames() */

undefined4 GenericSaveGameUtil::getNumSaveGames(void)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulong)(DAT_0211c588 - s_saveGames) >> 3);
  if (s_state == 1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


