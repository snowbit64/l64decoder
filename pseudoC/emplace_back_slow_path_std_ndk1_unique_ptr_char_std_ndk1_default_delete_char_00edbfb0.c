// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>
// Entry Point: 00edbfb0
// Size: 288 bytes
// Signature: void __thiscall __emplace_back_slow_path<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>(vector<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>> * this, unique_ptr * param_1)


/* void std::__ndk1::vector<std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> >,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> > >
   >::__emplace_back_slow_path<std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []>
   > >(std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
::__emplace_back_slow_path<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>
          (vector<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
           *this,unique_ptr *param_1)

{
  ulong uVar1;
  void **ppvVar2;
  void *pvVar3;
  void **ppvVar4;
  ulong uVar5;
  ulong uVar6;
  void **ppvVar7;
  void **ppvVar8;
  void *pvVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar6 = (long)uVar5 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar3 = operator_new(uVar1 << 3);
  }
  pvVar9 = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  ppvVar2 = *(void ***)this;
  ppvVar8 = *(void ***)(this + 8);
  ppvVar4 = (void **)((long)pvVar3 + lVar10 * 8);
  pvVar3 = (void *)((long)pvVar3 + uVar1 * 8);
  ppvVar7 = ppvVar4 + 1;
  *ppvVar4 = pvVar9;
  if (ppvVar8 == ppvVar2) {
    *(void ***)this = ppvVar4;
    *(void ***)(this + 8) = ppvVar7;
    *(void **)(this + 0x10) = pvVar3;
  }
  else {
    do {
      ppvVar8 = ppvVar8 + -1;
      pvVar9 = *ppvVar8;
      *ppvVar8 = (void *)0x0;
      ppvVar4 = ppvVar4 + -1;
      *ppvVar4 = pvVar9;
    } while (ppvVar8 != ppvVar2);
    ppvVar2 = *(void ***)this;
    ppvVar8 = *(void ***)(this + 8);
    *(void ***)this = ppvVar4;
    *(void ***)(this + 8) = ppvVar7;
    *(void **)(this + 0x10) = pvVar3;
    while (ppvVar8 != ppvVar2) {
      ppvVar8 = ppvVar8 + -1;
      pvVar3 = *ppvVar8;
      *ppvVar8 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
  }
  if (ppvVar2 == (void **)0x0) {
    return;
  }
  operator_delete(ppvVar2);
  return;
}


