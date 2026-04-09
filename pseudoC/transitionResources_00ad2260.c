// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transitionResources
// Entry Point: 00ad2260
// Size: 1836 bytes
// Signature: undefined __thiscall transitionResources(VulkanCommandBuffer * this, uint param_1, ITextureObject * * param_2, uint param_3, IStructBuffer * * param_4, ACCESS_MODE param_5, uint param_6)


/* VulkanCommandBuffer::transitionResources(unsigned int, ITextureObject**, unsigned int,
   IStructBuffer**, RenderTargetDesc::ACCESS_MODE, unsigned int) */

void __thiscall
VulkanCommandBuffer::transitionResources
          (VulkanCommandBuffer *this,uint param_1,ITextureObject **param_2,uint param_3,
          IStructBuffer **param_4,ACCESS_MODE param_5,uint param_6)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  LAYOUT LVar4;
  uint uVar5;
  long lVar6;
  LAYOUT LVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  TransitionData *__s;
  void *__s_00;
  undefined8 *puVar11;
  void *__s_01;
  uint uVar12;
  TransitionData TVar13;
  TransitionData *pTVar14;
  IStructBuffer **ppIVar15;
  undefined8 uVar16;
  TransitionData *pTVar17;
  long **pplVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  LAYOUT LVar23;
  ulong uVar24;
  long **pplVar25;
  long **pplVar26;
  ITextureObject **ppIVar27;
  long **pplVar28;
  ulong uVar29;
  long *plVar30;
  VkImageMemoryBarrier *in_stack_ffffffffffffff10;
  uint local_b4;
  undefined8 local_90;
  TransitionData *local_80;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  uVar24 = (ulong)param_1;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar12 = 3;
  if (param_5 != 0) {
    uVar12 = (uint)(param_5 == 1) << 2;
  }
  uVar19 = (ulong)param_3;
  if (param_3 == 0) {
    local_80 = (TransitionData *)0x0;
    if (param_1 == 0) goto LAB_00ad2624;
LAB_00ad2348:
                    /* try { // try from 00ad235c to 00ad2363 has its CatchHandler @ 00ad29d0 */
    __s = (TransitionData *)operator_new(uVar24 * 0x18);
    memset(__s,0,((uVar24 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
    pTVar17 = __s + 0x10;
    uVar29 = uVar24;
    ppIVar27 = param_2;
    do {
      *(ITextureObject **)(pTVar17 + -0x10) = *ppIVar27;
      if (param_5 == 0) {
                    /* try { // try from 00ad23e8 to 00ad23eb has its CatchHandler @ 00ad2a00 */
        uVar8 = VulkanTextureObject::getReadLayout();
        TVar13 = (TransitionData)0x0;
      }
      else if (param_5 == 1) {
        TVar13 = (TransitionData)0x0;
        uVar8 = 4;
      }
      else if (param_5 == 3) {
        uVar8 = 3;
        TVar13 = (TransitionData)0x1;
      }
      else {
        TVar13 = (TransitionData)0x0;
        uVar8 = 3;
      }
      ppIVar27 = ppIVar27 + 1;
      uVar29 = uVar29 - 1;
      *(undefined4 *)(pTVar17 + -8) = uVar8;
      *(uint *)(pTVar17 + -4) = param_6;
      *pTVar17 = TVar13;
      pTVar17 = pTVar17 + 0x18;
    } while (uVar29 != 0);
    if (*(int *)(this + 0x1f0) != 0) {
      if (param_1 == 0) {
LAB_00ad2638:
        __s_00 = (void *)0x0;
        local_90 = 0;
        local_b4 = 0;
      }
      else {
                    /* try { // try from 00ad2418 to 00ad241f has its CatchHandler @ 00ad298c */
        __s_00 = operator_new(uVar24 * 0x48);
        memset(__s_00,0,((uVar24 * 0x48 - 0x48) / 0x48) * 0x48 + 0x48);
        uVar29 = 0;
        local_b4 = 0;
        local_90 = 0;
        do {
          plVar30 = (long *)param_2[uVar29];
          pplVar28 = *(long ***)(this + 0xad8);
          pplVar18 = (long **)(this + 0xad8);
          while (pplVar26 = pplVar18, pplVar28 != (long **)0x0) {
            while (pplVar26 = pplVar28, pplVar26[4] <= plVar30) {
              if (plVar30 <= pplVar26[4]) goto LAB_00ad2558;
              pplVar18 = pplVar26 + 1;
              pplVar28 = (long **)*pplVar18;
              if ((long **)*pplVar18 == (long **)0x0) goto LAB_00ad2558;
            }
            pplVar18 = pplVar26;
            pplVar28 = (long **)*pplVar26;
          }
LAB_00ad2558:
          lVar20 = (long)*pplVar18;
          LVar23 = *(LAYOUT *)(__s + uVar29 * 0x18 + 8);
          if (lVar20 == 0) {
                    /* try { // try from 00ad25b4 to 00ad25bf has its CatchHandler @ 00ad29e8 */
            puVar11 = (undefined8 *)operator_new(0x30);
            puVar11[4] = plVar30;
            *(LAYOUT *)(puVar11 + 5) = LVar23;
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = pplVar26;
            *pplVar18 = puVar11;
            if (**(long **)(this + 0xad0) != 0) {
              *(long *)(this + 0xad0) = **(long **)(this + 0xad0);
              puVar11 = *pplVar18;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0xad8),(__tree_node_base *)puVar11);
            *(long *)(this + 0xae0) = *(long *)(this + 0xae0) + 1;
                    /* try { // try from 00ad2604 to 00ad2613 has its CatchHandler @ 00ad29f0 */
            FUN_00ad2a64(this + 0xab8,__s + uVar29 * 0x18);
          }
          else {
            LVar4 = *(LAYOUT *)(lVar20 + 0x28);
            LVar7 = LVar4;
            if (((__s[uVar29 * 0x18 + 0x10] == (TransitionData)0x0) &&
                (LVar7 = LVar23, LVar4 != LVar23)) ||
               (LVar23 = LVar7,
               VulkanTextureObject::s_layoutInfo[(ulong)LVar23 * 0x10 + 0xc] == '\0')) {
              in_stack_ffffffffffffff10 =
                   (VkImageMemoryBarrier *)((long)__s_00 + (ulong)local_b4 * 0x48);
                    /* try { // try from 00ad248c to 00ad24bb has its CatchHandler @ 00ad29e0 */
              VulkanTextureObject::createImageBarrier
                        ((VulkanTextureObject *)plVar30,0,0xffffffff,0,0xffffffff,LVar4,LVar23,
                         param_6,in_stack_ffffffffffffff10,&uStack_6c,&local_70);
              local_b4 = local_b4 + 1;
              *(LAYOUT *)(lVar20 + 0x28) = LVar23;
              local_90 = CONCAT44(local_70 | local_90._4_4_,uStack_6c | (uint)local_90);
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar24);
      }
      uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
      if (param_3 == 0) {
        __s_01 = (void *)0x0;
        uVar22 = 0;
      }
      else {
                    /* try { // try from 00ad2668 to 00ad266f has its CatchHandler @ 00ad29a8 */
        __s_01 = operator_new(uVar19 * 0x18);
        memset(__s_01,0,((uVar19 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
        uVar24 = 0;
        pplVar18 = (long **)(this + 0xb08);
        uVar22 = 0;
        do {
          plVar30 = *(long **)(param_4[uVar24] + 0x10);
          pplVar25 = (long **)*pplVar18;
          pplVar28 = pplVar18;
          pplVar26 = pplVar18;
          while (pplVar25 != (long **)0x0) {
            while (pplVar26 = pplVar25, plVar30 < pplVar26[4]) {
              pplVar28 = pplVar26;
              pplVar25 = (long **)*pplVar26;
              if ((long **)*pplVar26 == (long **)0x0) {
                plVar21 = *pplVar26;
                goto joined_r0x00ad272c;
              }
            }
            if (plVar30 <= pplVar26[4]) break;
            pplVar28 = pplVar26 + 1;
            pplVar25 = (long **)*pplVar28;
          }
          plVar21 = *pplVar28;
joined_r0x00ad272c:
          if (plVar21 == (long *)0x0) {
                    /* try { // try from 00ad27f0 to 00ad27fb has its CatchHandler @ 00ad29f8 */
            plVar21 = (long *)operator_new(0x30);
            plVar21[4] = (long)plVar30;
            *(uint *)(plVar21 + 5) = uVar12;
            *plVar21 = 0;
            plVar21[1] = 0;
            plVar21[2] = (long)pplVar26;
            *pplVar28 = plVar21;
            if (**(long **)(this + 0xb00) != 0) {
              *(long *)(this + 0xb00) = **(long **)(this + 0xb00);
              plVar21 = *pplVar28;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0xb08),(__tree_node_base *)plVar21);
            *(long *)(this + 0xb10) = *(long *)(this + 0xb10) + 1;
                    /* try { // try from 00ad2848 to 00ad284f has its CatchHandler @ 00ad29fc */
            FUN_00ad2b98(this + 0xae8,local_80 + uVar24 * 0x18);
          }
          else {
            uVar5 = *(uint *)(plVar21 + 5);
            uVar29 = (ulong)uVar5;
            if (((local_80[uVar24 * 0x18 + 0x10] == (TransitionData)0x0) &&
                (uVar29 = (ulong)uVar12, uVar5 != uVar12)) ||
               (uVar12 = (uint)uVar29,
               *(char *)((long)&VulkanBufferResource::s_bufferLayoutIsReadOnly + uVar29) == '\0')) {
                    /* try { // try from 00ad2770 to 00ad27b3 has its CatchHandler @ 00ad2a08 */
              uVar9 = VulkanBufferResource::getVkPipelineStageFlags
                                (*(BUFFER_TYPE *)(plVar30 + 6),uVar5,param_6);
              uVar12 = (uint)uVar29;
              uVar10 = VulkanBufferResource::getVkPipelineStageFlags
                                 (*(BUFFER_TYPE *)(plVar30 + 6),uVar12,0xffffffff);
              VulkanBufferResource::createMemoryBarrier
                        (*(BUFFER_TYPE *)(plVar30 + 6),uVar5,uVar12,
                         (VkMemoryBarrier *)((long)__s_01 + (ulong)uVar22 * 0x18));
              uVar22 = uVar22 + 1;
              *(uint *)(plVar21 + 5) = uVar12;
              local_90 = CONCAT44(uVar10 | local_90._4_4_,uVar9 | (uint)local_90);
            }
          }
          uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar19);
      }
      if ((local_b4 | uVar22) != 0) {
                    /* try { // try from 00ad28a4 to 00ad28ff has its CatchHandler @ 00ad29b8 */
        uVar16 = acquireVkCommandBuffer(this,0);
        pvVar2 = (void *)0x0;
        if (uVar22 != 0) {
          pvVar2 = __s_01;
        }
        pvVar3 = (void *)0x0;
        if (local_b4 != 0) {
          pvVar3 = __s_00;
        }
        if ((uint)local_90 == 0) {
          local_90._0_4_ = 1;
        }
        iVar1 = 0x2000;
        if (local_90._4_4_ != 0) {
          iVar1 = local_90._4_4_;
        }
        (*vkCmdPipelineBarrier)
                  (uVar16,(uint)local_90,iVar1,0,uVar22,pvVar2,0,0,CONCAT44(uVar8,local_b4),pvVar3);
      }
      if (__s_01 != (void *)0x0) {
        operator_delete(__s_01);
      }
      if (__s_00 != (void *)0x0) {
        operator_delete(__s_00);
      }
      goto LAB_00ad293c;
    }
    if (param_1 != 0) {
                    /* try { // try from 00ad2868 to 00ad287f has its CatchHandler @ 00ad2994 */
      VulkanTextureObject::synchronizeTextures(this,0,param_1,__s);
    }
  }
  else {
    local_80 = (TransitionData *)operator_new(uVar19 * 0x18);
    memset(local_80,0,((uVar19 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
    pTVar14 = local_80 + 0x10;
    uVar29 = uVar19;
    ppIVar15 = param_4;
    do {
      uVar29 = uVar29 - 1;
      uVar16 = *(undefined8 *)(*ppIVar15 + 0x10);
      *(uint *)(pTVar14 + -8) = uVar12;
      *(uint *)(pTVar14 + -4) = param_6;
      *pTVar14 = (TransitionData)(param_5 == 3);
      *(undefined8 *)(pTVar14 + -0x10) = uVar16;
      pTVar14 = pTVar14 + 0x18;
      ppIVar15 = ppIVar15 + 1;
    } while (uVar29 != 0);
    if (param_1 != 0) goto LAB_00ad2348;
LAB_00ad2624:
    if (*(int *)(this + 0x1f0) != 0) {
      __s = (TransitionData *)0x0;
      goto LAB_00ad2638;
    }
    __s = (TransitionData *)0x0;
  }
  if (param_3 != 0) {
                    /* try { // try from 00ad292c to 00ad293b has its CatchHandler @ 00ad2994 */
    VulkanBufferResource::synchronizeBuffers(this,0,param_3,local_80);
  }
LAB_00ad293c:
  if (__s != (TransitionData *)0x0) {
    operator_delete(__s);
  }
  if (local_80 != (TransitionData *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


