// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPerThreadData
// Entry Point: 00c04fec
// Size: 12 bytes
// Signature: undefined __cdecl createPerThreadData(uint param_1)


/* MapFoldT<DictionaryCompressor::PerItemData,
   DictionaryCompressor::PerThreadData>::createPerThreadData(unsigned int) */

void MapFoldT<DictionaryCompressor::PerItemData,DictionaryCompressor::PerThreadData>::
     createPerThreadData(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c04ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(ulong)param_1 + 0x28))();
  return;
}


