// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addUpdateable
// Entry Point: 00b04700
// Size: 448 bytes
// Signature: undefined __thiscall addUpdateable(UpdateManager * this, Updateable * param_1, bool param_2)


/* UpdateManager::addUpdateable(Updateable*, bool) */

void __thiscall UpdateManager::addUpdateable(UpdateManager *this,Updateable *param_1,bool param_2)

{
  ulong uVar1;
  Updateable **ppUVar2;
  void *pvVar3;
  void *__src;
  ulong uVar4;
  
  Mutex::enterCriticalSection();
  if (param_2) {
    ppUVar2 = *(Updateable ***)(this + 0x20);
    if (ppUVar2 != *(Updateable ***)(this + 0x28)) {
      *ppUVar2 = param_1;
      *(Updateable ***)(this + 0x20) = ppUVar2 + 1;
      goto LAB_00b04880;
    }
    __src = *(void **)(this + 0x18);
    uVar4 = (long)ppUVar2 - (long)__src;
    uVar1 = ((long)uVar4 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar4 >> 2)) {
      uVar1 = (long)uVar4 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
LAB_00b048a8:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 << 3);
    }
    ppUVar2 = (Updateable **)((long)pvVar3 + ((long)uVar4 >> 3) * 8);
    *ppUVar2 = param_1;
    if (0 < (long)uVar4) {
      memcpy(pvVar3,__src,uVar4);
    }
    *(void **)(this + 0x18) = pvVar3;
    *(Updateable ***)(this + 0x20) = ppUVar2 + 1;
    *(void **)(this + 0x28) = (void *)((long)pvVar3 + uVar1 * 8);
  }
  else {
    ppUVar2 = *(Updateable ***)(this + 8);
    if (ppUVar2 != *(Updateable ***)(this + 0x10)) {
      *ppUVar2 = param_1;
      *(Updateable ***)(this + 8) = ppUVar2 + 1;
      goto LAB_00b04880;
    }
    __src = *(void **)this;
    uVar4 = (long)ppUVar2 - (long)__src;
    uVar1 = ((long)uVar4 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar4 >> 2)) {
      uVar1 = (long)uVar4 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00b048a8;
      pvVar3 = operator_new(uVar1 << 3);
    }
    ppUVar2 = (Updateable **)((long)pvVar3 + ((long)uVar4 >> 3) * 8);
    *ppUVar2 = param_1;
    if (0 < (long)uVar4) {
      memcpy(pvVar3,__src,uVar4);
    }
    *(void **)this = pvVar3;
    *(Updateable ***)(this + 8) = ppUVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 8);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00b04880:
  param_1[8] = (Updateable)param_2;
  Mutex::leaveCriticalSection();
  return;
}


