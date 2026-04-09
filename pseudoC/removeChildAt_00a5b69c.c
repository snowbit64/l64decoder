// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildAt
// Entry Point: 00a5b69c
// Size: 76 bytes
// Signature: undefined __cdecl removeChildAt(uint param_1, bool param_2)


/* ScenegraphNode::removeChildAt(unsigned int, bool) */

void ScenegraphNode::removeChildAt(uint param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(ulong)param_1;
  lVar2 = *(long *)(plVar1[5] + (ulong)param_2 * 8);
  Node::removeChildAt(param_1,param_2);
  if ((*(byte *)(lVar2 + 0x40) >> 4 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a5b6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,1);
  return;
}


