// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closeVertex
// Entry Point: 00b64efc
// Size: 40 bytes
// Signature: undefined __thiscall closeVertex(Brep * this, Vector3 * param_1)


/* Brep::closeVertex(Vector3 const&) const */

undefined8 __thiscall Brep::closeVertex(Brep *this,Vector3 *param_1)

{
  undefined8 uVar1;
  
  if (this[0x2fb5] != (Brep)0x0) {
    uVar1 = BrepSpatialHash::retrieve((BrepSpatialHash *)(this + 0x10),this,param_1);
    return uVar1;
  }
  return 0xffff;
}


