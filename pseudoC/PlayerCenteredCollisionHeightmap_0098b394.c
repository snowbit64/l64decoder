// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PlayerCenteredCollisionHeightmap
// Entry Point: 0098b394
// Size: 60 bytes
// Signature: undefined __thiscall ~PlayerCenteredCollisionHeightmap(PlayerCenteredCollisionHeightmap * this)


/* PlayerCenteredCollisionHeightmap::~PlayerCenteredCollisionHeightmap() */

void __thiscall
PlayerCenteredCollisionHeightmap::~PlayerCenteredCollisionHeightmap
          (PlayerCenteredCollisionHeightmap *this)

{
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    return;
  }
  return;
}


