// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 008d34dc
// Size: 540 bytes
// Signature: undefined __thiscall push_back(__split_buffer<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>&> * this, vector * param_1)


/* std::__ndk1::__split_buffer<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned
   int> >, std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned
   int> > >&>::push_back(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>&>
::push_back(__split_buffer<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>&>
            *this,vector *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void **ppvVar6;
  void **ppvVar7;
  void **ppvVar8;
  void **ppvVar9;
  void **ppvVar10;
  
  ppvVar9 = *(void ***)(this + 0x10);
  ppvVar10 = ppvVar9;
  if (ppvVar9 == *(void ***)(this + 0x18)) {
    ppvVar8 = *(void ***)this;
    ppvVar10 = *(void ***)(this + 8);
    if (ppvVar10 < ppvVar8 || (long)ppvVar10 - (long)ppvVar8 == 0) {
      uVar5 = ((long)ppvVar9 - (long)ppvVar8 >> 3) * 0x5555555555555556;
      if ((long)ppvVar9 - (long)ppvVar8 == 0) {
        uVar5 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar5 * 0x18);
      ppvVar6 = (void **)((long)pvVar2 + (uVar5 >> 2) * 0x18);
      ppvVar7 = ppvVar6;
      if ((long)ppvVar9 - (long)ppvVar10 != 0) {
        ppvVar7 = (void **)((long)ppvVar6 + ((long)ppvVar9 - (long)ppvVar10));
        ppvVar9 = ppvVar6;
        do {
          pvVar1 = ppvVar10[1];
          *ppvVar9 = *ppvVar10;
          ppvVar9[1] = pvVar1;
          ppvVar9[2] = ppvVar10[2];
          ppvVar9 = ppvVar9 + 3;
          *ppvVar10 = (void *)0x0;
          ppvVar10[1] = (void *)0x0;
          ppvVar10[2] = (void *)0x0;
          ppvVar10 = ppvVar10 + 3;
        } while (ppvVar9 != ppvVar7);
        ppvVar8 = *(void ***)this;
        ppvVar10 = *(void ***)(this + 8);
        ppvVar9 = *(void ***)(this + 0x10);
      }
      *(void **)this = pvVar2;
      *(void ***)(this + 8) = ppvVar6;
      *(void ***)(this + 0x10) = ppvVar7;
      *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar5 * 0x18);
      while (ppvVar7 = ppvVar9, ppvVar7 != ppvVar10) {
        ppvVar9 = ppvVar7 + -3;
        pvVar2 = *ppvVar9;
        if (pvVar2 != (void *)0x0) {
          ppvVar7[-2] = pvVar2;
          operator_delete(pvVar2);
        }
      }
      if (ppvVar8 != (void **)0x0) {
        operator_delete(ppvVar8);
      }
      ppvVar10 = *(void ***)(this + 0x10);
    }
    else {
      lVar3 = ((long)ppvVar10 - (long)ppvVar8 >> 3) * -0x5555555555555555;
      lVar4 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar4 = lVar3 + 1;
      }
      lVar4 = lVar4 >> 1;
      if (ppvVar10 == ppvVar9) {
        ppvVar10 = ppvVar10 + lVar4 * -3;
      }
      else {
        do {
          pvVar2 = ppvVar10[lVar4 * -3];
          if (pvVar2 != (void *)0x0) {
            ppvVar8 = ppvVar10 + lVar4 * -3;
            ppvVar8[1] = pvVar2;
            operator_delete(pvVar2);
            *ppvVar8 = (void *)0x0;
            ppvVar8[1] = (void *)0x0;
            ppvVar8[2] = (void *)0x0;
          }
          pvVar2 = ppvVar10[1];
          ppvVar8 = ppvVar10 + lVar4 * -3;
          *ppvVar8 = *ppvVar10;
          ppvVar8[1] = pvVar2;
          ppvVar8[2] = ppvVar10[2];
          *ppvVar10 = (void *)0x0;
          ppvVar10[1] = (void *)0x0;
          ppvVar10[2] = (void *)0x0;
          ppvVar10 = ppvVar10 + 3;
        } while (ppvVar10 != ppvVar9);
        ppvVar9 = *(void ***)(this + 8);
        ppvVar10 = ppvVar10 + lVar4 * -3;
      }
      *(void ***)(this + 8) = ppvVar9 + lVar4 * -3;
      *(void ***)(this + 0x10) = ppvVar10;
    }
  }
  *ppvVar10 = (void *)0x0;
  ppvVar10[1] = (void *)0x0;
  ppvVar10[2] = (void *)0x0;
  pvVar2 = *(void **)(param_1 + 8);
  *ppvVar10 = *(void **)param_1;
  ppvVar10[1] = pvVar2;
  ppvVar10[2] = *(void **)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x18;
  return;
}


