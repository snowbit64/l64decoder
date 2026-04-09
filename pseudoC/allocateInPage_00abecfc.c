// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateInPage
// Entry Point: 00abecfc
// Size: 228 bytes
// Signature: undefined __thiscall allocateInPage(VulkanMemoryAllocator * this, VulkanMemoryPage * param_1, uint param_2, uint param_3)


/* VulkanMemoryAllocator::allocateInPage(VulkanMemoryAllocator::VulkanMemoryPage*, unsigned int,
   unsigned int) */

void __thiscall
VulkanMemoryAllocator::allocateInPage
          (VulkanMemoryAllocator *this,VulkanMemoryPage *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  VulkanMemoryPage **ppVVar4;
  VulkanMemoryPage *pVVar5;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = SubAllocator::alloc((SubAllocator *)(param_1 + 8),param_2,param_3,&local_4c,&local_50,
                              &local_54);
  if ((uVar3 & 1) == 0) {
    ppVVar4 = (VulkanMemoryPage **)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (((byte)this[(ulong)uVar1 * 8 + 0x14] & 1) == 0) {
      *(ulong *)(this + 0x270) = *(long *)(this + 0x270) - (ulong)local_50;
    }
    else {
      this[0x27c] = (VulkanMemoryAllocator)0x1;
      *(ulong *)(this + 0x268) = *(long *)(this + 0x268) - (ulong)local_50;
    }
    ppVVar4 = (VulkanMemoryPage **)operator_new(0x30);
    *ppVVar4 = param_1;
    pVVar5 = *(VulkanMemoryPage **)param_1;
    *(uint *)(ppVVar4 + 2) = uVar1;
    *(uint *)(ppVVar4 + 1) = local_4c;
    *(uint *)((long)ppVVar4 + 0xc) = local_50;
    ppVVar4[3] = pVVar5;
    ppVVar4[4] = (VulkanMemoryPage *)0x0;
    *(uint *)(ppVVar4 + 5) = local_54;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ppVVar4);
}


