// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBusy
// Entry Point: 009664a4
// Size: 116 bytes
// Signature: undefined isBusy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::RegistryPipeline::isBusy() const */

bool TextureStreamingManager::RegistryPipeline::isBusy(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(in_x0 + 0xa0);
                    /* try { // try from 009664c8 to 009664cf has its CatchHandler @ 0096651c */
  Mutex::leaveCriticalSection();
  if (lVar2 == 0) {
    Mutex::enterCriticalSection();
    lVar2 = *(long *)(in_x0 + 0xd8);
    lVar1 = *(long *)(in_x0 + 0xe0);
                    /* try { // try from 009664e4 to 009664eb has its CatchHandler @ 00966518 */
    Mutex::leaveCriticalSection();
    if (lVar2 == lVar1) {
      return *(long *)(in_x0 + 0xf0) != *(long *)(in_x0 + 0xf8);
    }
  }
  return true;
}


