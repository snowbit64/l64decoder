// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInnerRange
// Entry Point: 00a4a1c0
// Size: 92 bytes
// Signature: undefined __thiscall setInnerRange(AudioSource * this, float param_1)


/* AudioSource::setInnerRange(float) */

void __thiscall AudioSource::setInnerRange(AudioSource *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)Sample::getMinDistance();
  if (fVar1 != param_1) {
    fVar1 = (float)Sample::getMaxDistance();
    Sample::setMinMaxDistance((Sample *)(this + 0x158),param_1,fVar1);
    return;
  }
  return;
}


