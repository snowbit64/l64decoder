// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSupportsMemoryType
// Entry Point: 00abf604
// Size: 104 bytes
// Signature: undefined __thiscall getSupportsMemoryType(VulkanMemoryAllocator * this, MEMORY_TYPE param_1)


/* VulkanMemoryAllocator::getSupportsMemoryType(VulkanMemoryAllocator::MEMORY_TYPE) const */

bool __thiscall
VulkanMemoryAllocator::getSupportsMemoryType(VulkanMemoryAllocator *this,MEMORY_TYPE param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  
  if (2 < param_1) {
    if ((param_1 != 3) || (uVar1 = *(uint *)(this + 0x10), uVar1 == 0)) {
      return false;
    }
    if ((~*(uint *)(this + 0x14) & 7) != 0) {
      puVar4 = (uint *)(this + 0x1c);
      uVar3 = 1;
      do {
        uVar5 = uVar3;
        if (uVar1 == uVar5) break;
        uVar2 = *puVar4;
        puVar4 = puVar4 + 2;
        uVar3 = uVar5 + 1;
      } while ((~uVar2 & 7) != 0);
      return uVar5 < uVar1;
    }
  }
  return true;
}


