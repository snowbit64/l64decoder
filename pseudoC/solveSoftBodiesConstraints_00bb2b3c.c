// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSoftBodiesConstraints
// Entry Point: 00bb2b3c
// Size: 96 bytes
// Signature: undefined __thiscall solveSoftBodiesConstraints(Bt2World * this, float param_1)


/* Bt2World::solveSoftBodiesConstraints(float) */

void __thiscall Bt2World::solveSoftBodiesConstraints(Bt2World *this,float param_1)

{
  CProfileManager::Start_Profile("solveSoftConstraints");
  if (*(int *)(this + 0x20c) != 0) {
                    /* try { // try from 00bb2b6c to 00bb2b87 has its CatchHandler @ 00bb2ba0 */
    btSoftBody::solveClusters((btAlignedObjectArray *)(this + 0x208));
  }
  (**(code **)(**(long **)(this + 0x2a0) + 0x38))
            (*(float *)(*(long **)(this + 0x2a0) + 2) * param_1);
                    /* try { // try from 00bb2b88 to 00bb2b8b has its CatchHandler @ 00bb2b9c */
  CProfileManager::Stop_Profile();
  return;
}


