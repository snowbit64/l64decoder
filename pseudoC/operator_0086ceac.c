// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 0086ceac
// Size: 28 bytes
// Signature: undefined __thiscall operator=(ConditionalAnimationValue * this, ConditionalAnimationValue * param_1)


/* ConditionalAnimationValue::TEMPNAMEPLACEHOLDERVALUE(ConditionalAnimationValue const&) */

void __thiscall
ConditionalAnimationValue::operator=
          (ConditionalAnimationValue *this,ConditionalAnimationValue *param_1)

{
  if (param_1 != this) {
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  return;
}


