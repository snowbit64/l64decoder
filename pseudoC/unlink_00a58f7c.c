// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlink
// Entry Point: 00a58f7c
// Size: 84 bytes
// Signature: undefined __thiscall unlink(Node * this, bool param_1)


/* Node::unlink(bool) */

void __thiscall Node::unlink(Node *this,bool param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != (long *)0x0) {
    uVar3 = plVar1[6] - plVar1[5];
    if ((int)(uVar3 >> 3) != 0) {
      uVar2 = 0;
      do {
        if (*(Node **)(plVar1[5] + uVar2 * 8) == this) {
                    /* WARNING: Could not recover jumptable at 0x00a58fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x10))(plVar1,uVar2 & 0xffffffff,param_1);
          return;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar3 >> 3 & 0xffffffff) != uVar2);
    }
  }
  return;
}


