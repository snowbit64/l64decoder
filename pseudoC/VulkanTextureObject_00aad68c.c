// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanTextureObject
// Entry Point: 00aad68c
// Size: 636 bytes
// Signature: undefined __thiscall ~VulkanTextureObject(VulkanTextureObject * this)


/* VulkanTextureObject::~VulkanTextureObject() */

void __thiscall VulkanTextureObject::~VulkanTextureObject(VulkanTextureObject *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  VulkanCommandBuffer *this_00;
  void *pvVar6;
  void **ppvVar7;
  int *piVar8;
  long lVar9;
  void **ppvVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  void **ppvVar15;
  ulong uVar16;
  
  *(undefined ***)this = &PTR__VulkanTextureObject_00fe5eb0;
  if (this[0x4c] != (VulkanTextureObject)0x0) {
    iVar3 = *(int *)(this + 0x34);
    iVar2 = *(int *)(this + 0x18);
    iVar4 = *(int *)(this + 0x40);
    if (this[0x4e] == (VulkanTextureObject)0x0) {
      iVar5 = PixelFormatUtil::getMemorySize
                        (*(uint *)(this + 0x28),*(uint *)(this + 0x2c),*(uint *)(this + 0x30),
                         *(PIXEL_FORMAT *)(this + 0x1c));
      piVar8 = &VulkanRenderDevice::s_usedTextureMemory;
    }
    else {
                    /* try { // try from 00aad6d4 to 00aad6e7 has its CatchHandler @ 00aad908 */
      iVar5 = PixelFormatUtil::getMemorySize
                        (*(uint *)(this + 0x28),*(uint *)(this + 0x2c),*(uint *)(this + 0x30),
                         *(PIXEL_FORMAT *)(this + 0x1c));
      piVar8 = &VulkanRenderDevice::s_usedRenderTargetMemory;
    }
    iVar1 = 6;
    if (iVar2 != 2) {
      iVar1 = iVar3;
    }
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    iVar2 = *(int *)(this + 0x18);
    *piVar8 = *piVar8 - iVar1 * iVar4 * iVar5;
    if (iVar2 == 4) {
      if (*(long **)(this + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x10) + 8))();
      }
    }
    else {
                    /* try { // try from 00aad744 to 00aad753 has its CatchHandler @ 00aad908 */
      this_00 = (VulkanCommandBuffer *)(**(code **)(**(long **)(this + 8) + 0x138))();
      VulkanCommandBuffer::releaseTextureWithGraphicsQueueThreadSafe
                (this_00,*(Texture **)(this + 0x10),*(FenceStatus **)(this + 0x68),
                 *(ulonglong *)(this + 0x70));
      lVar9 = *(long *)(this + 0x148);
      lVar11 = *(long *)(this + 0x150);
      if (lVar11 != lVar9) {
        uVar14 = 0;
        do {
          plVar12 = (long *)(lVar9 + uVar14 * 0x18);
          lVar13 = *plVar12;
          if (plVar12[1] != lVar13) {
            uVar16 = 0;
            do {
                    /* try { // try from 00aad7a8 to 00aad7ab has its CatchHandler @ 00aad910 */
              VulkanRenderDevice::destroyImageViewSafely
                        (*(VulkanRenderDevice **)(this + 8),*(VkImageView_T **)(lVar13 + uVar16 * 8)
                        );
              lVar9 = *(long *)(this + 0x148);
              uVar16 = (ulong)((int)uVar16 + 1);
              plVar12 = (long *)(lVar9 + uVar14 * 0x18);
              lVar13 = *plVar12;
            } while (uVar16 < (ulong)(plVar12[1] - lVar13 >> 3));
            lVar11 = *(long *)(this + 0x150);
          }
          uVar14 = (ulong)((int)uVar14 + 1);
          uVar16 = (lVar11 - lVar9 >> 3) * -0x5555555555555555;
        } while (uVar14 <= uVar16 && uVar16 - uVar14 != 0);
      }
      if (this[0x51] == (VulkanTextureObject)0x0) {
                    /* try { // try from 00aad7e0 to 00aad7e3 has its CatchHandler @ 00aad908 */
        VulkanRenderDevice::destroyImageViewSafely
                  (*(VulkanRenderDevice **)(this + 8),*(VkImageView_T **)(this + 0xb0));
      }
      lVar9 = *(long *)(this + 0xe8);
      if (*(long *)(this + 0xf0) != lVar9) {
        uVar14 = 0;
        do {
                    /* try { // try from 00aad7fc to 00aad7ff has its CatchHandler @ 00aad90c */
          VulkanRenderDevice::destroyImageViewSafely
                    (*(VulkanRenderDevice **)(this + 8),*(VkImageView_T **)(lVar9 + uVar14 * 8));
          lVar9 = *(long *)(this + 0xe8);
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (uVar14 < (ulong)(*(long *)(this + 0xf0) - lVar9 >> 3));
      }
    }
  }
  ppvVar15 = *(void ***)(this + 0x148);
  if (ppvVar15 != (void **)0x0) {
    ppvVar10 = *(void ***)(this + 0x150);
    ppvVar7 = ppvVar15;
    if (ppvVar10 != ppvVar15) {
      do {
        ppvVar7 = ppvVar10 + -3;
        pvVar6 = *ppvVar7;
        if (pvVar6 != (void *)0x0) {
          ppvVar10[-2] = pvVar6;
          operator_delete(pvVar6);
        }
        ppvVar10 = ppvVar7;
      } while (ppvVar7 != ppvVar15);
      ppvVar7 = *(void ***)(this + 0x148);
    }
    *(void ***)(this + 0x150) = ppvVar15;
    operator_delete(ppvVar7);
  }
  pvVar6 = *(void **)(this + 0x118);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0x100);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = *(void **)(this + 0xe8);
  if (pvVar6 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar6;
    operator_delete(pvVar6);
  }
  ppvVar15 = *(void ***)(this + 0x90);
  if (ppvVar15 == (void **)0x0) {
    return;
  }
  ppvVar10 = *(void ***)(this + 0x98);
  ppvVar7 = ppvVar15;
  if (ppvVar10 != ppvVar15) {
    do {
      ppvVar7 = ppvVar10 + -3;
      pvVar6 = *ppvVar7;
      if (pvVar6 != (void *)0x0) {
        ppvVar10[-2] = pvVar6;
        operator_delete(pvVar6);
      }
      ppvVar10 = ppvVar7;
    } while (ppvVar7 != ppvVar15);
    ppvVar7 = *(void ***)(this + 0x90);
  }
  *(void ***)(this + 0x98) = ppvVar15;
  operator_delete(ppvVar7);
  return;
}


