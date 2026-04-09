// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeContentsToBuffer
// Entry Point: 00aaf9dc
// Size: 292 bytes
// Signature: undefined __thiscall writeContentsToBuffer(VulkanTextureObject * this, ICommandBuffer * param_1, uchar * param_2, uint param_3, uint param_4, PIXEL_FORMAT param_5)


/* VulkanTextureObject::writeContentsToBuffer(ICommandBuffer*, unsigned char*, unsigned int,
   unsigned int, PixelFormat::PIXEL_FORMAT) */

undefined8 __thiscall
VulkanTextureObject::writeContentsToBuffer
          (VulkanTextureObject *this,ICommandBuffer *param_1,uchar *param_2,uint param_3,
          uint param_4,PIXEL_FORMAT param_5)

{
  PIXEL_FORMAT PVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *local_a8;
  uint local_a0;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar2 = *(uint *)(this + 0x28) >> (ulong)(param_4 & 0x1f);
  uVar3 = *(uint *)(this + 0x2c) >> (ulong)(param_4 & 0x1f);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  uVar4 = *(uint *)(this + 0x30) >> (ulong)(param_4 & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  (**(code **)(*(long *)this + 0x68))
            (this,param_1,param_3,param_4,0,0,uVar2,uVar3,0,uVar4,2,&local_a8);
  PVar1 = *(PIXEL_FORMAT *)(this + 0x1c);
  if (param_5 != 0) {
    PVar1 = param_5;
  }
  PixelFormatUtil::convertPixelFormat
            (local_a8,local_a0,0,*(PIXEL_FORMAT *)(this + 0x20),param_2,0,0,PVar1,uVar2,uVar3,uVar4)
  ;
  (**(code **)(*(long *)this + 0x70))(this,param_1,&local_a8);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


