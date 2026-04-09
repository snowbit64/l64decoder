// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanMemoryAllocator
// Entry Point: 00abdfcc
// Size: 484 bytes
// Signature: undefined __thiscall VulkanMemoryAllocator(VulkanMemoryAllocator * this, VulkanRenderDevice * param_1)


/* VulkanMemoryAllocator::VulkanMemoryAllocator(VulkanRenderDevice*) */

void __thiscall
VulkanMemoryAllocator::VulkanMemoryAllocator
          (VulkanMemoryAllocator *this,VulkanRenderDevice *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  long lVar13;
  
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined ***)this = &PTR__VulkanMemoryAllocator_00fe6420;
                    /* try { // try from 00abe00c to 00abe017 has its CatchHandler @ 00abe1b0 */
  Mutex::Mutex((Mutex *)(this + 0x230),true);
  *(VulkanRenderDevice **)(this + 8) = param_1;
                    /* try { // try from 00abe030 to 00abe073 has its CatchHandler @ 00abe1b8 */
  (*vkGetPhysicalDeviceMemoryProperties)(*(undefined8 *)(param_1 + 0x20),this + 0x10);
  lVar7 = *(long *)(this + 0x220) - *(long *)(this + 0x218) >> 3;
  uVar5 = (ulong)*(uint *)(this + 0x10);
  uVar8 = lVar7 * 0x6db6db6db6db6db7;
  if (uVar5 <= uVar8) {
    if (uVar5 <= uVar8 && uVar8 - uVar5 != 0) {
      lVar13 = *(long *)(this + 0x218) + uVar5 * 0x38;
      lVar7 = *(long *)(this + 0x220);
      while (lVar2 = lVar7, lVar2 != lVar13) {
        pvVar4 = *(void **)(lVar2 + -0x18);
        if (pvVar4 != (void *)0x0) {
          *(void **)(lVar2 + -0x10) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = *(void **)(lVar2 + -0x30);
        lVar7 = lVar2 + -0x38;
        if (pvVar4 != (void *)0x0) {
          *(void **)(lVar2 + -0x28) = pvVar4;
          operator_delete(pvVar4);
        }
      }
      *(long *)(this + 0x220) = lVar13;
    }
  }
  else {
    std::__ndk1::
    vector<VulkanMemoryAllocator::MemoryTypeInfo,std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo>>
    ::__append((vector<VulkanMemoryAllocator::MemoryTypeInfo,std::__ndk1::allocator<VulkanMemoryAllocator::MemoryTypeInfo>>
                *)(this + 0x218),uVar5 + lVar7 * -0x6db6db6db6db6db7);
  }
  uVar1 = *(uint *)(this + 0x10);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    puVar6 = *(undefined4 **)(this + 0x218);
    if (uVar1 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 & 0xfffffffe;
      puVar10 = (uint *)(this + 0x20);
      uVar8 = uVar9;
      puVar11 = puVar6;
      do {
        uVar12 = (undefined4)(*(ulong *)(this + (ulong)puVar10[-2] * 0x10 + 0x118) >> 3);
        uVar3 = (undefined4)(*(ulong *)(this + (ulong)*puVar10 * 0x10 + 0x118) >> 3);
        if (*(ulong *)(this + (ulong)puVar10[-2] * 0x10 + 0x118) >> 0x1c != 0) {
          uVar12 = 0x2000000;
        }
        if (*(ulong *)(this + (ulong)*puVar10 * 0x10 + 0x118) >> 0x1c != 0) {
          uVar3 = 0x2000000;
        }
        uVar8 = uVar8 - 2;
        *puVar11 = uVar12;
        puVar11[0xe] = uVar3;
        puVar11 = puVar11 + 0x1c;
        puVar10 = puVar10 + 4;
      } while (uVar8 != 0);
      if (uVar9 == uVar5) goto LAB_00abe18c;
    }
    lVar7 = uVar5 - uVar9;
    puVar6 = puVar6 + uVar9 * 0xe;
    puVar10 = (uint *)(this + uVar9 * 8 + 0x18);
    do {
      uVar12 = (undefined4)(*(ulong *)(this + (ulong)*puVar10 * 0x10 + 0x118) >> 3);
      if (*(ulong *)(this + (ulong)*puVar10 * 0x10 + 0x118) >> 0x1c != 0) {
        uVar12 = 0x2000000;
      }
      lVar7 = lVar7 + -1;
      *puVar6 = uVar12;
      puVar6 = puVar6 + 0xe;
      puVar10 = puVar10 + 2;
    } while (lVar7 != 0);
  }
LAB_00abe18c:
  *(undefined8 *)(this + 0x275) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  return;
}


