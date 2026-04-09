// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
// Entry Point: 0071bf1c
// Size: 512 bytes
// Signature: type __thiscall assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>> * this, basic_string * param_1, basic_string * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >*>::value&&is_constructible<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::iterator_traits<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>::reference>::value, void>::type
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::assign<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*) */

type __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1,basic_string *param_2)

{
  type tVar1;
  basic_string *pbVar2;
  basic_string *pbVar3;
  long lVar4;
  basic_string *pbVar5;
  ulong uVar6;
  long lVar7;
  basic_string *pbVar8;
  basic_string *this_00;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  this_00 = *(basic_string **)this;
  lVar7 = lVar4 - (long)this_00 >> 3;
  uVar9 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if (uVar9 < (ulong)(lVar7 * -0x5555555555555555) || uVar9 + lVar7 * 0x5555555555555555 == 0) {
    lVar4 = *(long *)(this + 8) - (long)this_00 >> 3;
    pbVar2 = (basic_string *)((long)param_1 + (*(long *)(this + 8) - (long)this_00));
    pbVar5 = pbVar2;
    if (uVar9 < (ulong)(lVar4 * -0x5555555555555555) || uVar9 + lVar4 * 0x5555555555555555 == 0) {
      pbVar5 = param_2;
    }
    pbVar3 = (basic_string *)this;
    if (pbVar5 != param_1) {
      do {
        pbVar3 = (basic_string *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)this_00,param_1);
        param_1 = param_1 + 6;
        this_00 = this_00 + 6;
      } while (param_1 != pbVar5);
    }
    tVar1 = (type)pbVar3;
    pbVar8 = *(basic_string **)(this + 8);
    if ((ulong)(lVar4 * -0x5555555555555555) <= uVar9 && uVar9 + lVar4 * 0x5555555555555555 != 0) {
      while (pbVar5 != param_2) {
                    /* try { // try from 0071bffc to 0071c007 has its CatchHandler @ 0071c11c */
        tVar1 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar8);
        pbVar8 = pbVar8 + 6;
        pbVar2 = pbVar2 + 6;
        pbVar5 = pbVar2;
      }
      *(basic_string **)(this + 8) = pbVar8;
      return tVar1;
    }
    while (pbVar2 = pbVar8, pbVar2 != this_00) {
      pbVar8 = pbVar2 + -6;
      if ((*(byte *)pbVar8 & 1) != 0) {
        pbVar3 = *(basic_string **)(pbVar2 + -2);
        operator_delete(pbVar3);
      }
    }
LAB_0071c0f8:
    *(basic_string **)(this + 8) = this_00;
    return (type)pbVar3;
  }
  if (this_00 != (basic_string *)0x0) {
    pbVar5 = *(basic_string **)(this + 8);
    pbVar2 = this_00;
    if (pbVar5 != this_00) {
      do {
        pbVar2 = pbVar5 + -6;
        if ((*(byte *)pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -2));
        }
        pbVar5 = pbVar2;
      } while (pbVar2 != this_00);
      pbVar2 = *(basic_string **)this;
    }
    *(basic_string **)(this + 8) = this_00;
    operator_delete(pbVar2);
    lVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    uVar6 = (lVar4 >> 3) * 0x5555555555555556;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x555555555555554 < (ulong)((lVar4 >> 3) * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      pbVar3 = (basic_string *)operator_new(uVar9 * 0x18);
      *(basic_string **)this = pbVar3;
      *(basic_string **)(this + 8) = pbVar3;
      *(basic_string **)(this + 0x10) = pbVar3 + uVar9 * 6;
      this_00 = pbVar3;
      if (param_1 != param_2) {
        do {
                    /* try { // try from 0071c0dc to 0071c0e7 has its CatchHandler @ 0071c124 */
          pbVar3 = (basic_string *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   basic_string(this_00);
          param_1 = param_1 + 6;
          this_00 = this_00 + 6;
        } while (param_1 != param_2);
      }
      goto LAB_0071c0f8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


