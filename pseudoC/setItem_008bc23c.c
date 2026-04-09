// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setItem
// Entry Point: 008bc23c
// Size: 44 bytes
// Signature: undefined __cdecl setItem(uint param_1)


/* SoundPlayer::setItem(unsigned int) */

void SoundPlayer::setItem(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if ((*(char *)(uVar1 + 0xd9) != '\0') && (*(long *)(uVar1 + 0xe8) != *(long *)(uVar1 + 0xf0))) {
                    /* WARNING: Could not recover jumptable at 0x008bc260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(uVar1 + 0xe8) + (ulong)*(uint *)(uVar1 + 0x100) * 8) + 0x48))
              ();
    return;
  }
  return;
}


