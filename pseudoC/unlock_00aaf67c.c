// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00aaf67c
// Size: 72 bytes
// Signature: undefined __thiscall unlock(VulkanTextureObject * this, ICommandBuffer * param_1, PixelLockData * param_2)


/* VulkanTextureObject::unlock(ICommandBuffer*, ITextureObject::PixelLockData const&) */

void __thiscall
VulkanTextureObject::unlock
          (VulkanTextureObject *this,ICommandBuffer *param_1,PixelLockData *param_2)

{
  if (*(int *)(this + 0x18) == 4) {
    VulkanBufferResource::unlock
              (*(VulkanBufferResource **)(this + 0x10),(VulkanCommandBuffer *)param_1);
  }
  else {
    unlockInternal(this,(VulkanCommandBuffer *)param_1,(LockInternalData *)(param_2 + 0x10),
                   (uint)(byte)param_1[0x460]);
  }
  this[0x53] = (VulkanTextureObject)0x0;
  return;
}


