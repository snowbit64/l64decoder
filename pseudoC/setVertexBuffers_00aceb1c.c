// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVertexBuffers
// Entry Point: 00aceb1c
// Size: 236 bytes
// Signature: undefined __thiscall setVertexBuffers(VulkanCommandBuffer * this, IVertexBuffer * * param_1, uint param_2, IVertexDeclaration * param_3)


/* VulkanCommandBuffer::setVertexBuffers(IVertexBuffer* const*, unsigned int, IVertexDeclaration*)
    */

void __thiscall
VulkanCommandBuffer::setVertexBuffers
          (VulkanCommandBuffer *this,IVertexBuffer **param_1,uint param_2,
          IVertexDeclaration *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong auStack_a8 [5];
  undefined8 auStack_80 [5];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    puVar5 = auStack_80;
    puVar6 = auStack_a8;
    do {
      puVar2 = (undefined8 *)VulkanVertexBuffer::acquireBufferForRendering();
      uVar4 = uVar4 - 1;
      *puVar5 = *puVar2;
      *puVar6 = (ulong)*(uint *)(puVar2 + 3);
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 != 0);
    if (param_2 != 0) {
      *(IVertexDeclaration **)(this + 0xa0) = param_3;
      (*vkCmdBindVertexBuffers)(*(undefined8 *)(this + 0x4b8),0,param_2,auStack_80,auStack_a8);
      lVar3 = *(long *)(this + 0xa0);
      goto LAB_00acebc0;
    }
  }
  lVar3 = *(long *)(this + 0xa8);
  *(long *)(this + 0xa0) = lVar3;
LAB_00acebc0:
  *(ulong *)(this + 0x5f8) =
       *(ulong *)(this + 0x5f8) & 0xfffffffffe01ffff | (ulong)**(uint **)(lVar3 + 8) << 0x11;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


