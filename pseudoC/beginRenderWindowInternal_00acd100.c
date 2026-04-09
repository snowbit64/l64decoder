// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderWindowInternal
// Entry Point: 00acd100
// Size: 1152 bytes
// Signature: undefined __thiscall beginRenderWindowInternal(VulkanCommandBuffer * this, VkImageView_T * param_1, VkFormat param_2, uint param_3, uint param_4, VkSurfaceTransformFlagBitsKHR param_5, bool param_6, LOAD_ACTION param_7, float * param_8, uint param_9, uint param_10, uint param_11, uint param_12, uint param_13, uint param_14)


/* VulkanCommandBuffer::beginRenderWindowInternal(VkImageView_T*, VkFormat, unsigned int, unsigned
   int, VkSurfaceTransformFlagBitsKHR, bool, RenderTargetDesc::LOAD_ACTION, float const*, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
VulkanCommandBuffer::beginRenderWindowInternal
          (VulkanCommandBuffer *this,VkImageView_T *param_1,VkFormat param_2,uint param_3,
          uint param_4,VkSurfaceTransformFlagBitsKHR param_5,bool param_6,LOAD_ACTION param_7,
          float *param_8,uint param_9,uint param_10,uint param_11,uint param_12,uint param_13,
          uint param_14)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *__src;
  uint *puVar8;
  size_t __n;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  VkImageView_T **local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  VkFormat local_f4;
  undefined4 uStack_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  VkImageView_T *local_d0;
  undefined8 local_c8;
  uint local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined local_ac;
  undefined8 local_a8;
  undefined8 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_d0 = param_1;
  lVar2 = (**(code **)(**(long **)(this + 0x98) + 0x80))();
  VulkanUtil::adjustViewport(param_5,&param_11,&param_12,&param_13,&param_14);
  local_f8 = 0;
  uStack_f0 = 1;
  if (param_7 == 0) {
    local_ec = 2;
  }
  else {
    local_ec = 0;
    if (param_7 == 1) {
      local_ec = (uint)(param_9 == 0);
    }
  }
  uStack_e0 = 1;
  local_e8 = 0x200000000;
  if (param_6) {
    if (this[0xa59] == (VulkanCommandBuffer)0x0) {
      local_d8 = 0x3b9acdea;
    }
    else {
      local_d8 = 2;
    }
  }
  else if (*(char *)(lVar2 + 0xb0) == '\0') {
    local_d8 = 5;
  }
  else {
    local_d8 = 6;
  }
  local_190 = &local_148;
  local_128 = &local_100;
  local_140 = 0;
  local_100 = 0x200000000;
  local_108 = 0;
  uStack_168 = 0x40000000400;
  local_170 = 0xffffffff;
  local_1a0 = &local_f8;
  local_1b8[0] = 0x26;
  local_180 = &local_170;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 1;
  local_148 = 0;
  local_110 = 0;
  local_160 = 0x10000000000;
  local_158 = 0;
  local_198 = 1;
  local_188 = 1;
  local_138 = 0;
  local_1b0 = 0;
  local_1a8 = 0x100000000;
  local_f4 = param_2;
  (*vkCreateRenderPass)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_1b8,0,&local_178);
  local_1d8 = &local_d0;
  local_1e0 = 1;
  local_1e8 = local_178;
  local_1c8 = 1;
  local_200[0] = 0x25;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1d0 = param_3;
  uStack_1cc = param_4;
  (*vkCreateFramebuffer)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_200,0,&local_1c0);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x1f8) = 0x2b;
  *(undefined8 *)(this + 0x208) = local_178;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = local_1c0;
  *(uint *)(this + 0x220) = param_3;
  *(uint *)(this + 0x224) = param_4;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x2e0) = 1;
  local_a8 = CONCAT44(uStack_f0,local_f4);
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x458) = 1;
  local_b0 = 1;
  local_ac = 0;
  local_78 = 0;
  lVar2 = registerRenderPassDesc(this,(RenderPassDesc *)&local_b0);
  uVar3 = acquireVkCommandBuffer(this,0);
  (*vkCmdBeginRenderPass)(uVar3,this + 0x1f8,0);
  if ((*(int *)(this + 0x1f0) == 0) && (*(int *)(this + 0x360) != 0)) {
    uVar7 = 0;
    puVar8 = (uint *)(this + 0x378);
    do {
      VulkanTextureObject::setLayout
                (*(VulkanTextureObject **)(puVar8 + -4),puVar8[-2],puVar8[-1],*puVar8);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 6;
    } while (uVar7 < *(uint *)(this + 0x360));
  }
  this[0x460] = (VulkanCommandBuffer)0x1;
  puVar9 = *(undefined8 **)(this + 0x550);
  puVar4 = *(undefined8 **)(this + 0x590);
  *(ulong *)(this + 0x5f8) = *(ulong *)(this + 0x5f8) & 0xfffff03fffffffff | lVar2 << 0x26;
  uVar3 = *puVar9;
  if (puVar4 < *(undefined8 **)(this + 0x598)) {
    *puVar4 = local_178;
    puVar4[1] = local_1c0;
    puVar4[2] = puVar9;
    puVar4[3] = uVar3;
    *(undefined8 **)(this + 0x590) = puVar4 + 4;
  }
  else {
    __src = *(void **)(this + 0x588);
    __n = (long)puVar4 - (long)__src;
    uVar7 = ((long)__n >> 5) + 1;
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)*(undefined8 **)(this + 0x598) - (long)__src;
    uVar6 = (long)uVar5 >> 4;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar7 * 0x20);
    puVar4 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
    *puVar4 = local_178;
    puVar4[1] = local_1c0;
    puVar4[2] = puVar9;
    puVar4[3] = uVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(undefined8 **)(this + 0x590) = puVar4 + 4;
    *(void **)(this + 0x598) = (void *)((long)__dest + uVar7 * 0x20);
    *(void **)(this + 0x588) = __dest;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  local_c8 = 0;
  local_c0 = param_3;
  fStack_bc = (float)param_4;
  (*vkCmdSetScissor)(*(undefined8 *)(this + 0x4b8),0,1,&local_c8);
  fVar10 = (float)NEON_ucvtf(param_12);
  fVar11 = (float)NEON_ucvtf(param_14);
  uVar12 = NEON_ucvtf(param_11);
  local_c0 = NEON_ucvtf(param_13);
  fStack_bc = -fVar11;
  local_b8 = 0x3f80000000000000;
  local_c8 = CONCAT44(fVar10 + fVar11,uVar12);
  (*vkCmdSetViewport)(*(undefined8 *)(this + 0x4b8),0,1,&local_c8);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


