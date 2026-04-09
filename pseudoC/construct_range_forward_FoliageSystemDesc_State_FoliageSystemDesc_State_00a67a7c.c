// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>
// Entry Point: 00a67a7c
// Size: 152 bytes
// Signature: void __cdecl __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>(allocator * param_1, State * param_2, State * param_3, State * * param_4)


/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>
   >::__construct_range_forward<FoliageSystemDesc::State*,
   FoliageSystemDesc::State*>(std::__ndk1::allocator<FoliageSystemDesc::State>&,
   FoliageSystemDesc::State*, FoliageSystemDesc::State*, FoliageSystemDesc::State*&) */

void std::__ndk1::allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
     __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>
               (allocator *param_1,State *param_2,State *param_3,State **param_4)

{
  basic_string *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != param_3) {
    pbVar1 = (basic_string *)*param_4;
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar1);
                    /* try { // try from 00a67abc to 00a67ac7 has its CatchHandler @ 00a67b44 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar1 + 6);
      uVar2 = *(undefined8 *)(param_2 + 0x3c);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(pbVar1 + 0x11) = *(undefined8 *)(param_2 + 0x44);
      *(undefined8 *)(pbVar1 + 0xf) = uVar2;
      *(undefined8 *)(pbVar1 + 0xe) = uVar4;
      *(undefined8 *)(pbVar1 + 0xc) = uVar3;
                    /* try { // try from 00a67ae0 to 00a67ae7 has its CatchHandler @ 00a67b14 */
      vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::vector
                ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                  *)(pbVar1 + 0x14),(vector *)(param_2 + 0x50));
      param_2 = param_2 + 0x68;
      pbVar1 = (basic_string *)(*param_4 + 0x68);
      *param_4 = (State *)pbVar1;
    } while (param_2 != param_3);
  }
  return;
}


