// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralDensityPixelSource
// Entry Point: 00b959e0
// Size: 104 bytes
// Signature: undefined __thiscall ProceduralDensityPixelSource(ProceduralDensityPixelSource * this, char * param_1, uint param_2, uint param_3, uint param_4)


/* ProceduralDensityPixelSource::ProceduralDensityPixelSource(char const*, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
ProceduralDensityPixelSource::ProceduralDensityPixelSource
          (ProceduralDensityPixelSource *this,char *param_1,uint param_2,uint param_3,uint param_4)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__ProceduralDensityPixelSource_00fdb630;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 00b95a24 to 00b95a2b has its CatchHandler @ 00b95a48 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x20));
  *(uint *)(this + 0x38) = param_2;
  *(uint *)(this + 0x3c) = param_3;
  *(uint *)(this + 0x40) = param_4;
  return;
}


