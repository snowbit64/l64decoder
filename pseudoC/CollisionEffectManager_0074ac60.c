// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CollisionEffectManager
// Entry Point: 0074ac60
// Size: 92 bytes
// Signature: undefined __thiscall CollisionEffectManager(CollisionEffectManager * this)


/* CollisionEffectManager::CollisionEffectManager() */

void __thiscall CollisionEffectManager::CollisionEffectManager(CollisionEffectManager *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(ulong *)(this + 0x30) =
       ((ulong)this ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + -0x2152ecc841109800;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  return;
}


