// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanBufferResource
// Entry Point: 00ad3c60
// Size: 536 bytes
// Signature: undefined __thiscall VulkanBufferResource(VulkanBufferResource * this, VulkanRenderDevice * param_1, VulkanCommandBuffer * param_2, uint param_3, RESOURCE_USAGE param_4, BUFFER_TYPE param_5, uchar * param_6, PIXEL_FORMAT param_7)


/* VulkanBufferResource::VulkanBufferResource(VulkanRenderDevice*, VulkanCommandBuffer*, unsigned
   int, IResource::RESOURCE_USAGE, VulkanBufferResource::BUFFER_TYPE, unsigned char const*,
   PixelFormat::PIXEL_FORMAT) */

void __thiscall
VulkanBufferResource::VulkanBufferResource
          (VulkanBufferResource *this,VulkanRenderDevice *param_1,VulkanCommandBuffer *param_2,
          uint param_3,RESOURCE_USAGE param_4,BUFFER_TYPE param_5,uchar *param_6,
          PIXEL_FORMAT param_7)

{
  byte bVar1;
  bool bVar2;
  void *__dest;
  long lVar3;
  undefined8 uVar4;
  BUFFER_TYPE BVar5;
  BUFFER_TYPE BVar6;
  undefined4 uVar7;
  bool bVar8;
  
  bVar2 = false;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(VulkanRenderDevice **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(PIXEL_FORMAT *)(this + 0x48) = param_7;
  *(uint *)(this + 0x4c) = param_3;
  *(undefined ***)this = &PTR__VulkanBufferResource_00fe6900;
  bVar1 = 0;
  *(undefined8 *)(this + 0x28) = 0x100000001;
  BVar6 = param_5;
  switch(param_5) {
  case 0:
  case 4:
    break;
  case 1:
    bVar1 = 0;
    bVar2 = true;
    break;
  case 2:
    bVar2 = false;
    bVar1 = 0;
    BVar6 = 3;
    break;
  case 3:
    bVar2 = false;
    bVar1 = 0;
    BVar6 = 2;
    break;
  case 5:
    bVar2 = false;
    bVar1 = 1;
    break;
  default:
    BVar6 = 8;
  }
  bVar8 = false;
  *(BUFFER_TYPE *)(this + 0x30) = BVar6;
  this[0x58] = (VulkanBufferResource)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if ((param_4 >> 3 & 1) != 0) {
    bVar8 = (param_4 & 0x1000) == 0 && (param_5 & 0xfffffffe) != 4;
  }
  this[0x60] = (VulkanBufferResource)((param_3 < 0x200001 && (param_4 & 1) == 0) & bVar8);
  if (param_5 < 4) {
    *(undefined4 *)(this + 100) = *(undefined4 *)(&DAT_004c55a0 + (long)(int)param_5 * 4);
  }
  if ((param_4 & 0xf) == 0) {
    uVar7 = 0x1f;
  }
  else if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 10) == 0) goto LAB_00ad3dbc;
    uVar7 = 2;
  }
  else {
    uVar7 = 0xb;
  }
  *(undefined4 *)(this + 0x5c) = uVar7;
LAB_00ad3dbc:
  if (param_6 == (uchar *)0x0) {
    if (bVar2) {
      BVar5 = 1;
    }
    else {
      if ((bool)(bVar1 ^ 1)) {
        return;
      }
      BVar5 = 5;
    }
    if (((param_4 ^ 0xffffffff) & 0x2001) == 0) {
                    /* try { // try from 00ad3e38 to 00ad3e5f has its CatchHandler @ 00ad3e78 */
      lVar3 = VulkanResourceAllocator::createBuffer
                        (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),
                         *(uint *)(this + 0x4c),BVar5,*(MEMORY_TYPE *)(this + 0x28),0,
                         *(PIXEL_FORMAT *)(this + 0x48));
      *(long *)(this + 0x68) = lVar3;
      if (lVar3 == 0) {
        uVar4 = VulkanResourceAllocator::createBuffer
                          (*(VulkanResourceAllocator **)(*(long *)(this + 0x20) + 0x370),
                           *(uint *)(this + 0x4c),*(BUFFER_TYPE *)(this + 0x30),
                           *(MEMORY_TYPE *)(this + 0x2c),0,*(PIXEL_FORMAT *)(this + 0x48));
        *(undefined8 *)(this + 0x68) = uVar4;
      }
    }
  }
  else {
                    /* try { // try from 00ad3dc0 to 00ad3dd7 has its CatchHandler @ 00ad3e7c */
    __dest = (void *)lockWrite(this,param_2,0,param_3,1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_6,(ulong)param_3);
                    /* try { // try from 00ad3de8 to 00ad3df3 has its CatchHandler @ 00ad3e7c */
      unlock(this,param_2);
    }
  }
  return;
}


