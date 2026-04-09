// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBoolSerialization
// Entry Point: 00dfa35c
// Size: 60 bytes
// Signature: undefined __cdecl SetBoolSerialization(char * param_1, char * param_2)


/* tinyxml2::XMLUtil::SetBoolSerialization(char const*, char const*) */

void tinyxml2::XMLUtil::SetBoolSerialization(char *param_1,char *param_2)

{
  writeBoolTrue = "true";
  if (param_1 != (char *)0x0) {
    writeBoolTrue = param_1;
  }
  writeBoolFalse = "false";
  if (param_2 != (char *)0x0) {
    writeBoolFalse = param_2;
  }
  return;
}


