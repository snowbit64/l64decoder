// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyPerThreadData
// Entry Point: 00c02248
// Size: 12 bytes
// Signature: undefined __cdecl destroyPerThreadData(void * param_1)


/* MapFoldT<DictionaryCreator::PerItemData,
   DictionaryCreator::PerThreadData>::destroyPerThreadData(void*) */

void MapFoldT<DictionaryCreator::PerItemData,DictionaryCreator::PerThreadData>::destroyPerThreadData
               (void *param_1)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00c02250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}


