// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionGeometry
// Entry Point: 009270e4
// Size: 216 bytes
// Signature: undefined __thiscall ~DestructionGeometry(DestructionGeometry * this)


/* DestructionGeometry::~DestructionGeometry() */

void __thiscall DestructionGeometry::~DestructionGeometry(DestructionGeometry *this)

{
  int iVar1;
  long *plVar2;
  
  *(undefined8 *)(this + 0x48) = 0;
  plVar2 = *(long **)(this + 0x70);
  *(undefined ***)this = &PTR__DestructionGeometry_00fdff28;
  *(undefined ***)(this + 0x10) = &PTR__DestructionGeometry_00fdff78;
  iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1);
  if (iVar1 < 2) {
                    /* try { // try from 00927130 to 00927137 has its CatchHandler @ 009271bc */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
  }
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa8));
  }
  free(*(void **)(this + 0xa0));
  DynamicGeometry::~DynamicGeometry((DynamicGeometry *)this);
  return;
}


