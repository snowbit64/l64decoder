// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Geometry
// Entry Point: 008c4f64
// Size: 160 bytes
// Signature: undefined __thiscall ~Geometry(Geometry * this)


/* non-virtual thunk to Geometry::~Geometry() */

void __thiscall Geometry::~Geometry(Geometry *this)

{
  Bt2PhysicsCookedDataSet *this_00;
  
  *(undefined ***)(this + -0x10) = &PTR__Geometry_00fdde30;
  *(undefined ***)this = &PTR__Geometry_00fdde80;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  this_00 = *(Bt2PhysicsCookedDataSet **)(this + 0x40);
  *(undefined8 *)(this + 0x38) = 0;
  if (this_00 != (Bt2PhysicsCookedDataSet *)0x0) {
    Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet(this_00);
    operator_delete(this_00);
  }
  Entity::~Entity((Entity *)this);
  *(undefined ***)(this + -0x10) = &PTR__AtomicRefCounted_00fda810;
  return;
}


