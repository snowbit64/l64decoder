// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAndLockTransientConstantBufferCs
// Entry Point: 00ad0154
// Size: 152 bytes
// Signature: undefined __thiscall setAndLockTransientConstantBufferCs(VulkanCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* non-virtual thunk to VulkanCommandBuffer::setAndLockTransientConstantBufferCs(unsigned int,
   IConstantBuffer*) */

void __thiscall
VulkanCommandBuffer::setAndLockTransientConstantBufferCs
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
  lockTransientBuffer(this + -8,uVar2,0,0,aBStack_58,&local_60);
  setBufferInternal(this + -8,param_1,aBStack_58,0,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60);
}


