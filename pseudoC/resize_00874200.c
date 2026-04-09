// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00874200
// Size: 220 bytes
// Signature: undefined __thiscall resize(vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalCompanionManager::AnimalData,
   std::__ndk1::allocator<AnimalCompanionManager::AnimalData> >::resize(unsigned long) */

void __thiscall
std::__ndk1::
vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
::resize(vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
         *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar2 = lVar3 * 0x2e8ba2e8ba2e8ba3;
  if (param_1 > uVar2) {
    __append(this,param_1 + lVar3 * -0x2e8ba2e8ba2e8ba3);
    return;
  }
  if (param_1 <= uVar2 && uVar2 - param_1 != 0) {
    lVar4 = *(long *)this + param_1 * 0x58;
    lVar3 = *(long *)(this + 8);
    while (lVar1 = lVar3, lVar1 != lVar4) {
      if (*(long **)(lVar1 + -0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x40) + 8))();
      }
      if (*(long **)(lVar1 + -0x48) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x48) + 8))();
      }
      if (*(long **)(lVar1 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + -0x50) + 8))();
      }
      lVar3 = lVar1 + -0x58;
      if ((*(byte *)(lVar1 + -0x28) & 1) != 0) {
        operator_delete(*(void **)(lVar1 + -0x18));
      }
    }
    *(long *)(this + 8) = lVar4;
  }
  return;
}


