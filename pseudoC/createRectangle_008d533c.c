// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRectangle
// Entry Point: 008d533c
// Size: 368 bytes
// Signature: undefined __thiscall createRectangle(FoliageBendingSystem * this, float param_1, float param_2, float param_3, float param_4, float param_5, TransformGroup * param_6)


/* FoliageBendingSystem::createRectangle(float, float, float, float, float, TransformGroup*) */

ulong __thiscall
FoliageBendingSystem::createRectangle
          (FoliageBendingSystem *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,TransformGroup *param_6)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  void *__dest;
  uint *puVar4;
  undefined *puVar5;
  ulong uVar6;
  void *__src;
  ulong __n;
  
  if (*(long *)(this + 0x68) == *(long *)(this + 0x60)) {
    uVar6 = 0xffffffff;
  }
  else {
    puVar2 = *(uint **)(this + 0x50);
    puVar4 = (uint *)(*(long *)(this + 0x68) + -4);
    uVar3 = *puVar4;
    uVar6 = (ulong)uVar3;
    *(uint **)(this + 0x68) = puVar4;
    if (puVar2 == *(uint **)(this + 0x58)) {
      __src = *(void **)(this + 0x48);
      __n = (long)puVar2 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
      }
      puVar2 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
      *puVar2 = uVar3;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x48) = __dest;
      *(uint **)(this + 0x50) = puVar2 + 1;
      *(void **)(this + 0x58) = (void *)((long)__dest + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar2 = uVar3;
      *(uint **)(this + 0x50) = puVar2 + 1;
    }
    puVar5 = (undefined *)(*(long *)(this + 0x30) + uVar6 * 0xa0);
    *(float *)(puVar5 + 4) = param_1;
    *(float *)(puVar5 + 8) = param_2;
    *(float *)(puVar5 + 0x10) = param_3;
    *(float *)(puVar5 + 0x14) = param_4;
    *(float *)(puVar5 + 0xc) = param_5;
    *(TransformGroup **)(puVar5 + 0x18) = param_6;
    *puVar5 = 1;
  }
  return uVar6;
}


