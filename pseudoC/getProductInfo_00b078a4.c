// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProductInfo
// Entry Point: 00b078a4
// Size: 24 bytes
// Signature: undefined __cdecl getProductInfo(uint param_1)


/* GenericStoreUtil::getProductInfo(unsigned int) */

undefined1 * GenericStoreUtil::getProductInfo(uint param_1)

{
  return s_products + (ulong)param_1 * 0x98;
}


