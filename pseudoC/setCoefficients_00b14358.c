// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCoefficients
// Entry Point: 00b14358
// Size: 20 bytes
// Signature: undefined __thiscall setCoefficients(IIRFilter * this, IIRCoefficients * param_1)


/* IIRFilter::setCoefficients(IIRFilter::IIRCoefficients const&) */

void __thiscall IIRFilter::setCoefficients(IIRFilter *this,IIRCoefficients *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


