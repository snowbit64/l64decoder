// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __construct_backward_with_exception_guarantees<FoliageSystemDesc::State*>
// Entry Point: 00a68464
// Size: 160 bytes
// Signature: void __cdecl __construct_backward_with_exception_guarantees<FoliageSystemDesc::State*>(allocator * param_1, State * param_2, State * param_3, State * * param_4)


/* void std::__ndk1::allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>
   >::__construct_backward_with_exception_guarantees<FoliageSystemDesc::State*>(std::__ndk1::allocator<FoliageSystemDesc::State>&,
   FoliageSystemDesc::State*, FoliageSystemDesc::State*, FoliageSystemDesc::State*&) */

void std::__ndk1::allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
     __construct_backward_with_exception_guarantees<FoliageSystemDesc::State*>
               (allocator *param_1,State *param_2,State *param_3,State **param_4)

{
  vector *pvVar1;
  State *pSVar2;
  State *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != param_2) {
    pSVar3 = *param_4;
    pvVar1 = (vector *)(param_3 + -0x18);
    do {
      pSVar2 = (State *)(pvVar1 + -0x50);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(pSVar3 + -0x68));
                    /* try { // try from 00a684b0 to 00a684b7 has its CatchHandler @ 00a68534 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(pSVar3 + -0x50));
      uVar4 = *(undefined8 *)(pvVar1 + -0x14);
      uVar6 = *(undefined8 *)(pvVar1 + -0x18);
      uVar5 = *(undefined8 *)(pvVar1 + -0x20);
      *(undefined8 *)(pSVar3 + -0x24) = *(undefined8 *)(pvVar1 + -0xc);
      *(undefined8 *)(pSVar3 + -0x2c) = uVar4;
      *(undefined8 *)(pSVar3 + -0x30) = uVar6;
      *(undefined8 *)(pSVar3 + -0x38) = uVar5;
                    /* try { // try from 00a684cc to 00a684d3 has its CatchHandler @ 00a68504 */
      vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::vector
                ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                  *)(pSVar3 + -0x18),pvVar1);
      pvVar1 = pvVar1 + -0x68;
      pSVar3 = *param_4 + -0x68;
      *param_4 = pSVar3;
    } while (pSVar2 != param_2);
  }
  return;
}


