// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IIRFilter
// Entry Point: 00b14344
// Size: 20 bytes
// Signature: undefined __thiscall IIRFilter(IIRFilter * this, IIRCoefficients * param_1)


/* IIRFilter::IIRFilter(IIRFilter::IIRCoefficients const&) */

void __thiscall IIRFilter::IIRFilter(IIRFilter *this,IIRCoefficients *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


