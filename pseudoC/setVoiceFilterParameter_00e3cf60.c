// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVoiceFilterParameter
// Entry Point: 00e3cf60
// Size: 60 bytes
// Signature: undefined __cdecl setVoiceFilterParameter(uint param_1, uint param_2, uint param_3, float param_4)


/* SoLoud::Soloud::setVoiceFilterParameter(unsigned int, unsigned int, unsigned int, float) */

void SoLoud::Soloud::setVoiceFilterParameter(uint param_1,uint param_2,uint param_3,float param_4)

{
  long *plVar1;
  undefined4 in_w3;
  long lVar2;
  
  lVar2 = *(long *)((ulong)param_1 + (ulong)param_2 * 8 + 0xa0);
  *(undefined *)((ulong)param_1 + 0x224f0) = 1;
  if ((lVar2 != 0) &&
     (plVar1 = *(long **)(lVar2 + (ulong)param_3 * 8 + 0x188), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e3cf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,in_w3);
    return;
  }
  return;
}


