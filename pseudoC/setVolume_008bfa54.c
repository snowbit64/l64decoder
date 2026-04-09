// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 008bfa54
// Size: 8 bytes
// Signature: undefined __thiscall setVolume(LocalFileListChannel * this, float param_1)


/* LocalFileListChannel::setVolume(float) */

void __thiscall LocalFileListChannel::setVolume(LocalFileListChannel *this,float param_1)

{
  StreamedSample::setVolume(*(StreamedSample **)(this + 0x28),param_1);
  return;
}


