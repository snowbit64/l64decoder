// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProductData
// Entry Point: 00b34f0c
// Size: 8 bytes
// Signature: undefined __cdecl getProductData(char * param_1, bool param_2, uint * param_3, KEY_TYPE * param_4, ulonglong * param_5)


/* NativeFileLoader::getProductData(char const*, bool, unsigned int&, IFileLoader::KEY_TYPE&,
   unsigned long long&) */

undefined  [16]
NativeFileLoader::getProductData
          (char *param_1,bool param_2,uint *param_3,KEY_TYPE *param_4,ulonglong *param_5)

{
  return ZEXT116(param_2) << 0x40;
}


