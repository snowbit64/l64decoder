// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convert8BitTo16BitBuffer
// Entry Point: 00b09be8
// Size: 76 bytes
// Signature: undefined __cdecl convert8BitTo16BitBuffer(AudioBufferDesc * param_1)


/* AudioUtil::convert8BitTo16BitBuffer(AudioBufferDesc&) */

void AudioUtil::convert8BitTo16BitBuffer(AudioBufferDesc *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x40);
    puVar4 = (undefined *)((ulong)(uVar2 << 1) + lVar5 + -1);
    do {
      *puVar4 = 0;
      puVar1 = (undefined *)(lVar5 + -1 + uVar3);
      uVar3 = uVar3 - 1;
      puVar4[-1] = *puVar1;
      puVar4 = puVar4 + -2;
    } while ((int)uVar3 != 0);
    uVar2 = *(int *)(param_1 + 0x48) << 1;
  }
  *(uint *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)param_1 = 2;
  return;
}


