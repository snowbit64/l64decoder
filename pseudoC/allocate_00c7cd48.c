// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00c7cd48
// Size: 20 bytes
// Signature: undefined __cdecl allocate(ulong param_1, void * param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned char, false>::allocate(unsigned long, void const*) */

undefined8
CryptoPP::AllocatorWithCleanup<unsigned_char,false>::allocate(ulong param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (void *)0x0) {
    uVar1 = UnalignedAllocate((ulong)param_2);
    return uVar1;
  }
  return 0;
}


