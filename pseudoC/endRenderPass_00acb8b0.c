// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endRenderPass
// Entry Point: 00acb8b0
// Size: 1440 bytes
// Signature: undefined endRenderPass(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::endRenderPass() */

void VulkanCommandBuffer::endRenderPass(void)

{
  long *plVar1;
  VulkanCommandBuffer VVar2;
  long lVar3;
  long *in_x0;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  float **ppfVar8;
  long lVar9;
  long lVar10;
  float *in_stack_fffffffffffffed0;
  undefined8 uVar11;
  undefined4 uVar12;
  uint in_stack_fffffffffffffee0;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(VulkanCommandBuffer *)(in_x0 + 0x8c) = (VulkanCommandBuffer)0x0;
  (*vkCmdEndRenderPass)(in_x0[0x97]);
  lVar4 = local_88;
  if (*(int *)(in_x0 + 0x3e) != 0) goto LAB_00acb8fc;
  if (*(int *)((long)in_x0 + 0x2e4) != 0) {
    uVar7 = 0;
    ppfVar8 = (float **)(in_x0 + 0x5e);
    do {
      plVar1 = (long *)ppfVar8[-1];
      in_stack_fffffffffffffed0 = *ppfVar8;
      (**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x28))(plVar1);
      in_stack_fffffffffffffee0 = 0;
      (**(code **)(*in_x0 + 0x128))();
      uVar7 = uVar7 + 1;
      ppfVar8 = ppfVar8 + 3;
    } while (uVar7 < *(uint *)((long)in_x0 + 0x2e4));
  }
  lVar4 = local_88;
  if (*(VulkanCommandBuffer *)(in_x0 + 0x14b) == (VulkanCommandBuffer)0x0) goto LAB_00acb8fc;
  *(VulkanCommandBuffer *)(in_x0 + 0x14b) = (VulkanCommandBuffer)0x0;
  if ((in_x0[0x150] == 0) || (in_x0[0x14c] == 0)) {
LAB_00acbb14:
    uVar12 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
    VVar2 = *(VulkanCommandBuffer *)((long)in_x0 + 0xa59);
    lVar4 = local_88;
  }
  else {
    lVar4 = (**(code **)(*(long *)in_x0[0x13] + 0x80))();
    if (*(char *)(lVar4 + 0xb0) != '\0') {
      local_d8 = 0xffffffffffffffff;
      local_f8[0] = 0x2d;
      local_d0 = in_x0[0x150];
      uStack_e0 = 0x700000000;
      local_e8 = 0x100000000000;
      local_b8 = 0xffffffff;
      local_f0 = 0;
      uStack_c0 = 0xffffffff;
      local_c8 = 1;
      uVar11 = CONCAT44((int)((ulong)in_stack_fffffffffffffed0 >> 0x20),1);
      (*vkCmdPipelineBarrier)(in_x0[0x97],1,0x1000,0,0,0,0,0,uVar11,local_f8);
      uVar12 = (undefined4)((ulong)uVar11 >> 0x20);
      local_94 = *(undefined8 *)((long)in_x0 + 0xa74);
      local_6c = *(undefined8 *)((long)in_x0 + 0xa94);
      uStack_a8 = 0x100000000;
      local_b0 = 1;
      local_98 = 0;
      local_70 = 0;
      local_a0 = 0;
      uStack_9c = 0;
      local_78 = 0;
      local_8c = 1;
      local_64 = 1;
      uStack_80 = 0x100000000;
      local_88 = 1;
      (*vkCmdBlitImage)(in_x0[0x97],in_x0[0x14c],6,in_x0[0x150],7,1,&local_b0,1);
      uStack_e0 = 0x3b9acdea00000007;
      local_e8 = 0x800000001000;
      in_stack_fffffffffffffed0 = (float *)CONCAT44(uVar12,1);
      (*vkCmdPipelineBarrier)
                (in_x0[0x97],0x1000,0x2000,0,0,0,0,0,in_stack_fffffffffffffed0,local_f8);
      goto LAB_00acbb14;
    }
    beginRenderWindowInternal
              ((VulkanCommandBuffer *)in_x0,(VkImageView_T *)in_x0[0x151],
               *(VkFormat *)(in_x0 + 0x152),*(uint *)((long)in_x0 + 0xa94),*(uint *)(in_x0 + 0x153),
               1,true,0,in_stack_fffffffffffffed0,0,in_stack_fffffffffffffee0,0,0,
               *(uint *)((long)in_x0 + 0xa94),*(uint *)(in_x0 + 0x153));
    uVar12 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
    (**(code **)(*in_x0 + 0x48))();
    (**(code **)(*in_x0 + 0xc0))();
    (**(code **)(*in_x0 + 0xb8))();
    (**(code **)(*in_x0 + 0xb0))();
    (**(code **)(*in_x0 + 0x58))();
    (**(code **)(*in_x0 + 0x50))();
    lVar4 = in_x0[0xd9] - in_x0[0xd8] >> 3;
    in_x0[0x168] = in_x0[0x14d];
    uVar7 = lVar4 * -0x3333333333333333;
    if ((uint)uVar7 <= *(uint *)(in_x0 + 0x16a)) {
      uVar5 = (ulong)(*(uint *)(in_x0 + 0x16a) + 1);
      if (uVar5 <= uVar7) {
        if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
          in_x0[0xd9] = in_x0[0xd8] + uVar5 * 0x28;
        }
      }
      else {
        std::__ndk1::
        vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
        ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                    *)(in_x0 + 0xd8),uVar5 + lVar4 * 0x3333333333333333);
      }
    }
    if ((uint)uVar7 <= *(uint *)((long)in_x0 + 0xb54)) {
      uVar7 = (ulong)(*(uint *)((long)in_x0 + 0xb54) + 1);
      lVar4 = in_x0[0xd9] - in_x0[0xd8] >> 3;
      uVar5 = lVar4 * -0x3333333333333333;
      if (uVar7 <= uVar5) {
        if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
          in_x0[0xd9] = in_x0[0xd8] + uVar7 * 0x28;
        }
      }
      else {
        std::__ndk1::
        vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
        ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                    *)(in_x0 + 0xd8),uVar7 + lVar4 * 0x3333333333333333);
      }
    }
    puVar6 = (undefined4 *)(in_x0[0xd8] + (ulong)*(uint *)(in_x0 + 0x16a) * 0x28);
    *(undefined2 *)((long)in_x0 + 0x6bc) = 0x100;
    puVar6[8] = *(uint *)(in_x0 + 0x16a);
    lVar4 = in_x0[0x169];
    lVar10 = in_x0[0x168];
    lVar9 = in_x0[0x167];
    *puVar6 = 4;
    *(undefined *)(puVar6 + 9) = 1;
    *(long *)(puVar6 + 6) = lVar4;
    *(long *)(puVar6 + 4) = lVar10;
    *(long *)(puVar6 + 2) = lVar9;
    puVar6[8] = *(undefined4 *)((long)in_x0 + 0xb54);
    lVar4 = in_x0[0x169];
    lVar10 = in_x0[0x168];
    lVar9 = in_x0[0x167];
    *puVar6 = 6;
    *(undefined *)(puVar6 + 9) = 1;
    *(long *)(puVar6 + 6) = lVar4;
    *(long *)(puVar6 + 4) = lVar10;
    *(long *)(puVar6 + 2) = lVar9;
    (**(code **)(*in_x0 + 0xe8))();
    (**(code **)(*in_x0 + 0x30))();
    VVar2 = *(VulkanCommandBuffer *)((long)in_x0 + 0xa59);
    lVar4 = local_88;
  }
  if ((VVar2 != (VulkanCommandBuffer)0x0) && (local_88 = in_x0[0x150], local_88 != 0)) {
    uStack_a8 = 0;
    uVar7 = (ulong)local_b0 >> 0x20;
    local_b0 = CONCAT44((int)uVar7,0x2d);
    local_a0 = 0x100;
    local_94 = CONCAT44(*(undefined4 *)(in_x0[0x13] + 0x458),0x3b9acdea);
    local_8c = *(undefined4 *)(in_x0[0x13] + 0x460);
    uStack_9c = 0;
    local_98 = 2;
    local_78 = 0xffffffff;
    uStack_80 = 1;
    local_70 = 0xffffffff;
    uVar11 = CONCAT44(uVar12,1);
    (*vkCmdPipelineBarrier)(in_x0[0x97],0x400,0x2000,0,0,0,0,0,uVar11,&local_b0);
    uVar12 = (undefined4)((ulong)uVar11 >> 0x20);
    local_f0 = 0;
    local_e8 = CONCAT44(local_e8._4_4_,1);
    local_f8[0] = 0x2a;
    uStack_e0 = 0;
    (*vkBeginCommandBuffer)(*(undefined8 *)in_x0[0xbe],local_f8);
    local_a0 = 0;
    (*vkCmdPipelineBarrier)
              (*(undefined8 *)in_x0[0xbe],1,0x2000,0,0,0,0,0,CONCAT44(uVar12,1),&local_b0);
    (*vkEndCommandBuffer)(*(undefined8 *)in_x0[0xbe]);
    lVar4 = local_88;
  }
LAB_00acb8fc:
  local_88 = lVar4;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


