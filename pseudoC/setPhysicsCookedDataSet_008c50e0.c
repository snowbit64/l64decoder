// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsCookedDataSet
// Entry Point: 008c50e0
// Size: 68 bytes
// Signature: undefined __thiscall setPhysicsCookedDataSet(Geometry * this, Bt2PhysicsCookedDataSet * param_1)


/* Geometry::setPhysicsCookedDataSet(Bt2PhysicsCookedDataSet*) */

void __thiscall Geometry::setPhysicsCookedDataSet(Geometry *this,Bt2PhysicsCookedDataSet *param_1)

{
  Bt2PhysicsCookedDataSet *this_00;
  
  this_00 = *(Bt2PhysicsCookedDataSet **)(this + 0x50);
  if (this_00 != (Bt2PhysicsCookedDataSet *)0x0) {
    Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet(this_00);
    operator_delete(this_00);
  }
  *(Bt2PhysicsCookedDataSet **)(this + 0x50) = param_1;
  return;
}


