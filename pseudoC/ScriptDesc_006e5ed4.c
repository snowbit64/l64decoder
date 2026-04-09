// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ScriptDesc
// Entry Point: 006e5ed4
// Size: 64 bytes
// Signature: undefined __thiscall ~ScriptDesc(ScriptDesc * this)


/* Script::ScriptDesc::~ScriptDesc() */

void __thiscall Script::ScriptDesc::~ScriptDesc(ScriptDesc *this)

{
  *(undefined ***)this = &PTR__ScriptDesc_00fd93f0;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


