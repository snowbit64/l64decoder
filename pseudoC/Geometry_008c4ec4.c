// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Geometry
// Entry Point: 008c4ec4
// Size: 160 bytes
// Signature: undefined __thiscall ~Geometry(Geometry * this)


/* Geometry::~Geometry() */

void __thiscall Geometry::~Geometry(Geometry *this)

{
  Bt2PhysicsCookedDataSet *this_00;
  
  *(undefined ***)this = &PTR__Geometry_00fdde30;
  *(undefined ***)(this + 0x10) = &PTR__Geometry_00fdde80;
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  this_00 = *(Bt2PhysicsCookedDataSet **)(this + 0x50);
  *(undefined8 *)(this + 0x48) = 0;
  if (this_00 != (Bt2PhysicsCookedDataSet *)0x0) {
    Bt2PhysicsCookedDataSet::~Bt2PhysicsCookedDataSet(this_00);
    operator_delete(this_00);
  }
  Entity::~Entity((Entity *)(this + 0x10));
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


