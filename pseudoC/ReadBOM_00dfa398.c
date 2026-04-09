// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReadBOM
// Entry Point: 00dfa398
// Size: 56 bytes
// Signature: undefined __cdecl ReadBOM(char * param_1, bool * param_2)


/* tinyxml2::XMLUtil::ReadBOM(char const*, bool*) */

char * tinyxml2::XMLUtil::ReadBOM(char *param_1,bool *param_2)

{
  *param_2 = false;
  if (((*param_1 == -0x11) && (param_1[1] == -0x45)) && (param_1[2] == -0x41)) {
    param_1 = param_1 + 3;
    *param_2 = true;
  }
  return param_1;
}


