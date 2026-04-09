// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CastResult
// Entry Point: 00bb1c4c
// Size: 4 bytes
// Signature: undefined __thiscall ~CastResult(CastResult * this)


/* btConvexCast::CastResult::~CastResult() */

void __thiscall btConvexCast::CastResult::~CastResult(CastResult *this)

{
  operator_delete(this);
  return;
}


