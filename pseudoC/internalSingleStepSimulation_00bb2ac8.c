// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalSingleStepSimulation
// Entry Point: 00bb2ac8
// Size: 116 bytes
// Signature: undefined __thiscall internalSingleStepSimulation(Bt2World * this, float param_1)


/* Bt2World::internalSingleStepSimulation(float) */

void __thiscall Bt2World::internalSingleStepSimulation(Bt2World *this,float param_1)

{
  (**(code **)(**(long **)(this + 0x2a0) + 0x20))(*(long **)(this + 0x2a0),this + 0x208,0);
  (**(code **)(**(long **)(this + 0x2a0) + 0x18))();
  btDiscreteDynamicsWorld::internalSingleStepSimulation((btDiscreteDynamicsWorld *)this,param_1);
  solveSoftBodiesConstraints(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00bb2b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x2a0) + 0x40))();
  return;
}


