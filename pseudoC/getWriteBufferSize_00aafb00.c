// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWriteBufferSize
// Entry Point: 00aafb00
// Size: 104 bytes
// Signature: undefined __thiscall getWriteBufferSize(VulkanTextureObject * this, uint param_1, PIXEL_FORMAT param_2)


/* VulkanTextureObject::getWriteBufferSize(unsigned int, PixelFormat::PIXEL_FORMAT) */

int __thiscall
VulkanTextureObject::getWriteBufferSize(VulkanTextureObject *this,uint param_1,PIXEL_FORMAT param_2)

{
  PIXEL_FORMAT PVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(uint *)(this + 0x28) >> (ulong)(param_1 & 0x1f);
  PVar1 = *(PIXEL_FORMAT *)(this + 0x20);
  if (param_2 != 0) {
    PVar1 = param_2;
  }
  uVar3 = *(uint *)(this + 0x2c) >> (ulong)(param_1 & 0x1f);
  uVar4 = *(uint *)(this + 0x30) >> (ulong)(param_1 & 0x1f);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  iVar6 = 6;
  if (*(int *)(this + 0x18) != 2) {
    iVar6 = 1;
  }
  iVar5 = PixelFormatUtil::getMemorySize(uVar2,uVar3,uVar4,PVar1);
  return iVar6 * iVar5;
}


