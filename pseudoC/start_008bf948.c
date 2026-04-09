// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: start
// Entry Point: 008bf948
// Size: 128 bytes
// Signature: undefined start(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalFileListChannel::start() */

void LocalFileListChannel::start(void)

{
  long in_x0;
  ulong uVar1;
  byte *pbVar2;
  char cVar3;
  
  *(undefined *)(in_x0 + 0x20) = 0;
  if (*(long *)(in_x0 + 0x10) != *(long *)(in_x0 + 8)) {
    StreamedSample::unload();
    pbVar2 = (byte *)(*(long *)(in_x0 + 8) + (ulong)*(uint *)(in_x0 + 0x68) * 0x18);
    cVar3 = (char)*(undefined8 *)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      cVar3 = (char)pbVar2 + '\x01';
    }
    uVar1 = StreamedSample::load(*(char **)(in_x0 + 0x28),(bool)cVar3);
    if ((uVar1 & 1) != 0) {
      StreamedSample::setGroup((uint)*(undefined8 *)(in_x0 + 0x28));
      StreamedSample::play(*(StreamedSample **)(in_x0 + 0x28),1);
    }
  }
  return;
}


