// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startReallocateTexture
// Entry Point: 00ab7dd8
// Size: 144 bytes
// Signature: undefined __thiscall startReallocateTexture(VulkanRenderDevice * this, ICommandBuffer * param_1, ITextureObject * param_2, int param_3, uchar * param_4)


/* VulkanRenderDevice::startReallocateTexture(ICommandBuffer*, ITextureObject const*, int, unsigned
   char const*) */

long * __thiscall
VulkanRenderDevice::startReallocateTexture
          (VulkanRenderDevice *this,ICommandBuffer *param_1,ITextureObject *param_2,int param_3,
          uchar *param_4)

{
  long *this_00;
  ulong uVar1;
  long lVar2;
  
  this_00 = (long *)operator_new(0x160);
                    /* try { // try from 00ab7e0c to 00ab7e17 has its CatchHandler @ 00ab7e68 */
  VulkanTextureObject::VulkanTextureObject((VulkanTextureObject *)this_00,this,true);
  uVar1 = VulkanTextureObject::startReallocateTexture
                    ((VulkanTextureObject *)param_2,(VulkanCommandBuffer *)param_1,
                     (VulkanTextureObject *)this_00,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    lVar2 = *this_00;
    *(undefined4 *)(this + 0x3b0) = 0xb;
    (**(code **)(lVar2 + 8))(this_00);
    this_00 = (long *)0x0;
  }
  return this_00;
}


