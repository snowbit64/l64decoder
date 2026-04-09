// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Increment_Frame_Counter
// Entry Point: 00fa819c
// Size: 24 bytes
// Signature: undefined Increment_Frame_Counter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileManager::Increment_Frame_Counter() */

void CProfileManager::Increment_Frame_Counter(void)

{
  FrameCounter = FrameCounter + 1;
  return;
}


