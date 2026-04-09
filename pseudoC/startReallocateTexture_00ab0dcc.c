// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startReallocateTexture
// Entry Point: 00ab0dcc
// Size: 1276 bytes
// Signature: undefined __thiscall startReallocateTexture(VulkanTextureObject * this, VulkanCommandBuffer * param_1, VulkanTextureObject * param_2, int param_3, uchar * param_4)


/* VulkanTextureObject::startReallocateTexture(VulkanCommandBuffer*, VulkanTextureObject*, int,
   unsigned char const*) */

undefined8 __thiscall
VulkanTextureObject::startReallocateTexture
          (VulkanTextureObject *this,VulkanCommandBuffer *param_1,VulkanTextureObject *param_2,
          int param_3,uchar *param_4)

{
  int iVar1;
  long lVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  long *this_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  VK_COMMAND_BUFFER_TYPE VVar15;
  void **ppvVar16;
  void **ppvVar17;
  VK_COMMAND_BUFFER_TYPE VVar18;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  param_2[0x54] = (VulkanTextureObject)0x1;
  *(int *)(param_2 + 0x38) = *(int *)(this + 0x38) + param_3;
  uVar4 = (**(code **)(*(long *)this + 0x20))();
  if (param_3 < 1) {
    *(uint *)(param_2 + 0x28) = uVar4 >> (ulong)(-param_3 & 0x1f);
    uVar4 = (**(code **)(*(long *)this + 0x28))(this);
    uVar4 = uVar4 >> (ulong)(-param_3 & 0x1f);
  }
  else {
    *(uint *)(param_2 + 0x28) = uVar4 << (ulong)(param_3 & 0x1f);
    iVar5 = (**(code **)(*(long *)this + 0x28))(this);
    uVar4 = iVar5 << (ulong)(param_3 & 0x1f);
  }
  *(uint *)(param_2 + 0x2c) = uVar4;
  uVar8 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(param_2 + 0x18) = uVar8;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(this + 0x40);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(this + 0x48);
  *(undefined2 *)(param_2 + 0x4d) = *(undefined2 *)(this + 0x4d);
  *(undefined4 *)(param_2 + 0x4f) = *(undefined4 *)(this + 0x4f);
  param_2[0x56] = this[0x56];
  uVar8 = *(undefined8 *)(this + 0x78);
  lVar9 = *(long *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(param_2 + 0x78) = uVar8;
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(this + 0x88);
  lVar12 = (long)*(void ***)(param_2 + 0x98) - lVar9 >> 3;
  uVar13 = lVar12 * -0x5555555555555555;
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(this + 0x8c);
  uVar10 = (ulong)*(uint *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(this + 0xa8);
  if (uVar10 <= uVar13) {
    if (uVar10 <= uVar13 && uVar13 - uVar10 != 0) {
      ppvVar16 = (void **)(lVar9 + uVar10 * 0x18);
      ppvVar17 = *(void ***)(param_2 + 0x98);
      while (ppvVar3 = ppvVar17, ppvVar3 != ppvVar16) {
        ppvVar17 = ppvVar3 + -3;
        pvVar7 = *ppvVar17;
        if (pvVar7 != (void *)0x0) {
          ppvVar3[-2] = pvVar7;
          operator_delete(pvVar7);
        }
      }
      *(void ***)(param_2 + 0x98) = ppvVar16;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>,std::__ndk1::allocator<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>>>
    ::__append((vector<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>,std::__ndk1::allocator<std::__ndk1::vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>>>
                *)(param_2 + 0x90),uVar10 + lVar12 * 0x5555555555555555);
  }
  VVar15 = (uint)(0 < param_3) << 1;
  if (*(int *)(param_2 + 0x48) == 0) {
    uVar4 = *(uint *)(param_2 + 0x38);
  }
  else {
    uVar10 = 0;
    lVar9 = *(long *)(param_2 + 0x90);
    uVar4 = *(uint *)(param_2 + 0x38);
    do {
      this_00 = (long *)(lVar9 + uVar10 * 0x18);
      uVar13 = (ulong)(uVar4 + 1);
      uVar14 = this_00[1] - *this_00 >> 2;
      if (uVar14 < uVar13) {
        std::__ndk1::
        vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>::
        __append((vector<VulkanTextureObject::LAYOUT,std::__ndk1::allocator<VulkanTextureObject::LAYOUT>>
                  *)this_00,uVar13 - uVar14);
        uVar4 = *(uint *)(param_2 + 0x38);
        lVar9 = *(long *)(param_2 + 0x90);
      }
      else if (uVar13 < uVar14) {
        this_00[1] = *this_00 + uVar13 * 4;
      }
      uVar11 = 0;
      lVar12 = *(long *)(lVar9 + uVar10 * 0x18);
      do {
        *(VK_COMMAND_BUFFER_TYPE *)(lVar12 + (ulong)uVar11 * 4) = VVar15;
        uVar11 = uVar11 + 1;
      } while (uVar11 <= uVar4);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_2 + 0x48));
  }
  local_b0 = *(undefined8 *)(param_2 + 0x28);
  local_b8 = *(undefined4 *)(this + 0x18);
  uStack_b4 = *(undefined4 *)(this + 0x20);
  local_a8 = CONCAT44(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x30));
  uStack_a0 = CONCAT44(uVar4 + 1,*(undefined4 *)(this + 0x34));
  uVar8 = VulkanResourceAllocator::createTexture
                    (*(VulkanResourceAllocator **)(*(long *)(this + 8) + 0x370),
                     (TextureDesc *)&local_b8,0,true);
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  if (this[0x51] == (VulkanTextureObject)0x0) {
    createShaderResourceViews(param_2,(bool)this[0x52]);
    createDescriptorImageInfos();
  }
  iVar5 = *(int *)(param_2 + 0x40);
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  iVar1 = 6;
  if (*(int *)(param_2 + 0x18) != 2) {
    iVar1 = *(int *)(param_2 + 0x34);
  }
  iVar6 = PixelFormatUtil::getMemorySize
                    (*(uint *)(param_2 + 0x28),*(uint *)(param_2 + 0x2c),*(uint *)(param_2 + 0x30),
                     *(PIXEL_FORMAT *)(param_2 + 0x1c));
  param_2[0x4c] = (VulkanTextureObject)0x1;
  VulkanRenderDevice::s_usedTextureMemory =
       VulkanRenderDevice::s_usedTextureMemory + iVar1 * iVar5 * iVar6;
  uVar10 = VulkanRenderDevice::hasCopyQueue();
  if ((uVar10 & 1) == 0) {
    VVar15 = (VK_COMMAND_BUFFER_TYPE)(byte)param_1[0x460];
    VVar18 = VVar15;
  }
  else {
    VVar18 = 2;
  }
  this[0x55] = (VulkanTextureObject)0x0;
  local_b0 = 0;
  local_b8 = 0x2d;
  local_88 = *(undefined4 *)(param_2 + 0x8c);
  local_98 = 0xffffffffffffffff;
  uStack_a0 = 0x700000000;
  local_a8 = 0x100000000000;
  local_80 = *(int *)(param_2 + 0x38) + 1;
  local_90 = **(undefined8 **)(param_2 + 0x10);
  uStack_84 = 0;
  local_78 = *(undefined4 *)(param_2 + 0x48);
  uStack_7c = 0;
  uVar8 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,VVar15);
  (*vkCmdPipelineBarrier)(uVar8,1,0x1000,0,0,0,0,0,1,&local_b8);
  if (param_3 < 1) {
    if ((uVar10 & 1) != 0) goto LAB_00ab1290;
  }
  else {
    uVar13 = PixelFormatUtil::getMemorySize
                       (*(uint *)(param_2 + 0x28),*(uint *)(param_2 + 0x2c),
                        *(uint *)(param_2 + 0x30),*(PIXEL_FORMAT *)(this + 0x1c));
    uploadTextureData(param_2,param_1,param_4,param_4 + (uVar13 & 0xffffffff),1,param_3 - 1,VVar18);
    if ((uVar10 & 1) != 0) {
      *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x558);
      local_f8 = 0;
      *(undefined8 *)(this + 0x70) = **(undefined8 **)(param_1 + 0x558);
      local_e0 = NEON_rev64(*(undefined8 *)(*(long *)(this + 8) + 0x458),4);
      local_100[0] = 0x2d;
      uStack_e8 = 0x700000007;
      local_f0 = 0x1000;
      local_d8 = **(undefined8 **)(param_2 + 0x10);
      uStack_c8 = 0xffffffff;
      local_d0 = 1;
      local_c0 = 0xffffffff;
      uVar8 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,2);
      (*vkCmdPipelineBarrier)(uVar8,0x1000,0x2000,0,0,0,0,0,1,local_100);
      this[0x55] = (VulkanTextureObject)0x1;
      *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x558);
      *(undefined8 *)(this + 0x60) = **(undefined8 **)(param_1 + 0x558);
      goto LAB_00ab1290;
    }
  }
  uVar4 = -param_3 & param_3 >> 0x1f;
  uVar11 = 0;
  if (-1 < param_3) {
    uVar11 = param_3;
  }
  encodeCopyMipMaps(this,param_1,param_2,uVar4,uVar11,(*(int *)(this + 0x38) - uVar4) + 1);
LAB_00ab1290:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


