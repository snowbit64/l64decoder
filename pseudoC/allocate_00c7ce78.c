// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00c7ce78
// Size: 60 bytes
// Signature: undefined __cdecl allocate(ulong param_1, void * param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned short, false>::allocate(unsigned long, void const*) */

undefined8
CryptoPP::AllocatorWithCleanup<unsigned_short,false>::allocate(ulong param_1,void *param_2)

{
  undefined8 uVar1;
  
  AllocatorBase<unsigned_short>::CheckSize((ulong)param_2);
  if (param_2 != (void *)0x0) {
    uVar1 = UnalignedAllocate((long)param_2 << 1);
    return uVar1;
  }
  return 0;
}


