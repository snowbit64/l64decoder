// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deallocate
// Entry Point: 00c7cf84
// Size: 32 bytes
// Signature: undefined __thiscall deallocate(AllocatorWithCleanup<unsigned_short,false> * this, void * param_1, ulong param_2)


/* CryptoPP::AllocatorWithCleanup<unsigned short, false>::deallocate(void*, unsigned long) */

void __thiscall
CryptoPP::AllocatorWithCleanup<unsigned_short,false>::deallocate
          (AllocatorWithCleanup<unsigned_short,false> *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    do {
      uVar1 = param_2 - 1;
      *(undefined2 *)((long)param_1 + param_2 * 2 + -2) = 0;
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
  UnalignedDeallocate(param_1);
  return;
}


