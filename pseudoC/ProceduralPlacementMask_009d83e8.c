// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementMask
// Entry Point: 009d83e8
// Size: 300 bytes
// Signature: undefined __thiscall ProceduralPlacementMask(ProceduralPlacementMask * this, basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* ProceduralPlacementMask::ProceduralPlacementMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementMask::ProceduralPlacementMask
          (ProceduralPlacementMask *this,basic_string *param_1,basic_string *param_2,
          basic_string *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__ProceduralPlacementMask_00fe24b8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 8));
                    /* try { // try from 009d843c to 009d8447 has its CatchHandler @ 009d85b4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x20));
                    /* try { // try from 009d844c to 009d8457 has its CatchHandler @ 009d8594 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x38));
  puVar3 = (undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x78) = 0;
  *puVar3 = 0;
  *(undefined8 *)(this + 0x60) = 0x8f60c8c12a4d8903;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x69] = (ProceduralPlacementMask)0x0;
  *(undefined4 *)(this + 0xa8) = 0x7fffffff;
  *(undefined8 *)(this + 0xa0) = 0x7fffffff;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
                    /* try { // try from 009d84a4 to 009d84b3 has its CatchHandler @ 009d8514 */
  getMaskSignature(param_2,param_3);
  if ((*(byte *)puVar3 & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  this[0x68] = (ProceduralPlacementMask)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x78) = uStack_68;
  *puVar3 = local_70;
  *(undefined8 *)(this + 0x80) = local_60;
  *(undefined8 *)(this + 0x50) = 0x80000000800;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


