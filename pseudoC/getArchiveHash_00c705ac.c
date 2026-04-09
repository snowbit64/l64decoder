// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveHash
// Entry Point: 00c705ac
// Size: 8 bytes
// Signature: undefined __cdecl getArchiveHash(char * param_1, bool param_2, uchar * param_3)


/* APKFileLoader::getArchiveHash(char const*, bool, unsigned char*) */

undefined  [16] APKFileLoader::getArchiveHash(char *param_1,bool param_2,uchar *param_3)

{
  return ZEXT116(param_2) << 0x40;
}


