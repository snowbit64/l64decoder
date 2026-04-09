// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryTypeIndex
// Entry Point: 00abf428
// Size: 476 bytes
// Signature: undefined __thiscall getMemoryTypeIndex(VulkanMemoryAllocator * this, uint param_1, MEMORY_TYPE param_2, uint * param_3)


/* VulkanMemoryAllocator::getMemoryTypeIndex(unsigned int, VulkanMemoryAllocator::MEMORY_TYPE,
   unsigned int&) const */

uint __thiscall
VulkanMemoryAllocator::getMemoryTypeIndex
          (VulkanMemoryAllocator *this,uint param_1,MEMORY_TYPE param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  VulkanMemoryAllocator *pVVar7;
  uint uVar8;
  
  switch(param_2) {
  case 0:
    uVar8 = *(uint *)(this + 0x10);
    uVar6 = (ulong)uVar8;
    if (uVar8 == 0) {
      return 0;
    }
    uVar3 = 0;
    pVVar7 = this + 0x14;
    uVar8 = 1;
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      if (((uVar8 & param_1) != 0) && (((byte)*pVVar7 & 1) != 0)) goto LAB_00abf5f8;
      uVar3 = uVar3 + 1;
      uVar8 = uVar8 << 1;
      pVVar7 = pVVar7 + 8;
      uVar4 = (uint)(uVar3 < uVar6);
      uVar1 = (uint)(uVar3 < uVar6);
    } while (uVar6 != uVar3);
    break;
  case 1:
    uVar8 = *(uint *)(this + 0x10);
    uVar6 = (ulong)uVar8;
    if (uVar8 == 0) {
      return 0;
    }
    uVar3 = 0;
    puVar5 = (uint *)(this + 0x14);
    uVar8 = 1;
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      if (((uVar8 & param_1) != 0) && ((~*puVar5 & 6) == 0)) goto LAB_00abf5f8;
      uVar3 = uVar3 + 1;
      uVar8 = uVar8 << 1;
      puVar5 = puVar5 + 2;
      uVar4 = (uint)(uVar3 < uVar6);
      uVar1 = (uint)(uVar3 < uVar6);
    } while (uVar6 != uVar3);
    break;
  case 2:
    uVar4 = *(uint *)(this + 0x10);
    uVar6 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar3 = 0;
      puVar5 = (uint *)(this + 0x14);
      bVar2 = true;
      uVar8 = 1;
      do {
        if (((uVar8 & param_1) != 0) && (((*puVar5 ^ 0xffffffff) & 10) == 0)) {
          *param_3 = (uint)uVar3;
          if (bVar2) {
            return 1;
          }
          uVar6 = (ulong)*(uint *)(this + 0x10);
          break;
        }
        uVar3 = uVar3 + 1;
        uVar8 = uVar8 << 1;
        bVar2 = uVar3 < uVar6;
        puVar5 = puVar5 + 2;
      } while (uVar6 != uVar3);
      uVar4 = (uint)uVar6;
      if (uVar4 != 0) {
        uVar3 = 0;
        pVVar7 = this + 0x14;
        uVar8 = 1;
        uVar1 = 1;
        do {
          uVar4 = uVar1;
          if (((uVar8 & param_1) != 0) && (((byte)*pVVar7 >> 1 & 1) != 0)) goto LAB_00abf5f8;
          uVar3 = uVar3 + 1;
          uVar8 = uVar8 << 1;
          pVVar7 = pVVar7 + 8;
          uVar4 = (uint)(uVar3 < uVar6);
          uVar1 = (uint)(uVar3 < uVar6);
        } while (uVar6 != uVar3);
      }
    }
    break;
  case 3:
    uVar8 = *(uint *)(this + 0x10);
    uVar6 = (ulong)uVar8;
    if (uVar8 == 0) {
      return 0;
    }
    uVar3 = 0;
    puVar5 = (uint *)(this + 0x14);
    uVar8 = 1;
    uVar1 = 1;
    do {
      uVar4 = uVar1;
      if (((uVar8 & param_1) != 0) && ((~*puVar5 & 7) == 0)) goto LAB_00abf5f8;
      uVar3 = uVar3 + 1;
      uVar8 = uVar8 << 1;
      puVar5 = puVar5 + 2;
      uVar4 = (uint)(uVar3 < uVar6);
      uVar1 = (uint)(uVar3 < uVar6);
    } while (uVar6 != uVar3);
    break;
  default:
    return 0;
  }
LAB_00abf5fc:
  return uVar4 & 1;
LAB_00abf5f8:
  *param_3 = (uint)uVar3;
  goto LAB_00abf5fc;
}


