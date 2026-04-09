// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>
// Entry Point: 008d3180
// Size: 352 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>(vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>> * this, vector * param_1)


/* void std::__ndk1::vector<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   >, std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int>
   > > >::__push_back_slow_path<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned
   int> > >(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
::__push_back_slow_path<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>
          (vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  long lVar7;
  ulong uVar8;
  void **ppvVar9;
  void *pvVar11;
  void **ppvVar12;
  void *pvVar13;
  void *pvVar14;
  void **ppvVar10;
  
  lVar3 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar2 = operator_new(uVar1 * 0x18);
  pvVar11 = *(void **)(param_1 + 0x10);
  pvVar14 = *(void **)(param_1 + 8);
  pvVar13 = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  ppvVar4 = (void **)((long)pvVar2 + lVar3 * 8);
  ppvVar12 = *(void ***)this;
  ppvVar9 = *(void ***)(this + 8);
  pvVar2 = (void *)((long)pvVar2 + uVar1 * 0x18);
  ppvVar4[2] = pvVar11;
  ppvVar4[1] = pvVar14;
  *ppvVar4 = pvVar13;
  ppvVar5 = ppvVar4;
  if (ppvVar9 == ppvVar12) {
    *(void ***)this = ppvVar4;
    *(void ***)(this + 8) = ppvVar4 + 3;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    do {
      ppvVar10 = ppvVar9 + -3;
      pvVar11 = ppvVar9[-2];
      ppvVar6 = ppvVar5 + -3;
      *ppvVar6 = *ppvVar10;
      ppvVar5[-2] = pvVar11;
      ppvVar5[-1] = ppvVar9[-1];
      *ppvVar10 = (void *)0x0;
      ppvVar9[-2] = (void *)0x0;
      ppvVar9[-1] = (void *)0x0;
      ppvVar5 = ppvVar6;
      ppvVar9 = ppvVar10;
    } while (ppvVar10 != ppvVar12);
    ppvVar12 = *(void ***)this;
    ppvVar9 = *(void ***)(this + 8);
    *(void ***)this = ppvVar6;
    *(void ***)(this + 8) = ppvVar4 + 3;
    *(void **)(this + 0x10) = pvVar2;
    while (ppvVar5 = ppvVar9, ppvVar5 != ppvVar12) {
      ppvVar9 = ppvVar5 + -3;
      pvVar2 = *ppvVar9;
      if (pvVar2 != (void *)0x0) {
        ppvVar5[-2] = pvVar2;
        operator_delete(pvVar2);
      }
    }
  }
  if (ppvVar12 == (void **)0x0) {
    return;
  }
  operator_delete(ppvVar12);
  return;
}


