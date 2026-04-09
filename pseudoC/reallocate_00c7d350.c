// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reallocate
// Entry Point: 00c7d350
// Size: 4 bytes
// Signature: undefined __thiscall reallocate(AllocatorWithCleanup<unsigned_long,false> * this, ulong * param_1, ulong param_2, ulong param_3, bool param_4)


/* CryptoPP::AllocatorWithCleanup<unsigned long, false>::reallocate(unsigned long*, unsigned long,
   unsigned long, bool) */

pointer __thiscall
CryptoPP::AllocatorWithCleanup<unsigned_long,false>::reallocate
          (AllocatorWithCleanup<unsigned_long,false> *this,ulong *param_1,ulong param_2,
          ulong param_3,bool param_4)

{
  pointer pVar1;
  
  pVar1 = StandardReallocate<unsigned_long,CryptoPP::AllocatorWithCleanup<unsigned_long,false>>
                    ((AllocatorWithCleanup *)this,param_1,(size_type)param_2,(size_type)param_3,
                     param_4);
  return pVar1;
}


