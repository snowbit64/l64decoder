// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveCharacterController
// Entry Point: 009aa134
// Size: 440 bytes
// Signature: undefined __thiscall enqueueRemoveCharacterController(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveCharacterController(unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveCharacterController
          (Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  long lVar1;
  size_t __n;
  void *__dest;
  Bt2ScenegraphPhysicsContext *pBVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  void *__src;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x330);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar2 = this + 0x330;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar2 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if ((pBVar2 != this + 0x330) && (*(uint *)(pBVar2 + 0x20) <= param_1)) {
      Bt2PhysicsCharacterController::markDeleted();
      puVar6 = *(uint **)(this + 0x360);
      if (puVar6 != *(uint **)(this + 0x368)) {
        *puVar6 = param_1;
        *(uint **)(this + 0x360) = puVar6 + 1;
        return;
      }
      __src = *(void **)(this + 0x358);
      uVar5 = (long)puVar6 - (long)__src;
      uVar4 = ((long)uVar5 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar4 <= (ulong)((long)uVar5 >> 1)) {
        uVar4 = (long)uVar5 >> 1;
      }
      if (0x7ffffffffffffffb < uVar5) {
        uVar4 = 0x3fffffffffffffff;
      }
      if (uVar4 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar4 << 2);
      }
      puVar6 = (uint *)((long)__dest + ((long)uVar5 >> 2) * 4);
      *puVar6 = param_1;
      if (0 < (long)uVar5) {
        memcpy(__dest,__src,uVar5);
      }
      *(void **)(this + 0x358) = __dest;
      *(uint **)(this + 0x360) = puVar6 + 1;
      *(void **)(this + 0x368) = (void *)((long)__dest + uVar4 * 4);
      if (__src == (void *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
  }
  lVar1 = *(long *)(this + 0x348) - *(long *)(this + 0x340);
  if (lVar1 != 0) {
    uVar4 = 0;
    uVar5 = (lVar1 >> 4) * -0x5555555555555555;
    do {
      puVar6 = (uint *)(*(long *)(this + 0x340) + uVar4 * 0x30);
      if (*puVar6 == param_1) {
        __n = *(long *)(this + 0x348) - (long)(puVar6 + 0xc);
        if (__n != 0) {
          memmove(puVar6,puVar6 + 0xc,__n);
        }
        *(size_t *)(this + 0x348) = (long)puVar6 + __n;
        return;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
  }
  return;
}


