// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSetIsActive
// Entry Point: 00996378
// Size: 36 bytes
// Signature: undefined __thiscall onSetIsActive(Bt2PhysicsStats * this, bool param_1)


/* Bt2PhysicsStats::onSetIsActive(bool) */

void __thiscall Bt2PhysicsStats::onSetIsActive(Bt2PhysicsStats *this,bool param_1)

{
  Bt2PhysicsContextManager *this_00;
  
  this_00 = (Bt2PhysicsContextManager *)Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::enableCollisionTimings(this_00,param_1);
  return;
}


