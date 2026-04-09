// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTraceInfo
// Entry Point: 00b10408
// Size: 268 bytes
// Signature: undefined __cdecl getTraceInfo(char * param_1)


/* SoftAudioSource::getTraceInfo(char*) */

undefined8 SoftAudioSource::getTraceInfo(char *param_1)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (((*(uint *)(param_1 + 200) == 0) ||
      (iVar1 = SoLoud::Soloud::getVoiceFromHandle
                         (*(Soloud **)(param_1 + 0xb8),*(uint *)(param_1 + 200)), iVar1 == -1)) ||
     (*(long *)(*(long *)(param_1 + 0xb8) + (long)iVar1 * 8 + 0xa0) == 0)) {
    uVar3 = 0;
  }
  else {
    __s = (char *)(**(code **)(**(long **)(param_1 + 0xb0) + 0x40))();
    do {
      pcVar2 = strchr(__s,0x2f);
      __s = pcVar2 + 1;
    } while (pcVar2 != (char *)0x0);
    fVar4 = (float)SoLoud::Soloud::getVolume(*(Soloud **)(param_1 + 0xb8),*(uint *)(param_1 + 200));
    fVar5 = (float)SoLoud::Soloud::getRelativePlaySpeed
                             (*(Soloud **)(param_1 + 0xb8),*(uint *)(param_1 + 200));
    FUN_00b10360((double)fVar4,(double)fVar5);
    uVar3 = 1;
  }
  return uVar3;
}


