// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplerTypeString
// Entry Point: 00c4fc5c
// Size: 44 bytes
// Signature: undefined __cdecl getSamplerTypeString(IR_SamplerType param_1, IR_LANGUAGE param_2)


/* IR_Type::getSamplerTypeString(IR_SamplerType, IR_LANGUAGE) */

char * IR_Type::getSamplerTypeString(IR_SamplerType param_1,IR_LANGUAGE param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "SamplerState";
  if (param_1 != 0) {
    pcVar1 = "SamplerComparisonState";
  }
  pcVar2 = "sampler";
  if (param_2 != 1) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


