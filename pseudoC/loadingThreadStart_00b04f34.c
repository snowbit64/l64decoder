// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadingThreadStart
// Entry Point: 00b04f34
// Size: 56 bytes
// Signature: undefined __cdecl loadingThreadStart(void * param_1, bool * param_2)


/* WebResourceManager::loadingThreadStart(void*, bool volatile&) */

undefined8 WebResourceManager::loadingThreadStart(void *param_1,bool *param_2)

{
                    /* WARNING: Load size is inaccurate */
  loadingThreadMain(*param_1,*(bool *)((long)param_1 + 0x11),param_2);
  *(undefined *)((long)param_1 + 0x10) = 1;
  return 0;
}


