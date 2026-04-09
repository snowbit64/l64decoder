// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinit
// Entry Point: 00966378
// Size: 104 bytes
// Signature: undefined deinit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::deinit() */

void TextureStreamingManager::deinit(void)

{
  char *in_x0;
  
  if (*in_x0 != '\0') {
    in_x0[0xe0] = '\x01';
    Semaphore::post();
    Thread::join();
    in_x0[0xe0] = '\0';
  }
  if (in_x0[0x840] != '\0') {
    if (*(long **)(in_x0 + 0x848) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x848) + 8))();
    }
    *(undefined8 *)(in_x0 + 0x848) = 0;
    in_x0[0x840] = '\0';
  }
  in_x0[1] = '\0';
  return;
}


