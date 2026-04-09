// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deallocate
// Entry Point: 00c7d330
// Size: 32 bytes
// Signature: undefined __thiscall deallocate(AllocatorWithCleanup<unsigned_long,false> * this, void * param_1, ulong param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned long, false>::deallocate(void*, unsigned long) */

void __thiscall
CryptoPP::AllocatorWithCleanup<unsigned_long,false>::deallocate
          (AllocatorWithCleanup<unsigned_long,false> *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    do {
      uVar1 = param_2 - 1;
      *(undefined8 *)((long)param_1 + param_2 * 8 + -8) = 0;
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
  UnalignedDeallocate(param_1);
  return;
}


