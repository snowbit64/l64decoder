// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPerThreadData
// Entry Point: 00c0223c
// Size: 12 bytes
// Signature: undefined __cdecl createPerThreadData(uint param_1)


/* MapFoldT<DictionaryCreator::PerItemData,
   DictionaryCreator::PerThreadData>::createPerThreadData(unsigned int) */

void MapFoldT<DictionaryCreator::PerItemData,DictionaryCreator::PerThreadData>::createPerThreadData
               (uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c02244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(ulong)param_1 + 0x28))();
  return;
}


