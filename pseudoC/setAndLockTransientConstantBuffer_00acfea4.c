// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAndLockTransientConstantBuffer
// Entry Point: 00acfea4
// Size: 152 bytes
// Signature: undefined __thiscall setAndLockTransientConstantBuffer(VulkanCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* VulkanCommandBuffer::setAndLockTransientConstantBuffer(unsigned int, IConstantBuffer*) */

void __thiscall
VulkanCommandBuffer::setAndLockTransientConstantBuffer
          (VulkanCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
  long lVar1;
  uint uVar2;
  uchar *local_60;
  BufferInfo aBStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2 + 0x20))(param_2);
  lockTransientBuffer(this,uVar2,0,0,aBStack_58,&local_60);
  setBufferInternal(this,param_1,aBStack_58,0,3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


