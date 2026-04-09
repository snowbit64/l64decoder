// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioStreamedSource
// Entry Point: 00b0aad4
// Size: 72 bytes
// Signature: undefined __thiscall ~NullAudioStreamedSource(NullAudioStreamedSource * this)


/* NullAudioStreamedSource::~NullAudioStreamedSource() */

void __thiscall NullAudioStreamedSource::~NullAudioStreamedSource(NullAudioStreamedSource *this)

{
  *(undefined ***)this = &PTR__NullAudioStreamedSource_00fe7788;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  *(undefined8 *)(this + 0x38) = 0;
  NullAudioSource::~NullAudioSource((NullAudioSource *)this);
  operator_delete(this);
  return;
}


