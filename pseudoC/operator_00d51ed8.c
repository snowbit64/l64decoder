// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00d51ed8
// Size: 108 bytes
// Signature: undefined __thiscall operator=(ICHull * this, ICHull * param_1)


/* HACD::ICHull::TEMPNAMEPLACEHOLDERVALUE(HACD::ICHull&) */

ICHull * __thiscall HACD::ICHull::operator=(ICHull *this,ICHull *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != this) {
    TMMesh::Copy((TMMesh *)(this + 8),(TMMesh *)(param_1 + 8));
    std::__ndk1::
    vector<HACD::CircularListElement<HACD::TMMEdge>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMEdge>*>>
    ::assign<HACD::CircularListElement<HACD::TMMEdge>**>
              ((vector<HACD::CircularListElement<HACD::TMMEdge>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMEdge>*>>
                *)(this + 0x98),*(CircularListElement ***)(param_1 + 0x98),
               *(CircularListElement ***)(param_1 + 0xa0));
    std::__ndk1::
    vector<HACD::CircularListElement<HACD::TMMEdge>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMEdge>*>>
    ::assign<HACD::CircularListElement<HACD::TMMEdge>**>
              ((vector<HACD::CircularListElement<HACD::TMMEdge>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMEdge>*>>
                *)(this + 0xb0),*(CircularListElement ***)(param_1 + 0xb0),
               *(CircularListElement ***)(param_1 + 0xb8));
    std::__ndk1::
    vector<HACD::CircularListElement<HACD::TMMTriangle>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMTriangle>*>>
    ::assign<HACD::CircularListElement<HACD::TMMTriangle>**>
              ((vector<HACD::CircularListElement<HACD::TMMTriangle>*,std::__ndk1::allocator<HACD::CircularListElement<HACD::TMMTriangle>*>>
                *)(this + 200),*(CircularListElement ***)(param_1 + 200),
               *(CircularListElement ***)(param_1 + 0xd0));
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    this[0x100] = param_1[0x100];
    *(undefined8 *)(this + 0x108) = uVar1;
  }
  return this;
}


