// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellHeight
// Entry Point: 0098af88
// Size: 8 bytes
// Signature: undefined __thiscall getCellHeight(PlayerCenteredCollisionSystem * this, float param_1, float param_2, float * param_3)


/* PlayerCenteredCollisionSystem::getCellHeight(float, float, float&) */

void __thiscall
PlayerCenteredCollisionSystem::getCellHeight
          (PlayerCenteredCollisionSystem *this,float param_1,float param_2,float *param_3)

{
  PlayerCenteredCollisionHeightmap::getCellHeight
            (*(PlayerCenteredCollisionHeightmap **)(this + 0x10),param_1,param_2,param_3);
  return;
}


