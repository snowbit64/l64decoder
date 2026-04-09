// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackStart
// Entry Point: 008ba6e4
// Size: 208 bytes
// Signature: undefined notifyPlaybackStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopSoundGenerator::notifyPlaybackStart() */

void SteadyLoopSoundGenerator::notifyPlaybackStart(void)

{
  int *piVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = ((*(long **)(in_x0 + 8))[1] - **(long **)(in_x0 + 8) >> 3) * 0x38e38e39;
  if ((int)uVar3 != 0) {
    lVar4 = 0;
    lVar5 = 0x40;
    do {
      if (((*(long *)(*(long *)(in_x0 + 0x50) + lVar4) == 0) &&
          (piVar1 = (int *)(**(long **)(in_x0 + 8) + lVar5), *piVar1 != 0 && piVar1[-2] == 1)) &&
         (lVar2 = stb_vorbis_open_memory(*(undefined8 *)(piVar1 + -6),piVar1[-1],0,0), lVar2 != 0))
      {
        stb_vorbis_seek_start();
        *(long *)(*(long *)(in_x0 + 0x50) + lVar4) = lVar2;
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + 0x48;
    } while ((uVar3 & 0xffffffff) * 8 - lVar4 != 0);
  }
  return;
}


