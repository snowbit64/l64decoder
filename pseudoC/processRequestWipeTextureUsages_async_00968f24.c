// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRequestWipeTextureUsages_async
// Entry Point: 00968f24
// Size: 180 bytes
// Signature: undefined processRequestWipeTextureUsages_async(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processRequestWipeTextureUsages_async() */

void TextureStreamingManager::processRequestWipeTextureUsages_async(void)

{
  void **ppvVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  if (*(char *)(in_x0 + 0x148) != '\0') {
    plVar5 = *(long **)(in_x0 + 0x160);
    *(undefined *)(in_x0 + 0x148) = 0;
    if (plVar5 != (long *)0x0) {
      do {
        std::__ndk1::
        __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
        ::__emplace_unique_key_args<unsigned_long_long,unsigned_long_long_const&>
                  ((__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                    *)(in_x0 + 0x1c8),(ulonglong *)(plVar5 + 2),(ulonglong *)(plVar5 + 2));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    if (*(long *)(in_x0 + 0x168) != 0) {
      ppvVar1 = (void **)*(void **)(in_x0 + 0x160);
      while (ppvVar1 != (void **)0x0) {
        pvVar4 = *ppvVar1;
        operator_delete(ppvVar1);
        ppvVar1 = (void **)pvVar4;
      }
      lVar2 = *(long *)(in_x0 + 0x158);
      *(undefined8 *)(in_x0 + 0x160) = 0;
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(in_x0 + 0x150) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      *(undefined8 *)(in_x0 + 0x168) = 0;
    }
    _DAT_0210ee20 = 0;
    DAT_0210ee38 = (undefined4)*(undefined8 *)(in_x0 + 0x1e0);
  }
  return;
}


