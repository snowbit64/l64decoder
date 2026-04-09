// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unregisterTexture
// Entry Point: 00966c60
// Size: 300 bytes
// Signature: undefined __thiscall unregisterTexture(TextureStreamingManager * this, Texture * param_1)


/* TextureStreamingManager::unregisterTexture(Texture&) */

void __thiscall
TextureStreamingManager::unregisterTexture(TextureStreamingManager *this,Texture *param_1)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = RegistryPipeline::removeTexture_main((RegistryPipeline *)(this + 0x2d0),param_1);
  *(long *)(this + 0x830) = *(long *)(this + 0x830) + 1;
  Semaphore::post();
  Mutex::enterCriticalSection();
  if (DAT_0210f848 != DAT_0210f850) {
    lVar4 = 0;
    do {
      if (*(long *)(DAT_0210f848 + lVar4) == lVar3) {
        pvVar1 = (void *)(DAT_0210f848 + lVar4);
        sVar2 = DAT_0210f850 - (long)(void *)((long)pvVar1 + 0x108);
        if (sVar2 != 0) {
          memmove(pvVar1,(void *)((long)pvVar1 + 0x108),sVar2);
        }
        DAT_0210f850 = (long)pvVar1 + sVar2;
        break;
      }
      lVar4 = lVar4 + 0x108;
    } while (DAT_0210f848 + lVar4 != DAT_0210f850);
  }
                    /* try { // try from 00966d08 to 00966d0b has its CatchHandler @ 00966d90 */
  Mutex::leaveCriticalSection();
  Mutex::enterCriticalSection();
  if (DAT_0210f888 != DAT_0210f890) {
    lVar4 = 0;
    do {
      if (*(long *)(DAT_0210f888 + lVar4) == lVar3) {
        pvVar1 = (void *)(DAT_0210f888 + lVar4);
        sVar2 = DAT_0210f890 - (long)(void *)((long)pvVar1 + 0x108);
        if (sVar2 != 0) {
          memmove(pvVar1,(void *)((long)pvVar1 + 0x108),sVar2);
        }
        DAT_0210f890 = (long)pvVar1 + sVar2;
        break;
      }
      lVar4 = lVar4 + 0x108;
    } while (DAT_0210f888 + lVar4 != DAT_0210f890);
  }
                    /* try { // try from 00966d78 to 00966d7b has its CatchHandler @ 00966d8c */
  Mutex::leaveCriticalSection();
  return;
}


