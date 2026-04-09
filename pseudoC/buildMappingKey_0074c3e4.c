// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMappingKey
// Entry Point: 0074c3e4
// Size: 24 bytes
// Signature: undefined __cdecl buildMappingKey(ContactReport * param_1)


/* CollisionEffectManager::buildMappingKey(CollisionEffectManager::ContactReport const&) */

undefined  [16] CollisionEffectManager::buildMappingKey(ContactReport *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  
  uVar2 = *(ulong *)param_1;
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}


