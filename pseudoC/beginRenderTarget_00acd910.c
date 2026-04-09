// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderTarget
// Entry Point: 00acd910
// Size: 1304 bytes
// Signature: undefined __thiscall beginRenderTarget(VulkanCommandBuffer * this, RenderTargetDesc * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7)


/* VulkanCommandBuffer::beginRenderTarget(RenderTargetDesc const&, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
VulkanCommandBuffer::beginRenderTarget
          (VulkanCommandBuffer *this,RenderTargetDesc *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7)

{
  uint uVar1;
  long lVar2;
  void *__dest;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  void *__src;
  size_t __n;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x1f0) == 0) {
    if ((this[0x460] != (VulkanCommandBuffer)0x0) && (this[0x948] != (VulkanCommandBuffer)0x0)) {
      uVar1 = *(uint *)param_1;
      uVar4 = (ulong)uVar1;
      if (uVar1 == *(uint *)(this + 0x950)) {
        if (uVar1 != 0) {
          piVar7 = (int *)(this + 0x970);
          piVar9 = (int *)(param_1 + 0x20);
          do {
            if ((((*(long *)(piVar9 + -6) != *(long *)(piVar7 + -6)) ||
                 (*(long *)(piVar9 + -4) != *(long *)(piVar7 + -4))) || (piVar9[-1] != piVar7[-1]))
               || ((piVar9[-2] != piVar7[-2] || (*piVar9 != *piVar7)))) goto LAB_00acd9fc;
            piVar7 = piVar7 + 0xc;
            piVar9 = piVar9 + 0xc;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (((*(long *)(param_1 + 200) == *(long *)(this + 0xa18)) &&
            (*(long *)(param_1 + 0xd0) == *(long *)(this + 0xa20))) &&
           (*(uint *)(this + 0xa48) != param_2)) {
          fVar14 = (float)(ulong)param_7;
          local_80 = CONCAT44((float)(ulong)param_5 + fVar14,(float)(ulong)param_4);
          local_78 = CONCAT44(-fVar14,(float)(ulong)param_6);
          local_70 = 0x3f80000000000000;
          (*vkCmdSetViewport)(*(undefined8 *)(this + 0x4b8),0,1,&local_80);
          goto LAB_00acdd78;
        }
      }
    }
LAB_00acd9fc:
    this[0x948] = (VulkanCommandBuffer)0x1;
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar18 = *(undefined8 *)(param_1 + 8);
    uVar17 = *(undefined8 *)param_1;
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x988) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x980) = uVar5;
    *(undefined8 *)(this + 0x978) = uVar13;
    *(undefined8 *)(this + 0x970) = uVar12;
    *(undefined8 *)(this + 0x958) = uVar18;
    *(undefined8 *)(this + 0x950) = uVar17;
    *(undefined8 *)(this + 0x968) = uVar16;
    *(undefined8 *)(this + 0x960) = uVar15;
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    uVar18 = *(undefined8 *)(param_1 + 0x48);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x58);
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x9c8) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x9c0) = uVar5;
    *(undefined8 *)(this + 0x9b8) = uVar13;
    *(undefined8 *)(this + 0x9b0) = uVar12;
    *(undefined8 *)(this + 0x998) = uVar18;
    *(undefined8 *)(this + 0x990) = uVar17;
    *(undefined8 *)(this + 0x9a8) = uVar16;
    *(undefined8 *)(this + 0x9a0) = uVar15;
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    uVar12 = *(undefined8 *)(param_1 + 0xa0);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    uVar18 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    uVar16 = *(undefined8 *)(param_1 + 0x98);
    uVar15 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(this + 0xa08) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(this + 0xa00) = uVar5;
    *(undefined8 *)(this + 0x9f8) = uVar13;
    *(undefined8 *)(this + 0x9f0) = uVar12;
    *(undefined8 *)(this + 0x9d8) = uVar18;
    *(undefined8 *)(this + 0x9d0) = uVar17;
    *(undefined8 *)(this + 0x9e8) = uVar16;
    *(undefined8 *)(this + 0x9e0) = uVar15;
    uVar15 = *(undefined8 *)(param_1 + 0xd8);
    uVar13 = *(undefined8 *)(param_1 + 0xd0);
    uVar12 = *(undefined8 *)(param_1 + 0xe0);
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    uVar17 = *(undefined8 *)(param_1 + 200);
    uVar16 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(this + 0xa38) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(this + 0xa30) = uVar12;
    *(undefined8 *)(this + 0xa28) = uVar15;
    *(undefined8 *)(this + 0xa20) = uVar13;
    *(undefined8 *)(this + 0xa40) = uVar5;
    *(undefined8 *)(this + 0xa18) = uVar17;
    *(undefined8 *)(this + 0xa10) = uVar16;
    *(uint *)(this + 0xa48) = param_2;
    if (this[0x460] != (VulkanCommandBuffer)0x0) {
      endRenderPass();
    }
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x618) = 0;
    *(undefined8 *)(this + 0x688) = *(undefined8 *)(this + 0x680);
    *(undefined8 *)(this + 0x608) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x610) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x880) = 0;
    *(undefined8 *)(this + 0x878) = 0;
    *(undefined8 *)(this + 0x5f8) = 0;
    *(undefined8 *)(this + 0x788) = *(undefined8 *)(this + 0x780);
    *(undefined8 *)(this + 0x6c8) = *(undefined8 *)(this + 0x6c0);
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0x7c8) = *(undefined8 *)(this + 0x7c0);
    *(undefined8 *)(this + 0x708) = *(undefined8 *)(this + 0x700);
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0x808) = *(undefined8 *)(this + 0x800);
    *(undefined8 *)(this + 0x890) = 0;
    *(undefined8 *)(this + 0x888) = 0;
    *(undefined4 *)(this + 0x678) = 0;
    *(undefined2 *)(this + 0x67c) = 1;
    *(undefined4 *)(this + 0x6b8) = 0;
    *(undefined8 *)(this + 0x6a0) = 0;
    *(undefined8 *)(this + 0x698) = 0;
    *(undefined2 *)(this + 0x6bc) = 1;
    *(undefined4 *)(this + 0x6f8) = 0;
    *(undefined8 *)(this + 0x6e0) = 0;
    *(undefined8 *)(this + 0x6d8) = 0;
    *(undefined2 *)(this + 0x6fc) = 1;
    *(undefined4 *)(this + 0x738) = 0;
    *(undefined8 *)(this + 0x720) = 0;
    *(undefined8 *)(this + 0x718) = 0;
    *(undefined2 *)(this + 0x73c) = 1;
    *(undefined8 *)(this + 0x748) = *(undefined8 *)(this + 0x740);
    *(undefined8 *)(this + 0x620) = 0;
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined8 *)(this + 0x760) = 0;
    *(undefined8 *)(this + 0x758) = 0;
    *(undefined4 *)(this + 0x778) = 0;
    *(undefined2 *)(this + 0x77c) = 1;
    *(undefined8 *)(this + 0x898) = 0;
    *(undefined4 *)(this + 0x7b8) = 0;
    *(undefined8 *)(this + 0x7a0) = 0;
    *(undefined8 *)(this + 0x798) = 0;
    *(undefined2 *)(this + 0x7bc) = 1;
    *(undefined8 *)(this + 0x8a0) = 0;
    *(undefined4 *)(this + 0x7f8) = 0;
    *(undefined8 *)(this + 0x7e0) = 0;
    *(undefined8 *)(this + 0x7d8) = 0;
    *(undefined2 *)(this + 0x7fc) = 1;
    *(undefined8 *)(this + 0x8a8) = 0;
    *(undefined4 *)(this + 0x838) = 0;
    *(undefined8 *)(this + 0x820) = 0;
    *(undefined8 *)(this + 0x818) = 0;
    *(undefined2 *)(this + 0x83c) = 1;
    *(undefined8 *)(this + 0x848) = *(undefined8 *)(this + 0x840);
    *(undefined8 *)(this + 0x8b0) = 0;
    *(undefined4 *)(this + 0x458) = 0;
    *(undefined4 *)(this + 0x2e4) = 0;
    *(undefined4 *)(this + 0x360) = 0;
    *(undefined4 *)(this + 0xaa8) = 0;
    *(undefined8 *)(this + 0x860) = 0;
    *(undefined8 *)(this + 0x858) = 0;
  }
  createRenderPassData(this,param_1,param_2,(RenderPassData *)(this + 0x1f8),&local_84);
  uVar5 = acquireVkCommandBuffer(this,0);
  (*vkCmdBeginRenderPass)(uVar5,(RenderPassData *)(this + 0x1f8),0);
  if ((*(int *)(this + 0x1f0) == 0) && (*(int *)(this + 0x360) != 0)) {
    uVar4 = 0;
    puVar11 = (uint *)(this + 0x378);
    do {
      VulkanTextureObject::setLayout
                (*(VulkanTextureObject **)(puVar11 + -4),puVar11[-2],puVar11[-1],*puVar11);
      uVar4 = uVar4 + 1;
      puVar11 = puVar11 + 6;
    } while (uVar4 < *(uint *)(this + 0x360));
  }
  this[0x460] = (VulkanCommandBuffer)0x1;
  uVar5 = *(undefined8 *)(this + 0x4b8);
  local_80 = 0;
  local_78 = *(undefined8 *)(this + 0x220);
  (*vkCmdSetScissor)(uVar5,0,1,&local_80);
  fVar14 = (float)(ulong)param_7;
  local_80 = CONCAT44((float)(ulong)param_5 + fVar14,(float)(ulong)param_4);
  local_78 = CONCAT44(-fVar14,(float)(ulong)param_6);
  local_70 = 0x3f80000000000000;
  (*vkCmdSetViewport)(uVar5,0,1,&local_80);
  puVar10 = *(undefined8 **)(this + 0x550);
  uVar13 = *(undefined8 *)(this + 0x208);
  puVar3 = *(undefined8 **)(this + 0x590);
  uVar12 = *(undefined8 *)(this + 0x210);
  *(ulong *)(this + 0x5f8) = *(ulong *)(this + 0x5f8) & 0xfffff03fffffffff | (ulong)local_84 << 0x26
  ;
  uVar5 = *puVar10;
  if (puVar3 < *(undefined8 **)(this + 0x598)) {
    *puVar3 = uVar13;
    puVar3[1] = uVar12;
    puVar3[2] = puVar10;
    puVar3[3] = uVar5;
    *(undefined8 **)(this + 0x590) = puVar3 + 4;
  }
  else {
    __src = *(void **)(this + 0x588);
    __n = (long)puVar3 - (long)__src;
    uVar4 = ((long)__n >> 5) + 1;
    if (uVar4 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)*(undefined8 **)(this + 0x598) - (long)__src;
    uVar8 = (long)uVar6 >> 4;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar4 = 0x7ffffffffffffff;
    }
    if (uVar4 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar4 * 0x20);
    puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
    *puVar3 = uVar13;
    puVar3[1] = uVar12;
    puVar3[2] = puVar10;
    puVar3[3] = uVar5;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(undefined8 **)(this + 0x590) = puVar3 + 4;
    *(void **)(this + 0x588) = __dest;
    *(void **)(this + 0x598) = (void *)((long)__dest + uVar4 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
LAB_00acdd78:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


