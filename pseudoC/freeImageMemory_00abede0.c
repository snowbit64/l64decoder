// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeImageMemory
// Entry Point: 00abede0
// Size: 632 bytes
// Signature: undefined __thiscall freeImageMemory(VulkanMemoryAllocator * this, Allocation * param_1)


/* VulkanMemoryAllocator::freeImageMemory(VulkanMemoryAllocator::Allocation*) */

void __thiscall
VulkanMemoryAllocator::freeImageMemory(VulkanMemoryAllocator *this,Allocation *param_1)

{
  uint uVar1;
  ulong uVar2;
  Allocation *__dest;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong __n;
  long lVar9;
  long **pplVar10;
  
  Mutex::enterCriticalSection();
  lVar9 = *(long *)param_1;
  if (lVar9 == 0) {
    uVar2 = (ulong)*(uint *)(param_1 + 0xc);
    uVar1 = *(uint *)(param_1 + 0x10);
                    /* try { // try from 00abee6c to 00abee73 has its CatchHandler @ 00abf05c */
    (*vkFreeMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),*(undefined8 *)(param_1 + 0x18),0);
    if (((byte)this[(ulong)uVar1 * 8 + 0x14] & 1) == 0) {
      plVar6 = (long *)(this + 0x270);
      *(ulong *)(this + 0x260) = *(long *)(this + 0x260) - uVar2;
    }
    else {
      plVar6 = (long *)(this + 0x268);
      *(ulong *)(this + 600) = *(long *)(this + 600) - uVar2;
    }
    *plVar6 = *plVar6 - uVar2;
  }
  else {
                    /* try { // try from 00abee24 to 00abee2b has its CatchHandler @ 00abf064 */
    SubAllocator::free((SubAllocator *)(lVar9 + 8),*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc));
    if (((byte)this[(ulong)*(uint *)(lVar9 + 0x3c) * 8 + 0x14] & 1) == 0) {
      *(ulong *)(this + 0x270) = *(long *)(this + 0x270) + (ulong)*(uint *)(param_1 + 0xc);
    }
    else {
      *(ulong *)(this + 0x268) = *(long *)(this + 0x268) + (ulong)*(uint *)(param_1 + 0xc);
      this[0x27c] = (VulkanMemoryAllocator)0x1;
    }
    operator_delete(param_1);
                    /* try { // try from 00abeeb0 to 00abeeb7 has its CatchHandler @ 00abf064 */
    uVar2 = SubAllocator::isEmpty();
    if ((uVar2 & 1) == 0) goto LAB_00abef80;
    uVar1 = *(uint *)(lVar9 + 0x3c);
    lVar3 = *(long *)(this + 0x218);
    lVar5 = lVar3 + (ulong)uVar1 * 0x38;
    plVar6 = (long *)(lVar5 + 0x10);
    lVar7 = *plVar6;
    lVar5 = *(long *)(lVar5 + 8);
    uVar8 = (uint)((ulong)(lVar7 - lVar5) >> 3);
    if (uVar8 != 0) {
      uVar2 = 0;
      do {
        if (*(long *)(lVar5 + uVar2 * 8) == lVar9) {
          if ((int)uVar2 + 1U < uVar8) {
            *(undefined8 *)(lVar5 + uVar2 * 8) = *(undefined8 *)(lVar7 + -8);
            lVar7 = *plVar6;
          }
          *plVar6 = lVar7 + -8;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (((ulong)(lVar7 - lVar5) >> 3 & 0xffffffff) != uVar2);
    }
    lVar3 = lVar3 + (ulong)uVar1 * 0x38;
    plVar4 = *(long **)(lVar3 + 0x30);
    *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(*(long *)(this + 8) + 0x3b4);
    pplVar10 = (long **)(lVar3 + 0x28);
    plVar6 = *pplVar10;
    if (plVar6 != plVar4) {
      *plVar6 = lVar9;
      *pplVar10 = plVar6 + 1;
      goto LAB_00abef80;
    }
    param_1 = *(Allocation **)(lVar3 + 0x20);
    __n = (long)plVar6 - (long)param_1;
    uVar2 = ((long)__n >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00abf044 to 00abf057 has its CatchHandler @ 00abf058 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)__n >> 2)) {
      uVar2 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (Allocation *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00abeff4 to 00abeff7 has its CatchHandler @ 00abf058 */
      __dest = (Allocation *)operator_new(uVar2 << 3);
    }
    *(long *)(__dest + ((long)__n >> 3) * 8) = lVar9;
    if (0 < (long)__n) {
      memcpy(__dest,param_1,__n);
    }
    *pplVar10 = (long *)((long)(__dest + ((long)__n >> 3) * 8) + 8);
    *(long **)(lVar3 + 0x30) = (long *)(__dest + uVar2 * 8);
    *(Allocation **)(lVar3 + 0x20) = __dest;
    if (param_1 == (Allocation *)0x0) goto LAB_00abef80;
  }
  operator_delete(param_1);
LAB_00abef80:
                    /* try { // try from 00abef80 to 00abef87 has its CatchHandler @ 00abf060 */
  Mutex::leaveCriticalSection();
  return;
}


