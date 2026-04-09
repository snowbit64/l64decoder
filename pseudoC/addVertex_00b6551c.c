// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertex
// Entry Point: 00b6551c
// Size: 156 bytes
// Signature: undefined __thiscall addVertex(Brep * this, Vector3 * param_1)


/* Brep::addVertex(Vector3 const&) */

ulong __thiscall Brep::addVertex(Brep *this,Vector3 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (this[0x2fb5] != (Brep)0x0) {
    uVar1 = BrepSpatialHash::retrieveExact((BrepSpatialHash *)(this + 0x10),this,param_1);
    uVar2 = uVar1 & 0xffffffff;
    if ((~(uint)uVar1 & 0xffff) != 0) goto LAB_00b655a4;
  }
  uVar2 = (ulong)(*(long *)(this + 0x2ef8) - *(long *)(this + 0x2ef0)) >> 4;
  std::__ndk1::vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>>::
  emplace_back<Vector3_const&,unsigned_short_const&>
            ((vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> *)(this + 0x2ef0),param_1,
             &NOREF_CONE);
  if (this[0x2fb5] != (Brep)0x0) {
    BrepSpatialHash::insert((BrepSpatialHash *)(this + 0x10),this,(ushort)uVar2);
  }
LAB_00b655a4:
  return uVar2 & 0xffffffff;
}


