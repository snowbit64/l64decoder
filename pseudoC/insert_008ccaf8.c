// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 008ccaf8
// Size: 980 bytes
// Signature: undefined __thiscall insert(vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>> * this, __wrap_iter param_1, vector * param_2)


/* std::__ndk1::vector<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> > >
   >::insert(std::__ndk1::__wrap_iter<std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> > const*>, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&&) */

void ** __thiscall
std::__ndk1::
vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
::insert(vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
         *this,__wrap_iter param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void **ppvVar7;
  ulong uVar8;
  void **ppvVar9;
  ulong uVar10;
  void **ppvVar11;
  void **ppvVar12;
  void **ppvVar13;
  long lVar14;
  void **local_80;
  void **local_78;
  void **local_70;
  void **local_68;
  vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
  *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)this;
  ppvVar9 = *(void ***)(this + 8);
  lVar2 = (long)((ulong)param_1 - lVar6) / 0x18;
  ppvVar12 = (void **)(lVar6 + lVar2 * 0x18);
  if (ppvVar9 < *(void ***)(this + 0x10)) {
    ppvVar13 = ppvVar12;
    if (ppvVar12 == ppvVar9) {
      *ppvVar12 = (void *)0x0;
      ppvVar12[1] = (void *)0x0;
      ppvVar12[2] = (void *)0x0;
      lVar6 = lVar6 + lVar2 * 0x18;
      *ppvVar12 = *(void **)param_2;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(void ***)(this + 8) = ppvVar12 + 3;
    }
    else {
      lVar5 = (long)ppvVar9 + (-0x18 - (long)ppvVar12);
      lVar14 = lVar5 / 0x18;
      ppvVar7 = ppvVar9;
      for (ppvVar11 = ppvVar12 + lVar14 * 3; ppvVar11 < ppvVar9; ppvVar11 = ppvVar11 + 3) {
        *ppvVar7 = (void *)0x0;
        ppvVar7[1] = (void *)0x0;
        ppvVar7[2] = (void *)0x0;
        *ppvVar7 = *ppvVar11;
        ppvVar7[1] = ppvVar11[1];
        ppvVar7[2] = ppvVar11[2];
        ppvVar7 = ppvVar7 + 3;
        *ppvVar11 = (void *)0x0;
        ppvVar11[1] = (void *)0x0;
        ppvVar11[2] = (void *)0x0;
      }
      *(void ***)(this + 8) = ppvVar7;
      if (lVar5 != 0) {
        lVar14 = lVar14 * 0x18;
        do {
          ppvVar7 = ppvVar9 + -3;
          pvVar3 = *ppvVar7;
          if (pvVar3 != (void *)0x0) {
            ppvVar9[-2] = pvVar3;
            operator_delete(pvVar3);
            *ppvVar7 = (void *)0x0;
            ppvVar9[-2] = (void *)0x0;
            ppvVar9[-1] = (void *)0x0;
          }
          lVar5 = lVar14 + -0x18;
          *ppvVar7 = *(void **)((long)ppvVar12 + lVar14 + -0x18);
          ppvVar9[-2] = *(void **)((long)ppvVar12 + lVar14 + -0x10);
          ppvVar9[-1] = *(void **)((long)ppvVar12 + lVar14 + -8);
          *(undefined8 *)((long)ppvVar12 + lVar14 + -0x18) = 0;
          *(undefined8 *)((long)ppvVar12 + lVar14 + -0x10) = 0;
          *(undefined8 *)((long)ppvVar12 + lVar14 + -8) = 0;
          lVar14 = lVar5;
          ppvVar9 = ppvVar7;
        } while (lVar5 != 0);
      }
      pvVar3 = *ppvVar12;
      if (pvVar3 != (void *)0x0) {
        *(void **)(lVar6 + lVar2 * 0x18 + 8) = pvVar3;
        operator_delete(pvVar3);
        *ppvVar12 = (void *)0x0;
        ppvVar12[1] = (void *)0x0;
        ppvVar12[2] = (void *)0x0;
      }
      *ppvVar12 = *(void **)param_2;
      lVar6 = lVar6 + lVar2 * 0x18;
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
  }
  else {
    uVar8 = ((long)ppvVar9 - lVar6 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(void ***)(this + 0x10) - lVar6 >> 3;
    uVar10 = lVar6 * 0x5555555555555556;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    local_60 = this + 0x10;
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 == 0) {
      local_80 = (void **)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_80 = (void **)operator_new(uVar8 * 0x18);
    }
    local_78 = local_80 + lVar2 * 3;
    local_68 = local_80 + uVar8 * 3;
    local_70 = local_78;
                    /* try { // try from 008ccd58 to 008ccd63 has its CatchHandler @ 008ccecc */
    __split_buffer<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>&>
    ::push_back((__split_buffer<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>&>
                 *)&local_80,param_2);
    ppvVar13 = local_78;
    ppvVar7 = *(void ***)this;
    ppvVar9 = ppvVar12;
    while (ppvVar7 != ppvVar9) {
      local_78[-3] = (void *)0x0;
      local_78[-2] = (void *)0x0;
      local_78[-1] = (void *)0x0;
      ppvVar11 = ppvVar9 + -3;
      local_78[-3] = *ppvVar11;
      local_78[-2] = ppvVar9[-2];
      local_78[-1] = ppvVar9[-1];
      *ppvVar11 = (void *)0x0;
      ppvVar9[-2] = (void *)0x0;
      ppvVar9[-1] = (void *)0x0;
      local_78 = local_78 + -3;
      ppvVar9 = ppvVar11;
    }
    ppvVar9 = *(void ***)(this + 8);
    if (ppvVar9 != ppvVar12) {
      do {
        *local_70 = (void *)0x0;
        local_70[1] = (void *)0x0;
        local_70[2] = (void *)0x0;
        *local_70 = *ppvVar12;
        local_70[1] = ppvVar12[1];
        local_70[2] = ppvVar12[2];
        *ppvVar12 = (void *)0x0;
        ppvVar12[1] = (void *)0x0;
        ppvVar12[2] = (void *)0x0;
        ppvVar12 = ppvVar12 + 3;
        local_70 = local_70 + 3;
      } while (ppvVar12 != ppvVar9);
      ppvVar12 = *(void ***)(this + 8);
    }
    ppvVar9 = *(void ***)this;
    *(void ***)this = local_78;
    *(void ***)(this + 8) = local_70;
    uVar4 = *(undefined8 *)(this + 0x10);
    *(void ***)(this + 0x10) = local_68;
    local_80 = ppvVar9;
    local_78 = ppvVar9;
    local_68 = (void **)uVar4;
    local_70 = ppvVar12;
    while (ppvVar7 = local_70, local_70 != ppvVar9) {
      while( true ) {
        local_70 = ppvVar7 + -3;
        pvVar3 = *local_70;
        if (pvVar3 != (void *)0x0) break;
        ppvVar7 = local_70;
        ppvVar12 = local_80;
        if (local_70 == ppvVar9) goto joined_r0x008cceac;
      }
      ppvVar7[-2] = pvVar3;
      operator_delete(pvVar3);
      ppvVar12 = local_80;
    }
joined_r0x008cceac:
    if (ppvVar12 != (void **)0x0) {
      operator_delete(ppvVar12);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return ppvVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


