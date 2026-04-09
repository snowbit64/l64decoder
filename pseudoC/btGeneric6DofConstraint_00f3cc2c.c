// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btGeneric6DofConstraint
// Entry Point: 00f3cc2c
// Size: 48 bytes
// Signature: undefined __thiscall ~btGeneric6DofConstraint(btGeneric6DofConstraint * this)


/* btGeneric6DofConstraint::~btGeneric6DofConstraint() */

void __thiscall btGeneric6DofConstraint::~btGeneric6DofConstraint(btGeneric6DofConstraint *this)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = PTR_FUN_01048e40;
  gNumAlignedFree = gNumAlignedFree + 1;
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0e30;
                    /* WARNING: Could not recover jumptable at 0x00f3cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


