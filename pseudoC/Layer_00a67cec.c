// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Layer
// Entry Point: 00a67cec
// Size: 104 bytes
// Signature: undefined __thiscall Layer(Layer * this, Layer * param_1)


/* FoliageSystemDesc::Layer::Layer(FoliageSystemDesc::Layer const&) */

void __thiscall FoliageSystemDesc::Layer::Layer(Layer *this,Layer *param_1)

{
  undefined8 uVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)this);
                    /* try { // try from 00a67d10 to 00a67d17 has its CatchHandler @ 00a67dac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x18));
                    /* try { // try from 00a67d20 to 00a67d27 has its CatchHandler @ 00a67d8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar1;
                    /* try { // try from 00a67d40 to 00a67d43 has its CatchHandler @ 00a67d54 */
  std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
  vector((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *)
         (this + 0x58),(vector *)(param_1 + 0x58));
  return;
}


