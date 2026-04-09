// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlayerCenteredCollisionSystem
// Entry Point: 0098ac44
// Size: 336 bytes
// Signature: undefined __thiscall PlayerCenteredCollisionSystem(PlayerCenteredCollisionSystem * this, uint param_1, uint param_2, float param_3, uint param_4, uint param_5, uint param_6, uint param_7)


/* PlayerCenteredCollisionSystem::PlayerCenteredCollisionSystem(unsigned int, unsigned int, float,
   unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
PlayerCenteredCollisionSystem::PlayerCenteredCollisionSystem
          (PlayerCenteredCollisionSystem *this,uint param_1,uint param_2,float param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  PlayerCenteredCollisionHeightmap *this_00;
  
  *(undefined ***)this = &PTR__PlayerCenteredCollisionSystem_00fe0b30;
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x28));
                    /* try { // try from 0098aca4 to 0098accf has its CatchHandler @ 0098adec */
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x48));
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x68));
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0x88));
  BoundingSphere::BoundingSphere((BoundingSphere *)(this + 0xa8));
                    /* try { // try from 0098acd0 to 0098acd7 has its CatchHandler @ 0098adb8 */
  this_00 = (PlayerCenteredCollisionHeightmap *)operator_new(0x38);
                    /* try { // try from 0098acdc to 0098acf3 has its CatchHandler @ 0098ada8 */
  PlayerCenteredCollisionHeightmap::PlayerCenteredCollisionHeightmap
            (this_00,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)(this + 0x20) = 0;
  if (4 < param_7) {
    param_7 = 5;
  }
  *(undefined8 *)(this + 8) = 0;
  *(PlayerCenteredCollisionHeightmap **)(this + 0x10) = this_00;
  *(uint *)(this + 0x18) = param_7;
  *(uint *)(this + 0x1c) = param_6;
  if (((PlayerCenteredSystem::Manager::getInstance()::mgr & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&PlayerCenteredSystem::Manager::getInstance()::mgr), iVar1 != 0))
  {
                    /* try { // try from 0098ad5c to 0098ad67 has its CatchHandler @ 0098ad94 */
    PlayerCenteredSystem::Manager::Manager
              ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr);
    __cxa_atexit(PlayerCenteredSystem::Manager::~Manager,
                 PlayerCenteredSystem::Manager::getInstance()::mgr,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&PlayerCenteredSystem::Manager::getInstance()::mgr);
  }
                    /* try { // try from 0098ad1c to 0098ad2b has its CatchHandler @ 0098adb8 */
  PlayerCenteredSystem::Manager::add
            ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr,
             (PlayerCenteredSystem *)this);
  return;
}


