// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accept
// Entry Point: 00dfd008
// Size: 24 bytes
// Signature: undefined __thiscall Accept(XMLComment * this, XMLVisitor * param_1)


/* tinyxml2::XMLComment::Accept(tinyxml2::XMLVisitor*) const */

void __thiscall tinyxml2::XMLComment::Accept(XMLComment *this,XMLVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00dfd01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x40))(param_1,this);
  return;
}


