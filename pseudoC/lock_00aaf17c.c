// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00aaf17c
// Size: 152 bytes
// Signature: undefined __thiscall lock(VulkanTextureObject * this, ICommandBuffer * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, LOCK_OPTION param_10, PixelLockData * param_11)


/* VulkanTextureObject::lock(ICommandBuffer*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, IResource::LOCK_OPTION,
   ITextureObject::PixelLockData&) */

void __thiscall
VulkanTextureObject::lock
          (VulkanTextureObject *this,ICommandBuffer *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,LOCK_OPTION param_10,
          PixelLockData *param_11)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x18) == 4) {
    uVar1 = VulkanBufferResource::lock
                      (*(VulkanBufferResource **)(this + 0x10),(VulkanCommandBuffer *)param_1,
                       *(int *)(this + 0x44) * param_4,*(int *)(this + 0x44) * (param_6 - param_4),
                       param_10);
    *(undefined8 *)param_11 = uVar1;
    *(undefined8 *)(param_11 + 8) = 0;
  }
  else {
    if ((param_9 | param_8) == 0) {
      param_9 = 1;
    }
    lockInternal(this,(VulkanCommandBuffer *)param_1,param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9,param_10,param_11,(uint)(byte)param_1[0x460]);
  }
  this[0x53] = (VulkanTextureObject)0x1;
  return;
}


