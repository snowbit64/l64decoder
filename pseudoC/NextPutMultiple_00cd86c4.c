// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutMultiple
// Entry Point: 00cd86c4
// Size: 44 bytes
// Signature: undefined __cdecl NextPutMultiple(uchar * param_1, ulong param_2)


/* CryptoPP::ProxyFilter::NextPutMultiple(unsigned char const*, unsigned long) */

void CryptoPP::ProxyFilter::NextPutMultiple(uchar *param_1,ulong param_2)

{
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x38))();
  }
  return;
}


