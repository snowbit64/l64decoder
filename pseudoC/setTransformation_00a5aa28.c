// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTransformation
// Entry Point: 00a5aa28
// Size: 64 bytes
// Signature: undefined __thiscall setTransformation(RawTransformGroup * this, Matrix4x4 * param_1, uint param_2)


/* RawTransformGroup::setTransformation(Matrix4x4 const&, unsigned int) */

void __thiscall
RawTransformGroup::setTransformation(RawTransformGroup *this,Matrix4x4 *param_1,uint param_2)

{
  (**(code **)(*(long *)this + 0x30))(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a5aa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,1,param_2);
  return;
}


