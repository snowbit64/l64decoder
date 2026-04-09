// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startWorker_main
// Entry Point: 0096634c
// Size: 44 bytes
// Signature: undefined startWorker_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::startWorker_main() */

void TextureStreamingManager::startWorker_main(void)

{
  void *in_x0;
  
  Thread::start((Thread *)((long)in_x0 + 0x88),staticThreadEntry_async,in_x0,0xffffffff,
                "GIANTS Texture Streaming Manager",3,0x100000);
  return;
}


