// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VertexFormat
// Entry Point: 008d2914
// Size: 32 bytes
// Signature: undefined __thiscall VertexFormat(VertexFormat * this, ushort param_1)


/* FillPlaneGeometry::VertexFormat::VertexFormat(unsigned short) */

void __thiscall FillPlaneGeometry::VertexFormat::VertexFormat(VertexFormat *this,ushort param_1)

{
  *(undefined8 *)this = 0;
  *(ushort *)(this + 0x14) = param_1;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x16) = 0xffffffffffffffff;
  return;
}


