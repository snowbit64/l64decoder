// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accept
// Entry Point: 00dfcc24
// Size: 24 bytes
// Signature: undefined __thiscall Accept(XMLText * this, XMLVisitor * param_1)


/* tinyxml2::XMLText::Accept(tinyxml2::XMLVisitor*) const */

void __thiscall tinyxml2::XMLText::Accept(XMLText *this,XMLVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00dfcc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x38))(param_1,this);
  return;
}


