// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullShaderObject
// Entry Point: 00aab3bc
// Size: 4 bytes
// Signature: undefined __thiscall ~NullShaderObject(NullShaderObject * this)


/* NullShaderObject::~NullShaderObject() */

void __thiscall NullShaderObject::~NullShaderObject(NullShaderObject *this)

{
  operator_delete(this);
  return;
}


