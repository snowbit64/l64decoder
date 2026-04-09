// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildAt
// Entry Point: 00a5a9d4
// Size: 84 bytes
// Signature: undefined __thiscall removeChildAt(RawTransformGroup * this, uint param_1, bool param_2)


/* RawTransformGroup::removeChildAt(unsigned int, bool) */

void __thiscall RawTransformGroup::removeChildAt(RawTransformGroup *this,uint param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(this + 0x28) + (ulong)param_1 * 8);
  ScenegraphNode::removeChildAt((uint)this,SUB41(param_1,0));
  if ((!param_2) && ((*(byte *)(plVar1 + 2) >> 4 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00a5aa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,0x5f,0);
    return;
  }
  return;
}


