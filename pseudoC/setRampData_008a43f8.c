// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRampData
// Entry Point: 008a43f8
// Size: 36 bytes
// Signature: undefined __thiscall setRampData(GranularSynthesisRuntimeSettings * this, vector * param_1, RampType param_2)


/* GranularSynthesisRuntimeSettings::setRampData(std::__ndk1::vector<short,
   std::__ndk1::allocator<short> > const&, GranularSynthesisRuntimeSettings::RampType) */

undefined8 * __thiscall
GranularSynthesisRuntimeSettings::setRampData
          (GranularSynthesisRuntimeSettings *this,vector *param_1,RampType param_2)

{
  type tVar1;
  undefined8 *this_00;
  
  this_00 = (undefined8 *)(this + 0x18);
  *(RampType *)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x20) = *this_00;
  if (this_00 != (undefined8 *)param_1) {
    tVar1 = std::__ndk1::vector<short,std::__ndk1::allocator<short>>::assign<short*>
                      ((vector<short,std::__ndk1::allocator<short>> *)this_00,*(short **)param_1,
                       *(short **)(param_1 + 8));
    return (undefined8 *)(ulong)tVar1;
  }
  return this_00;
}


