// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LightSource
// Entry Point: 00a54214
// Size: 36 bytes
// Signature: undefined __thiscall ~LightSource(LightSource * this)


/* LightSource::~LightSource() */

void __thiscall LightSource::~LightSource(LightSource *this)

{
  ~LightSource(this);
  operator_delete(this);
  return;
}


