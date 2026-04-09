// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyPerThreadData
// Entry Point: 00c04ff8
// Size: 12 bytes
// Signature: undefined __cdecl destroyPerThreadData(void * param_1)


/* MapFoldT<DictionaryCompressor::PerItemData,
   DictionaryCompressor::PerThreadData>::destroyPerThreadData(void*) */

void MapFoldT<DictionaryCompressor::PerItemData,DictionaryCompressor::PerThreadData>::
     destroyPerThreadData(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00c05000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}


