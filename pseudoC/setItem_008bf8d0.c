// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setItem
// Entry Point: 008bf8d0
// Size: 120 bytes
// Signature: undefined __thiscall setItem(LocalFileListChannel * this, uint param_1)


/* LocalFileListChannel::setItem(unsigned int) */

void __thiscall LocalFileListChannel::setItem(LocalFileListChannel *this,uint param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(this + 0x68) != param_1) {
    uVar1 = (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3) * -0x55555555 - 1;
    if (param_1 <= uVar1) {
      uVar1 = param_1;
    }
    *(uint *)(this + 0x68) = uVar1;
    uVar2 = StreamedSample::isPlaying();
    if ((uVar2 & 1) != 0) {
      this[0x20] = (LocalFileListChannel)0x0;
      StreamedSample::stop();
      start();
      return;
    }
  }
  return;
}


