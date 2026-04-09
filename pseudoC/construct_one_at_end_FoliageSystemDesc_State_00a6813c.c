// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_one_at_end<FoliageSystemDesc::State>
// Entry Point: 00a6813c
// Size: 104 bytes
// Signature: void __thiscall __construct_one_at_end<FoliageSystemDesc::State>(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this, State * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State>
   >::__construct_one_at_end<FoliageSystemDesc::State>(FoliageSystemDesc::State&&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
__construct_one_at_end<FoliageSystemDesc::State>
          (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *this,
          State *param_1)

{
  basic_string *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pbVar1 = *(basic_string **)(this + 8);
                    /* try { // try from 00a68158 to 00a6815f has its CatchHandler @ 00a681d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1);
                    /* try { // try from 00a68168 to 00a6816f has its CatchHandler @ 00a681bc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 0x3c);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(pbVar1 + 0x11) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(pbVar1 + 0xf) = uVar2;
  *(undefined8 *)(pbVar1 + 0xe) = uVar4;
  *(undefined8 *)(pbVar1 + 0xc) = uVar3;
                    /* try { // try from 00a68188 to 00a6818b has its CatchHandler @ 00a681a4 */
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::vector
            ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *)
             (pbVar1 + 0x14),(vector *)(param_1 + 0x50));
  *(basic_string **)(this + 8) = pbVar1 + 0x1a;
  return;
}


