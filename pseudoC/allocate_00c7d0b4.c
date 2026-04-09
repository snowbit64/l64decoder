// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00c7d0b4
// Size: 60 bytes
// Signature: undefined __cdecl allocate(ulong param_1, void * param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned int, false>::allocate(unsigned long, void const*) */

undefined8 CryptoPP::AllocatorWithCleanup<unsigned_int,false>::allocate(ulong param_1,void *param_2)

{
  undefined8 uVar1;
  
  AllocatorBase<unsigned_int>::CheckSize((ulong)param_2);
  if (param_2 != (void *)0x0) {
    uVar1 = UnalignedAllocate((long)param_2 << 2);
    return uVar1;
  }
  return 0;
}


