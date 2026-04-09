// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VertexBufferGeometry
// Entry Point: 008c8c00
// Size: 96 bytes
// Signature: undefined __thiscall VertexBufferGeometry(VertexBufferGeometry * this, char * param_1, bool param_2)


/* VertexBufferGeometry::VertexBufferGeometry(char const*, bool) */

void __thiscall
VertexBufferGeometry::VertexBufferGeometry(VertexBufferGeometry *this,char *param_1,bool param_2)

{
  Geometry::Geometry((Geometry *)this,param_1,param_2);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)this = &PTR__VertexBufferGeometry_00fddfb8;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined ***)(this + 0x10) = &PTR__VertexBufferGeometry_00fde008;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  return;
}


