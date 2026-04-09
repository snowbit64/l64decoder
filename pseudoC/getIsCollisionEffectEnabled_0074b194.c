// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsCollisionEffectEnabled
// Entry Point: 0074b194
// Size: 76 bytes
// Signature: undefined __thiscall getIsCollisionEffectEnabled(CollisionEffectManager * this, uint param_1)


/* CollisionEffectManager::getIsCollisionEffectEnabled(unsigned int) const */

bool __thiscall
CollisionEffectManager::getIsCollisionEffectEnabled(CollisionEffectManager *this,uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (*(long *)(this + 8) - *(long *)this >> 3) * -0x71c71c71c71c71c7;
  uVar1 = (ulong)param_1;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    return *(char *)(*(long *)this + uVar1 * 0x48) != '\0';
  }
  return false;
}


