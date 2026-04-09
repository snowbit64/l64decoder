// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ErrorIDToName
// Entry Point: 00e019d8
// Size: 16 bytes
// Signature: undefined __cdecl ErrorIDToName(XMLError param_1)


/* tinyxml2::XMLDocument::ErrorIDToName(tinyxml2::XMLError) */

undefined8 tinyxml2::XMLDocument::ErrorIDToName(XMLError param_1)

{
  return *(undefined8 *)(_errorNames + (ulong)param_1 * 8);
}


