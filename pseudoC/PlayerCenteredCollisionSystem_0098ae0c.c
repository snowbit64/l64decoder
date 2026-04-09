// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PlayerCenteredCollisionSystem
// Entry Point: 0098ae0c
// Size: 220 bytes
// Signature: undefined __thiscall ~PlayerCenteredCollisionSystem(PlayerCenteredCollisionSystem * this)


/* PlayerCenteredCollisionSystem::~PlayerCenteredCollisionSystem() */

void __thiscall
PlayerCenteredCollisionSystem::~PlayerCenteredCollisionSystem(PlayerCenteredCollisionSystem *this)

{
  int iVar1;
  PlayerCenteredCollisionHeightmap *this_00;
  
  *(undefined ***)this = &PTR__PlayerCenteredCollisionSystem_00fe0b30;
  if (((PlayerCenteredSystem::Manager::getInstance()::mgr & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&PlayerCenteredSystem::Manager::getInstance()::mgr), iVar1 != 0))
  {
                    /* try { // try from 0098aeb0 to 0098aebb has its CatchHandler @ 0098aee8 */
    PlayerCenteredSystem::Manager::Manager
              ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr);
    __cxa_atexit(PlayerCenteredSystem::Manager::~Manager,
                 PlayerCenteredSystem::Manager::getInstance()::mgr,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&PlayerCenteredSystem::Manager::getInstance()::mgr);
  }
                    /* try { // try from 0098ae40 to 0098ae4f has its CatchHandler @ 0098aefc */
  PlayerCenteredSystem::Manager::remove
            ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr,
             (PlayerCenteredSystem *)this);
  this_00 = *(PlayerCenteredCollisionHeightmap **)(this + 0x10);
  if (this_00 != (PlayerCenteredCollisionHeightmap *)0x0) {
    PlayerCenteredCollisionHeightmap::~PlayerCenteredCollisionHeightmap(this_00);
    operator_delete(this_00);
  }
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0xa8));
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x88));
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x68));
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x48));
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x28));
  return;
}


