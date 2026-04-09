// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGraphicsPipelineState
// Entry Point: 00ad0bd8
// Size: 1008 bytes
// Signature: undefined __thiscall createGraphicsPipelineState(VulkanCommandBuffer * this, PRIMITIVE_TYPE param_1)


/* VulkanCommandBuffer::createGraphicsPipelineState(ICommandBuffer::PRIMITIVE_TYPE) */

undefined8 __thiscall
VulkanCommandBuffer::createGraphicsPipelineState(VulkanCommandBuffer *this,PRIMITIVE_TYPE param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *__dest;
  undefined8 *puVar7;
  void *__src;
  ulong uVar8;
  ulong __n;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_2c8 [2];
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  long local_2b0;
  undefined8 *puStack_2a8;
  undefined4 *local_2a0;
  undefined8 uStack_298;
  undefined4 *local_290;
  undefined8 local_288;
  undefined4 *puStack_280;
  undefined8 local_278;
  undefined8 *puStack_270;
  undefined4 *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined8 local_228;
  undefined8 local_220;
  undefined4 *local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_180 [2];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 *puStack_138;
  uint local_12c;
  uint *local_128;
  undefined8 local_120 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  VulkanProgramObject::getAttributeLocations
            (*(VulkanProgramObject **)(this + 0xb8),&local_128,&local_12c);
  lVar9 = *(long *)(this + 0xa0);
  uVar8 = (ulong)local_12c;
  lVar10 = *(long *)(lVar9 + 8);
  if (local_12c == 0) {
    uStack_158 = *(undefined8 *)(lVar10 + 0x10);
    local_160 = *(undefined8 *)(lVar10 + 8);
    uStack_148 = *(undefined8 *)(lVar10 + 0x20);
    uStack_150 = *(undefined8 *)(lVar10 + 0x18);
    puStack_138 = (undefined8 *)0x0;
    local_140._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
  }
  else {
    puVar4 = (undefined8 *)operator_new(uVar8 << 4);
    memset(puVar4,0,uVar8 << 4);
    uStack_158 = *(undefined8 *)(lVar10 + 0x10);
    local_160 = *(undefined8 *)(lVar10 + 8);
    uStack_148 = *(undefined8 *)(lVar10 + 0x20);
    uStack_150 = *(undefined8 *)(lVar10 + 0x18);
    local_140._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20);
    puVar7 = puVar4;
    do {
      uVar8 = uVar8 - 1;
      puVar2 = (undefined8 *)
               (*(long *)(lVar10 + 0x30) +
               (ulong)*(uint *)(*(long *)(lVar9 + 8) + (ulong)*local_128 * 4 + 0x138) * 0x10);
      uVar11 = *puVar2;
      puVar7[1] = puVar2[1];
      *puVar7 = uVar11;
      local_128 = local_128 + 1;
      puVar7 = puVar7 + 2;
      puStack_138 = puVar4;
    } while (uVar8 != 0);
  }
  puVar7 = puStack_138;
  local_140 = CONCAT44(local_140._4_4_,local_12c);
  uVar1 = *(uint *)(this + 0x458);
  puVar4 = *(undefined8 **)(*(long *)(this + 0xd8) + 0x10);
  local_90 = puVar4[2];
  uStack_78 = puVar4[5];
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  local_70 = puVar4[6];
  uStack_88 = CONCAT44(uVar1,(int)puVar4[3]);
  local_80 = local_120;
  if (uVar1 != 0) {
    lVar9 = 0;
    do {
      puVar2 = (undefined8 *)(puVar4[4] + lVar9);
      lVar10 = lVar9 + 0x20;
      uVar13 = *puVar2;
      uVar12 = puVar2[3];
      uVar11 = puVar2[2];
      *(undefined8 *)((long)local_120 + lVar9 + 8) = puVar2[1];
      *(undefined8 *)((long)local_120 + lVar9) = uVar13;
      *(undefined8 *)((long)local_120 + lVar9 + 0x18) = uVar12;
      *(undefined8 *)((long)local_120 + lVar9 + 0x10) = uVar11;
      lVar9 = lVar10;
    } while ((ulong)uVar1 * 0x20 - lVar10 != 0);
  }
  local_178 = 0;
  local_168 = 0;
  local_170 = 0;
  local_1d8 = 0;
  local_208 = 0;
  local_180[0] = 0x14;
  local_16c = *(undefined4 *)(s_primitiveTypeInfo + (ulong)param_1 * 0xc + 4);
  local_190 = 0x447a00003dcccccd;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c8 = &uStack_1a0;
  local_1e0[0] = 0x16;
  local_1b8 = &local_1b0;
  uStack_1a8 = 0x100000001;
  local_1b0 = 0;
  uStack_198 = 0x3f8000003f800000;
  uStack_1a0 = 0;
  local_210[0] = 0x18;
  uStack_1fc = *(undefined4 *)(this + 0x2e0);
  local_1d0 = 0x100000000;
  local_1c0 = 1;
  local_200 = 0;
  local_1f8 = 0;
                    /* try { // try from 00ad0da4 to 00ad0dab has its CatchHandler @ 00ad0fe0 */
  puVar5 = (undefined4 *)operator_new(4);
  *puVar5 = 0;
                    /* try { // try from 00ad0dc0 to 00ad0dc7 has its CatchHandler @ 00ad0fc8 */
  puVar6 = (undefined4 *)operator_new(8);
  *puVar6 = *puVar5;
  puVar6[1] = 1;
  operator_delete(puVar5);
  lVar9 = *(long *)(this + 0xb8);
  puStack_2a8 = &local_160;
  local_2b0 = lVar9 + 0x80;
  uStack_2b4 = *(undefined4 *)(lVar9 + 0x78);
  uStack_260 = *(undefined8 *)(lVar9 + 0x1e0);
  local_290 = local_1e0;
  local_2b8 = 0;
  local_2a0 = local_180;
  local_220 = 0x200000000;
  uStack_298 = 0;
  local_288 = *(undefined8 *)(*(long *)(this + 200) + 0x10);
  puStack_280 = local_210;
  local_278 = *(undefined8 *)(*(long *)(this + 0xd0) + 0x10);
  puStack_270 = &local_a0;
  local_230[0] = 0x1b;
  local_268 = local_230;
  local_258 = *(undefined8 *)(this + 0x208);
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_2c8[0] = 0x1c;
  local_228 = 0;
  local_2c0 = 0;
                    /* try { // try from 00ad0e8c to 00ad0f53 has its CatchHandler @ 00ad0fec */
  local_218 = puVar6;
  (*vkCreateGraphicsPipelines)
            (*(undefined8 *)(*(long *)(this + 0x98) + 0x18),*(undefined8 *)(this + 0x90),1,local_2c8
             ,0,&local_238);
  puVar4 = *(undefined8 **)(this + 0x8f0);
  if (puVar4 == *(undefined8 **)(this + 0x8f8)) {
    __src = *(void **)(this + 0x8e8);
    __n = (long)puVar4 - (long)__src;
    uVar8 = ((long)__n >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ad0fb4 to 00ad0fc3 has its CatchHandler @ 00ad0fec */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar8 <= (ulong)((long)__n >> 2)) {
      uVar8 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar8 << 3);
    }
    puVar4 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar4 = local_238;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x8e8) = __dest;
    *(undefined8 **)(this + 0x8f0) = puVar4 + 1;
    *(void **)(this + 0x8f8) = (void *)((long)__dest + uVar8 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar4 = local_238;
    *(undefined8 **)(this + 0x8f0) = puVar4 + 1;
    if (puVar6 == (undefined4 *)0x0) goto joined_r0x00ad0fac;
  }
  operator_delete(puVar6);
joined_r0x00ad0fac:
  if (puVar7 != (undefined8 *)0x0) {
    operator_delete(puVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_238;
}


