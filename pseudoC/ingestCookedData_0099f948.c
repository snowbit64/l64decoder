// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ingestCookedData
// Entry Point: 0099f948
// Size: 8 bytes
// Signature: undefined __thiscall ingestCookedData(Bt2ScenegraphPhysicsContext * this, Bt2PhysicsCookedDataSet * param_1, Geometry * param_2)


/* Bt2ScenegraphPhysicsContext::ingestCookedData(Bt2PhysicsCookedDataSet*, Geometry*) */

void __thiscall
Bt2ScenegraphPhysicsContext::ingestCookedData
          (Bt2ScenegraphPhysicsContext *this,Bt2PhysicsCookedDataSet *param_1,Geometry *param_2)

{
  Bt2PhysicsColShapeCache::ingestCookedData
            ((Bt2PhysicsColShapeCache *)(this + 0x90),param_1,param_2);
  return;
}


