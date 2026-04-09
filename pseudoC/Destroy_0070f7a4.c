// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Destroy
// Entry Point: 0070f7a4
// Size: 200 bytes
// Signature: undefined Destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSoundSystem::Destroy() */

void AnimalSoundSystem::Destroy(void)

{
  long *in_x0;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = in_x0[7];
  if (lVar5 != in_x0[6]) {
    uVar6 = 0;
    do {
      AudioSource::stop();
      lVar5 = in_x0[6];
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar2 = (in_x0[7] - lVar5 >> 2) * 0x6db6db6db6db6db7;
    } while (uVar6 <= uVar2 && uVar2 - uVar6 != 0);
  }
  lVar4 = *in_x0;
  lVar3 = in_x0[1];
  in_x0[7] = lVar5;
  lVar5 = lVar3;
  if (lVar3 != lVar4) {
    uVar6 = 0;
    do {
      plVar1 = *(long **)(lVar4 + uVar6 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar4 = *in_x0;
        lVar3 = in_x0[1];
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar5 = lVar4;
    } while (uVar6 < (ulong)(lVar3 - lVar4 >> 3));
  }
  in_x0[1] = lVar5;
  return;
}


