// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitLoadMipsSharedBuffer_async
// Entry Point: 00969724
// Size: 72 bytes
// Signature: undefined deinitLoadMipsSharedBuffer_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::UpgradePipeline::deinitLoadMipsSharedBuffer_async() */

void TextureStreamingManager::UpgradePipeline::deinitLoadMipsSharedBuffer_async(void)

{
  long in_x0;
  
  Mutex::enterCriticalSection();
  if (*(void **)(in_x0 + 0x2a8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x2a8));
  }
  *(undefined8 *)(in_x0 + 0x2a8) = 0;
  *(undefined4 *)(in_x0 + 0x2a4) = 0;
  *(undefined *)(in_x0 + 0x2a0) = 0;
                    /* try { // try from 00969758 to 0096975f has its CatchHandler @ 0096976c */
  Mutex::leaveCriticalSection();
  return;
}


