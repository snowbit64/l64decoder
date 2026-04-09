// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UnalignedDeallocate
// Entry Point: 00d0a5d4
// Size: 4 bytes
// Signature: undefined __cdecl UnalignedDeallocate(void * param_1)


/* CryptoPP::UnalignedDeallocate(void*) */

void CryptoPP::UnalignedDeallocate(void *param_1)

{
  free(param_1);
  return;
}


