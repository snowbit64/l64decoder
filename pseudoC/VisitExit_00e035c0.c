// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisitExit
// Entry Point: 00e035c0
// Size: 64 bytes
// Signature: undefined __cdecl VisitExit(XMLElement * param_1)


/* tinyxml2::XMLPrinter::VisitExit(tinyxml2::XMLElement const&) */

undefined8 tinyxml2::XMLPrinter::VisitExit(XMLElement *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x58))();
  (**(code **)(*(long *)param_1 + 0x50))(param_1,uVar1 & 1);
  return 1;
}


