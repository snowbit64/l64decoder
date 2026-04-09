// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronizeBuffers
// Entry Point: 00ad435c
// Size: 492 bytes
// Signature: undefined __cdecl synchronizeBuffers(VulkanCommandBuffer * param_1, VK_COMMAND_BUFFER_TYPE param_2, uint param_3, TransitionData * param_4)


/* VulkanBufferResource::synchronizeBuffers(VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE, unsigned int, VulkanBufferResource::TransitionData*) */

void VulkanBufferResource::synchronizeBuffers
               (VulkanCommandBuffer *param_1,VK_COMMAND_BUFFER_TYPE param_2,uint param_3,
               TransitionData *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  void *__s;
  undefined8 uVar7;
  undefined4 *puVar8;
  TransitionData *pTVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  if (param_3 != 0) {
    uVar17 = (ulong)param_3;
    uVar13 = (uVar17 + (ulong)param_3 * 2) * 8;
    __s = operator_new(uVar13);
    memset(__s,0,((uVar13 - 0x18) / 0x18) * 0x18 + 0x18);
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    pTVar9 = param_4 + 0x10;
    do {
      lVar10 = *(long *)(pTVar9 + -0x10);
      uVar3 = *(uint *)(lVar10 + 0x90);
      uVar13 = (ulong)uVar3;
      cVar6 = *(char *)((long)&s_bufferLayoutIsReadOnly + uVar13);
      uVar1 = *(uint *)(pTVar9 + -8);
      if (*pTVar9 != (TransitionData)0x0) {
        uVar1 = uVar3;
      }
      if ((uVar3 != uVar1) || (cVar6 == '\0')) {
        uVar12 = (ulong)*(uint *)(lVar10 + 0x30);
        uVar4 = *(uint *)(pTVar9 + -4);
        puVar8 = (undefined4 *)((long)__s + (ulong)uVar14 * 0x18);
        *puVar8 = 0x2e;
        uVar5 = *(uint *)(s_bufferLayoutInfo + uVar13 * 8 + uVar12 * 0x28);
        *(undefined8 *)(puVar8 + 2) = 0;
        uVar3 = uVar5 & 0xfffffff7;
        if ((uVar4 & 2) != 0) {
          uVar3 = uVar5;
        }
        uVar5 = uVar3 & 0xffffff7f;
        if ((uVar4 & 4) != 0) {
          uVar5 = uVar3;
        }
        uVar3 = uVar5 & 0xfffff7ff;
        if ((uVar4 & 8) != 0) {
          uVar3 = uVar5;
        }
        if (cVar6 == '\0') {
          uVar11 = *(undefined4 *)(s_bufferLayoutInfo + uVar12 * 0x28 + uVar13 * 8 + 4);
        }
        else {
          uVar11 = 0;
        }
        uVar15 = *(uint *)(s_bufferLayoutInfo + (ulong)uVar1 * 8 + uVar12 * 0x28) | uVar15;
        uVar16 = uVar3 | uVar16;
        *(uint *)(lVar10 + 0x90) = uVar1;
        uVar2 = *(undefined4 *)(s_bufferLayoutInfo + uVar12 * 0x28 + (ulong)uVar1 * 8 + 4);
        *(undefined4 *)((long)__s + (ulong)uVar14 * 0x18 + 0x10) = uVar11;
        *(undefined4 *)((long)__s + (ulong)uVar14 * 0x18 + 0x14) = uVar2;
        uVar14 = uVar14 + 1;
      }
      pTVar9 = pTVar9 + 0x18;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if (uVar14 != 0) {
                    /* try { // try from 00ad44c4 to 00ad4503 has its CatchHandler @ 00ad4548 */
      uVar7 = VulkanCommandBuffer::acquireVkCommandBuffer(param_1,param_2);
      (*vkCmdPipelineBarrier)(uVar7,uVar16,uVar15,0,uVar14,__s,0,0,0,0);
    }
    operator_delete(__s);
    return;
  }
  return;
}


