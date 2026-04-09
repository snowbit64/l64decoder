// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DynamicGeometry
// Entry Point: 008d9bbc
// Size: 76 bytes
// Signature: undefined __thiscall DynamicGeometry(DynamicGeometry * this, char * param_1, bool param_2)


/* DynamicGeometry::DynamicGeometry(char const*, bool) */

void __thiscall DynamicGeometry::DynamicGeometry(DynamicGeometry *this,char *param_1,bool param_2)

{
  Geometry::Geometry((Geometry *)this,param_1,param_2);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__DynamicGeometry_00fde300;
  *(undefined ***)(this + 0x10) = &PTR__DynamicGeometry_00fde350;
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
  return;
}


