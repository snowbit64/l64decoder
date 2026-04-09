// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutModifiable
// Entry Point: 00cd86f0
// Size: 44 bytes
// Signature: undefined __cdecl NextPutModifiable(uchar * param_1, ulong param_2)


/* CryptoPP::ProxyFilter::NextPutModifiable(unsigned char*, unsigned long) */

void CryptoPP::ProxyFilter::NextPutModifiable(uchar *param_1,ulong param_2)

{
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x40))();
  }
  return;
}


