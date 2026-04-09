// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: predictUnconstraintMotion
// Entry Point: 00bb2a60
// Size: 80 bytes
// Signature: undefined __thiscall predictUnconstraintMotion(Bt2World * this, float param_1)


/* Bt2World::predictUnconstraintMotion(float) */

void __thiscall Bt2World::predictUnconstraintMotion(Bt2World *this,float param_1)

{
  btDiscreteDynamicsWorld::predictUnconstraintMotion((btDiscreteDynamicsWorld *)this,param_1);
  CProfileManager::Start_Profile("predictUnconstraintMotionSoftBody");
                    /* try { // try from 00bb2a94 to 00bb2a9b has its CatchHandler @ 00bb2ab4 */
  (**(code **)(**(long **)(this + 0x2a0) + 0x30))(param_1);
                    /* try { // try from 00bb2a9c to 00bb2a9f has its CatchHandler @ 00bb2ab0 */
  CProfileManager::Stop_Profile();
  return;
}


