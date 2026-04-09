// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: string2floatArray3
// Entry Point: 009418c4
// Size: 52 bytes
// Signature: undefined __cdecl string2floatArray3(char * param_1, float * param_2)


/* I3DShapePoolFactory::string2floatArray3(char const*, float*) */

void I3DShapePoolFactory::string2floatArray3(char *param_1,float *param_2)

{
  long lVar1;
  
  lVar1 = StringUtil::atof(param_1,param_2);
  lVar1 = StringUtil::atof((char *)(lVar1 + 1),param_2 + 1);
  StringUtil::atof((char *)(lVar1 + 1),param_2 + 2);
  return;
}


