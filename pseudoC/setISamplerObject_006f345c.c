// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setISamplerObject
// Entry Point: 006f345c
// Size: 8 bytes
// Signature: undefined __thiscall setISamplerObject(ImageOverlay * this, ISamplerObject * param_1)


/* ImageOverlay::setISamplerObject(ISamplerObject*) */

void __thiscall ImageOverlay::setISamplerObject(ImageOverlay *this,ISamplerObject *param_1)

{
  *(ISamplerObject **)(this + 0x88) = param_1;
  return;
}


