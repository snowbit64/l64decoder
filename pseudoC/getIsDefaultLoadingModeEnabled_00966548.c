// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsDefaultLoadingModeEnabled
// Entry Point: 00966548
// Size: 116 bytes
// Signature: undefined getIsDefaultLoadingModeEnabled(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::getIsDefaultLoadingModeEnabled() const */

void TextureStreamingManager::getIsDefaultLoadingModeEnabled(void)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  TextureStreamingManager *in_x0;
  ulong uVar4;
  long lVar5;
  bool abStack_2c [4];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (in_x0[0x7c] == (TextureStreamingManager)0x0) {
    lVar5 = *(long *)(in_x0 + 0x220);
    uVar1 = *(uint *)(in_x0 + 0x5a8);
    uVar4 = getSafeMemoryBudget(in_x0,0x12c00000,abStack_2c);
    bVar3 = lVar5 + (ulong)uVar1 + 0x100000 <= uVar4;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


