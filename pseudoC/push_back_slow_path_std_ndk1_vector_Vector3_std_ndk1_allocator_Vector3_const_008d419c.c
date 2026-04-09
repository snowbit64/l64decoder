// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>const&>
// Entry Point: 008d419c
// Size: 432 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>const&>(vector<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>> * this, vector * param_1)


/* void std::__ndk1::vector<std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >,
   std::__ndk1::allocator<std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> > >
   >::__push_back_slow_path<std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >
   const&>(std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>>
::__push_back_slow_path<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>const&>
          (vector<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>,std::__ndk1::allocator<std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>>>
           *this,vector *param_1)

{
  ulong uVar1;
  vector<Vector3,std::__ndk1::allocator<Vector3>> *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void **ppvVar7;
  void **ppvVar8;
  long lVar9;
  ulong uVar10;
  vector<Vector3,std::__ndk1::allocator<Vector3>> *this_00;
  void **ppvVar11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5555555555555556;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x18);
  }
  this_00 = (vector<Vector3,std::__ndk1::allocator<Vector3>> *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 008d425c to 008d4267 has its CatchHandler @ 008d434c */
  vector<Vector3,std::__ndk1::allocator<Vector3>>::vector(this_00,param_1);
  ppvVar7 = *(void ***)this;
  pvVar2 = this_00 + 0x18;
  ppvVar8 = *(void ***)(this + 8);
  ppvVar11 = ppvVar7;
  if (*(void ***)(this + 8) != ppvVar7) {
    do {
      *(undefined8 *)(this_00 + -0x18) = 0;
      *(undefined8 *)(this_00 + -0x10) = 0;
      *(undefined8 *)(this_00 + -8) = 0;
      ppvVar11 = ppvVar8 + -3;
      *(void **)(this_00 + -0x18) = *ppvVar11;
      *(void **)(this_00 + -0x10) = ppvVar8[-2];
      *(void **)(this_00 + -8) = ppvVar8[-1];
      *ppvVar11 = (void *)0x0;
      ppvVar8[-2] = (void *)0x0;
      ppvVar8[-1] = (void *)0x0;
      this_00 = this_00 + -0x18;
      ppvVar8 = ppvVar11;
    } while (ppvVar11 != ppvVar7);
    ppvVar7 = *(void ***)(this + 8);
    ppvVar11 = *(void ***)this;
  }
  *(vector<Vector3,std::__ndk1::allocator<Vector3>> **)this = this_00;
  *(vector<Vector3,std::__ndk1::allocator<Vector3>> **)(this + 8) = pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
  while (ppvVar8 = ppvVar7, ppvVar8 != ppvVar11) {
    ppvVar7 = ppvVar8 + -3;
    pvVar4 = *ppvVar7;
    if (pvVar4 != (void *)0x0) {
      ppvVar8[-2] = pvVar4;
      operator_delete(pvVar4);
    }
  }
  if (ppvVar11 != (void **)0x0) {
    operator_delete(ppvVar11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


