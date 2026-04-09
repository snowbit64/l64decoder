// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00c7d220
// Size: 60 bytes
// Signature: undefined __cdecl allocate(ulong param_1, void * param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned long, false>::allocate(unsigned long, void const*) */

undefined8
CryptoPP::AllocatorWithCleanup<unsigned_long,false>::allocate(ulong param_1,void *param_2)

{
  undefined8 uVar1;
  
  AllocatorBase<unsigned_long>::CheckSize((ulong)param_2);
  if (param_2 != (void *)0x0) {
    uVar1 = UnalignedAllocate((long)param_2 << 3);
    return uVar1;
  }
  return 0;
}


