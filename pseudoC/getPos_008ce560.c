// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPos
// Entry Point: 008ce560
// Size: 116 bytes
// Signature: undefined __thiscall getPos(VertexFormat * this, Polyline * * param_1)


/* FillPlaneGeometry::VertexFormat::getPos(FillPlaneGeometry::Polyline const* const*) const */

float __thiscall FillPlaneGeometry::VertexFormat::getPos(VertexFormat *this,Polyline **param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 8) * *(float *)param_1[*(ushort *)(this + 0x14)];
  if ((ulong)*(ushort *)(this + 0x16) != 0xffff) {
    fVar1 = (float)NEON_fmadd(*(undefined4 *)param_1[*(ushort *)(this + 0x16)],
                              *(undefined4 *)(this + 0xc),fVar1);
    if ((ulong)*(ushort *)(this + 0x18) != 0xffff) {
      fVar1 = (float)NEON_fmadd(*(undefined4 *)param_1[*(ushort *)(this + 0x18)],
                                *(undefined4 *)(this + 0x10),fVar1);
    }
  }
  return fVar1;
}


