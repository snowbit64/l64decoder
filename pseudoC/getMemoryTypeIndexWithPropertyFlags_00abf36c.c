// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryTypeIndexWithPropertyFlags
// Entry Point: 00abf36c
// Size: 104 bytes
// Signature: undefined __thiscall getMemoryTypeIndexWithPropertyFlags(VulkanMemoryAllocator * this, uint param_1, uint param_2, uint * param_3)


/* VulkanMemoryAllocator::getMemoryTypeIndexWithPropertyFlags(unsigned int, unsigned int, unsigned
   int&) const */

bool __thiscall
VulkanMemoryAllocator::getMemoryTypeIndexWithPropertyFlags
          (VulkanMemoryAllocator *this,uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == 0) {
    return false;
  }
  uVar3 = 0;
  puVar4 = (uint *)(this + 0x14);
  bVar2 = true;
  uVar5 = 1;
  while (((uVar5 & param_1) == 0 || ((param_2 & (*puVar4 ^ 0xffffffff)) != 0))) {
    uVar3 = uVar3 + 1;
    uVar5 = uVar5 << 1;
    bVar2 = uVar3 < uVar1;
    puVar4 = puVar4 + 2;
    if (uVar1 == uVar3) {
      return bVar2;
    }
  }
  *param_3 = (uint)uVar3;
  return bVar2;
}


