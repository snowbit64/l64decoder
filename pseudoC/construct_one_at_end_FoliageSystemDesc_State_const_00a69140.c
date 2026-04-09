// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_one_at_end<FoliageSystemDesc::State_const&>
// Entry Point: 00a69140
// Size: 104 bytes
// Signature: void __thiscall __construct_one_at_end<FoliageSystemDesc::State_const&>(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this, State * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State>
   >::__construct_one_at_end<FoliageSystemDesc::State const&>(FoliageSystemDesc::State const&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
__construct_one_at_end<FoliageSystemDesc::State_const&>
          (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *this,
          State *param_1)

{
  basic_string *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pbVar1 = *(basic_string **)(this + 8);
                    /* try { // try from 00a6915c to 00a69163 has its CatchHandler @ 00a691d8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1);
                    /* try { // try from 00a6916c to 00a69173 has its CatchHandler @ 00a691c0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 0x3c);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(pbVar1 + 0x11) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(pbVar1 + 0xf) = uVar2;
  *(undefined8 *)(pbVar1 + 0xe) = uVar4;
  *(undefined8 *)(pbVar1 + 0xc) = uVar3;
                    /* try { // try from 00a6918c to 00a6918f has its CatchHandler @ 00a691a8 */
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::vector
            ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *)
             (pbVar1 + 0x14),(vector *)(param_1 + 0x50));
  *(basic_string **)(this + 8) = pbVar1 + 0x1a;
  return;
}


