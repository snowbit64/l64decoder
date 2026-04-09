// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionEffectEnabled
// Entry Point: 0074b1e0
// Size: 64 bytes
// Signature: undefined __thiscall setCollisionEffectEnabled(CollisionEffectManager * this, uint param_1, bool param_2)


/* CollisionEffectManager::setCollisionEffectEnabled(unsigned int, bool) */

void __thiscall
CollisionEffectManager::setCollisionEffectEnabled
          (CollisionEffectManager *this,uint param_1,bool param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (*(long *)(this + 8) - *(long *)this >> 3) * -0x71c71c71c71c71c7;
  uVar1 = (ulong)param_1;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    *(bool *)(*(long *)this + uVar1 * 0x48) = param_2;
  }
  return;
}


