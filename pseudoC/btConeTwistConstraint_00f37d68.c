// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btConeTwistConstraint
// Entry Point: 00f37d68
// Size: 48 bytes
// Signature: undefined __thiscall ~btConeTwistConstraint(btConeTwistConstraint * this)


/* btConeTwistConstraint::~btConeTwistConstraint() */

void __thiscall btConeTwistConstraint::~btConeTwistConstraint(btConeTwistConstraint *this)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = PTR_FUN_01048e40;
  gNumAlignedFree = gNumAlignedFree + 1;
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0e30;
                    /* WARNING: Could not recover jumptable at 0x00f37d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


