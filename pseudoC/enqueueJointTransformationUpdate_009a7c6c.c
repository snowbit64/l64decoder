// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueJointTransformationUpdate
// Entry Point: 009a7c6c
// Size: 292 bytes
// Signature: undefined __thiscall enqueueJointTransformationUpdate(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsJointObject * param_1)


/* Bt2ScenegraphPhysicsContext::enqueueJointTransformationUpdate(Bt2PhysicsJointObject*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueJointTransformationUpdate
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsJointObject *param_1)

{
  ulong uVar1;
  Bt2PhysicsJointObject **ppBVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    Bt2PhysicsJointObject::updatePose();
    return;
  }
  ppBVar2 = *(Bt2PhysicsJointObject ***)(this + 0xd0);
  if (ppBVar2 == *(Bt2PhysicsJointObject ***)(this + 0xd8)) {
    __src = *(void **)(this + 200);
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
    ppBVar2 = (Bt2PhysicsJointObject **)((long)__dest + ((long)__n >> 3) * 8);
    *ppBVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 200) = __dest;
    *(Bt2PhysicsJointObject ***)(this + 0xd0) = ppBVar2 + 1;
    *(void **)(this + 0xd8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppBVar2 = param_1;
    *(Bt2PhysicsJointObject ***)(this + 0xd0) = ppBVar2 + 1;
  }
  return;
}


