// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Geometry
// Entry Point: 008c4e4c
// Size: 112 bytes
// Signature: undefined __thiscall Geometry(Geometry * this, char * param_1, bool param_2)


/* Geometry::Geometry(char const*, bool) */

void __thiscall Geometry::Geometry(Geometry *this,char *param_1,bool param_2)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
                    /* try { // try from 008c4e74 to 008c4e77 has its CatchHandler @ 008c4ebc */
  Entity::Entity((Entity *)(this + 0x10),param_1,param_2);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined ***)this = &PTR__Geometry_00fdde30;
  *(undefined ***)(this + 0x10) = &PTR__Geometry_00fdde80;
  *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) | 0x200000;
  return;
}


