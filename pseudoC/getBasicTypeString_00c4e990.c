// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBasicTypeString
// Entry Point: 00c4e990
// Size: 96 bytes
// Signature: undefined __cdecl getBasicTypeString(GsTBasicType param_1, IR_LANGUAGE param_2)


/* IR_Type::getBasicTypeString(GsTBasicType, IR_LANGUAGE) */

char * IR_Type::getBasicTypeString(GsTBasicType param_1,IR_LANGUAGE param_2)

{
  if (param_2 == 0) {
    if (param_1 < 10) {
      return (&PTR_DAT_00fee6f0)[(int)param_1];
    }
  }
  else if (param_2 == 2) {
    if (param_1 < 10) {
      return (&PTR_DAT_00fee6a0)[(int)param_1];
    }
  }
  else if (param_1 < 10) {
    return (&PTR_DAT_00fee740)[(int)param_1];
  }
  return "unknown type";
}


