// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisibility
// Entry Point: 00a5b718
// Size: 52 bytes
// Signature: undefined __thiscall setVisibility(ScenegraphNode * this, bool param_1)


/* ScenegraphNode::setVisibility(bool) */

void __thiscall ScenegraphNode::setVisibility(ScenegraphNode *this,bool param_1)

{
  if ((*(uint *)(this + 0x40) & 1) != (param_1 & 1)) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) & 0xfffffffe | param_1 & 1;
                    /* WARNING: Could not recover jumptable at 0x00a5b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,2,0);
    return;
  }
  return;
}


