// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSupportsMemoryTypeWithPropertyFlags
// Entry Point: 00abf3d4
// Size: 84 bytes
// Signature: undefined __thiscall getSupportsMemoryTypeWithPropertyFlags(VulkanMemoryAllocator * this, uint param_1)


/* VulkanMemoryAllocator::getSupportsMemoryTypeWithPropertyFlags(unsigned int) const */

bool __thiscall
VulkanMemoryAllocator::getSupportsMemoryTypeWithPropertyFlags
          (VulkanMemoryAllocator *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == 0) {
    return false;
  }
  if ((param_1 & (*(uint *)(this + 0x14) ^ 0xffffffff)) == 0) {
    return true;
  }
  puVar4 = (uint *)(this + 0x1c);
  uVar3 = 1;
  do {
    uVar5 = uVar3;
    if (uVar1 == uVar5) break;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 2;
    uVar3 = uVar5 + 1;
  } while ((param_1 & (uVar2 ^ 0xffffffff)) != 0);
  return uVar5 < uVar1;
}


