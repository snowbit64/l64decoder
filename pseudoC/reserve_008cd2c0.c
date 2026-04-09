// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 008cd2c0
// Size: 268 bytes
// Signature: undefined __thiscall reserve(vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>> * this, ulong param_1)


/* std::__ndk1::vector<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short>
   > > >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
::reserve(vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
          *this,ulong param_1)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void **ppvVar8;
  
  ppvVar6 = *(void ***)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)ppvVar6 >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    ppvVar7 = *(void ***)(this + 8);
    pvVar3 = operator_new(param_1 * 0x18);
    ppvVar1 = (void **)((long)pvVar3 + ((long)ppvVar7 - (long)ppvVar6));
    pvVar3 = (void *)((long)pvVar3 + param_1 * 0x18);
    ppvVar4 = ppvVar1;
    if ((long)ppvVar7 - (long)ppvVar6 == 0) {
      *(void ***)this = ppvVar1;
      *(void ***)(this + 8) = ppvVar1;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        ppvVar8 = ppvVar7 + -3;
        pvVar2 = ppvVar7[-2];
        ppvVar5 = ppvVar4 + -3;
        *ppvVar5 = *ppvVar8;
        ppvVar4[-2] = pvVar2;
        ppvVar4[-1] = ppvVar7[-1];
        *ppvVar8 = (void *)0x0;
        ppvVar7[-2] = (void *)0x0;
        ppvVar7[-1] = (void *)0x0;
        ppvVar4 = ppvVar5;
        ppvVar7 = ppvVar8;
      } while (ppvVar8 != ppvVar6);
      ppvVar6 = *(void ***)this;
      ppvVar4 = *(void ***)(this + 8);
      *(void ***)this = ppvVar5;
      *(void ***)(this + 8) = ppvVar1;
      *(void **)(this + 0x10) = pvVar3;
      while (ppvVar1 = ppvVar4, ppvVar1 != ppvVar6) {
        ppvVar4 = ppvVar1 + -3;
        pvVar3 = *ppvVar4;
        if (pvVar3 != (void *)0x0) {
          ppvVar1[-2] = pvVar3;
          operator_delete(pvVar3);
        }
      }
    }
    if (ppvVar6 != (void **)0x0) {
      operator_delete(ppvVar6);
      return;
    }
  }
  return;
}


