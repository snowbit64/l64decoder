// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_pcmout
// Entry Point: 00e068fc
// Size: 100 bytes
// Signature: undefined vorbis_synthesis_pcmout(void)


int vorbis_synthesis_pcmout(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((-1 < (int)uVar1) && (iVar2 = *(int *)(param_1 + 0x24), (int)uVar1 < iVar2)) {
    if (param_2 != (undefined8 *)0x0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 8) + 4);
      if (0 < (int)uVar3) {
        lVar4 = 0;
        do {
          *(ulong *)(*(long *)(param_1 + 0x18) + lVar4) =
               *(long *)(*(long *)(param_1 + 0x10) + lVar4) + (ulong)uVar1 * 4;
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar3 * 8 - lVar4 != 0);
      }
      *param_2 = *(undefined8 *)(param_1 + 0x18);
    }
    return iVar2 - uVar1;
  }
  return 0;
}


