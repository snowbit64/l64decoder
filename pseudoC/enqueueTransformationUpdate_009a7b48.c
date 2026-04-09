// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueTransformationUpdate
// Entry Point: 009a7b48
// Size: 292 bytes
// Signature: undefined __thiscall enqueueTransformationUpdate(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsRBObject * param_1)


/* Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate(Bt2PhysicsRBObject*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsRBObject *param_1)

{
  ulong uVar1;
  Bt2PhysicsRBObject **ppBVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    Bt2PhysicsRBObject::update();
    return;
  }
  ppBVar2 = *(Bt2PhysicsRBObject ***)(this + 0xb8);
  if (ppBVar2 == *(Bt2PhysicsRBObject ***)(this + 0xc0)) {
    __src = *(void **)(this + 0xb0);
    __n = (long)ppBVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    ppBVar2 = (Bt2PhysicsRBObject **)((long)__dest + ((long)__n >> 3) * 8);
    *ppBVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xb0) = __dest;
    *(Bt2PhysicsRBObject ***)(this + 0xb8) = ppBVar2 + 1;
    *(void **)(this + 0xc0) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppBVar2 = param_1;
    *(Bt2PhysicsRBObject ***)(this + 0xb8) = ppBVar2 + 1;
  }
  return;
}


