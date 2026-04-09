// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteAttribute
// Entry Point: 00dfe3ac
// Size: 68 bytes
// Signature: undefined __cdecl DeleteAttribute(XMLAttribute * param_1)


/* tinyxml2::XMLElement::DeleteAttribute(tinyxml2::XMLAttribute*) */

void tinyxml2::XMLElement::DeleteAttribute(XMLAttribute *param_1)

{
  long *plVar1;
  
  if (param_1 != (XMLAttribute *)0x0) {
    plVar1 = *(long **)(param_1 + 0x48);
    (***(code ***)param_1)();
                    /* WARNING: Could not recover jumptable at 0x00dfe3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return;
  }
  return;
}


