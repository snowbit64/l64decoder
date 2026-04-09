// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetOffsets
// Entry Point: 008bb160
// Size: 104 bytes
// Signature: undefined resetOffsets(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopSoundGenerator::resetOffsets() */

void SteadyLoopSoundGenerator::resetOffsets(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(in_x0 + 0x50);
  lVar1 = *(long *)(in_x0 + 0x58);
  *(undefined8 *)(in_x0 + 0x1c) = 0;
  *(undefined8 *)(in_x0 + 0x3c) = 0;
  if ((int)((ulong)(lVar1 - lVar2) >> 3) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(lVar2 + uVar3 * 8) != 0) {
        stb_vorbis_seek_start();
        lVar2 = *(long *)(in_x0 + 0x50);
        lVar1 = *(long *)(in_x0 + 0x58);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < ((ulong)(lVar1 - lVar2) >> 3 & 0xffffffff));
  }
  return;
}


