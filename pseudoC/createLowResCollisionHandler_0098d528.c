// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createLowResCollisionHandler
// Entry Point: 0098d528
// Size: 156 bytes
// Signature: undefined __thiscall createLowResCollisionHandler(ScenegraphPhysicsContextManager * this, uint param_1, uint param_2, float param_3, uint param_4, uint param_5, uint param_6, uint param_7)


/* ScenegraphPhysicsContextManager::createLowResCollisionHandler(unsigned int, unsigned int, float,
   unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ScenegraphPhysicsContextManager::createLowResCollisionHandler
          (ScenegraphPhysicsContextManager *this,uint param_1,uint param_2,float param_3,
          uint param_4,uint param_5,uint param_6,uint param_7)

{
  PlayerCenteredCollisionSystem *this_00;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  this_00 = (PlayerCenteredCollisionSystem *)operator_new(200);
                    /* try { // try from 0098d584 to 0098d5a3 has its CatchHandler @ 0098d5c4 */
  PlayerCenteredCollisionSystem::PlayerCenteredCollisionSystem
            (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(PlayerCenteredCollisionSystem **)(this + 8) = this_00;
  return;
}


