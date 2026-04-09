// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasGeometryShapeMaterials
// Entry Point: 008fd658
// Size: 36 bytes
// Signature: undefined __cdecl hasGeometryShapeMaterials(Geometry * param_1)


/* I3DLoadUtil::hasGeometryShapeMaterials(Geometry*) */

undefined8 I3DLoadUtil::hasGeometryShapeMaterials(Geometry *param_1)

{
  if ((param_1 != (Geometry *)0x0) && (((byte)param_1[0x30] & 0x50) != 0)) {
    return 0;
  }
  return 1;
}


