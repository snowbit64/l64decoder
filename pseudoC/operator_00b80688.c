// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 00b80688
// Size: 112 bytes
// Signature: undefined __thiscall operator<(Triangle * this, Triangle * param_1)


/* IndexedTriangleSetBuilder::Triangle::TEMPNAMEPLACEHOLDERVALUE(IndexedTriangleSetBuilder::Triangle
   const&) const */

bool __thiscall IndexedTriangleSetBuilder::Triangle::operator<(Triangle *this,Triangle *param_1)

{
  if (*(uint *)(this + 0xc) < *(uint *)(param_1 + 0xc)) {
    return true;
  }
  if (*(uint *)(this + 0xc) <= *(uint *)(param_1 + 0xc)) {
    if (*(uint *)this < *(uint *)param_1) {
      return true;
    }
    if (*(uint *)this <= *(uint *)param_1) {
      if (*(uint *)(this + 4) < *(uint *)(param_1 + 4)) {
        return true;
      }
      if (*(uint *)(this + 4) <= *(uint *)(param_1 + 4)) {
        return *(uint *)(this + 8) < *(uint *)(param_1 + 8);
      }
    }
  }
  return false;
}


