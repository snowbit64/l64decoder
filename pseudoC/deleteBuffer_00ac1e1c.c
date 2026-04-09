// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteBuffer
// Entry Point: 00ac1e1c
// Size: 492 bytes
// Signature: undefined __thiscall deleteBuffer(VulkanResourceAllocator * this, Buffer * param_1)


/* VulkanResourceAllocator::deleteBuffer(VulkanResourceAllocator::Buffer*) */

void __thiscall VulkanResourceAllocator::deleteBuffer(VulkanResourceAllocator *this,Buffer *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  void *__dest;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  void *__src;
  ulong __n;
  long lVar9;
  
  lVar9 = *(long *)param_1;
  SubAllocator::free((SubAllocator *)(lVar9 + 0x10),*(uint *)(param_1 + 0x28),
                     *(uint *)(param_1 + 0x2c));
  uVar3 = SubAllocator::isEmpty();
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(lVar9 + 0x44);
    uVar2 = *(uint *)(lVar9 + 0x48);
    lVar7 = (ulong)uVar1 * 0x18 + (ulong)uVar2 * 0x240;
    plVar4 = (long *)(this + lVar7 + 0x10);
    lVar6 = *plVar4;
    lVar7 = *(long *)(this + lVar7 + 8);
    uVar8 = (uint)((ulong)(lVar6 - lVar7) >> 3);
    if (uVar8 != 0) {
      uVar3 = 0;
      do {
        if (*(long *)(lVar7 + uVar3 * 8) == lVar9) {
          if ((int)uVar3 + 1U < uVar8) {
            *(undefined8 *)(lVar7 + uVar3 * 8) = *(undefined8 *)(lVar6 + -8);
            lVar6 = *plVar4;
          }
          *plVar4 = lVar6 + -8;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (((ulong)(lVar6 - lVar7) >> 3 & 0xffffffff) != uVar3);
    }
    lVar7 = (ulong)uVar1 * 0x18 + (ulong)uVar2 * 0x240;
    plVar4 = *(long **)(this + lVar7 + 0x490);
    plVar5 = *(long **)(this + lVar7 + 0x498);
    *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(*(long *)(this + 0x980) + 0x3b4);
    if (plVar4 == plVar5) {
      __src = *(void **)(this + lVar7 + 0x488);
      __n = (long)plVar4 - (long)__src;
      uVar3 = ((long)__n >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar3 <= (ulong)((long)__n >> 2)) {
        uVar3 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar3 << 3);
      }
      plVar4 = (long *)((long)__dest + ((long)__n >> 3) * 8);
      *plVar4 = lVar9;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(long **)(this + lVar7 + 0x490) = plVar4 + 1;
      *(void **)(this + lVar7 + 0x498) = (void *)((long)__dest + uVar3 * 8);
      *(void **)(this + lVar7 + 0x488) = __dest;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *plVar4 = lVar9;
      *(long **)(this + lVar7 + 0x490) = plVar4 + 1;
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (*vkDestroyBufferView)
              (*(undefined8 *)(*(long *)(this + 0x980) + 0x18),*(long *)(param_1 + 0x10),0);
  }
  operator_delete(param_1);
  return;
}


