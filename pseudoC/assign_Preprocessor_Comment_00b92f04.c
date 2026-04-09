// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<Preprocessor::Comment*>
// Entry Point: 00b92f04
// Size: 588 bytes
// Signature: type __thiscall assign<Preprocessor::Comment*>(vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> * this, Comment * param_1, Comment * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<Preprocessor::Comment*>::value&&is_constructible<Preprocessor::Comment,
   std::__ndk1::iterator_traits<Preprocessor::Comment*>::reference>::value, void>::type
   std::__ndk1::vector<Preprocessor::Comment, std::__ndk1::allocator<Preprocessor::Comment>
   >::assign<Preprocessor::Comment*>(Preprocessor::Comment*, Preprocessor::Comment*) */

type __thiscall
std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
assign<Preprocessor::Comment*>
          (vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *this,
          Comment *param_1,Comment *param_2)

{
  undefined8 *puVar1;
  type tVar2;
  vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *pvVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  ulong uVar6;
  basic_string *pbVar7;
  ulong uVar8;
  basic_string *pbVar9;
  undefined8 uVar10;
  
  uVar6 = *(ulong *)(this + 0x10);
  pbVar7 = *(basic_string **)this;
  uVar8 = (long)param_2 - (long)param_1 >> 6;
  if (uVar8 <= (ulong)((long)(uVar6 - (long)pbVar7) >> 6)) {
    uVar6 = *(long *)(this + 8) - (long)pbVar7 >> 6;
    pbVar4 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)pbVar7));
    pbVar5 = pbVar4;
    if (uVar8 <= uVar6) {
      pbVar5 = (basic_string *)param_2;
    }
    pvVar3 = this;
    if (pbVar5 != (basic_string *)param_1) {
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)pbVar7,(basic_string *)param_1);
        pvVar3 = (vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(pbVar7 + 6),(basic_string *)((long)param_1 + 0x18));
        puVar1 = (undefined8 *)((long)param_1 + 0x38);
        uVar10 = *(undefined8 *)((long)param_1 + 0x30);
        param_1 = (Comment *)((long)param_1 + 0x40);
        *(undefined8 *)(pbVar7 + 0xe) = *puVar1;
        *(undefined8 *)(pbVar7 + 0xc) = uVar10;
        pbVar7 = pbVar7 + 0x10;
      } while ((basic_string *)param_1 != pbVar5);
    }
    tVar2 = (type)pvVar3;
    pbVar9 = *(basic_string **)(this + 8);
    if (uVar6 < uVar8) {
      if (pbVar5 != (basic_string *)param_2) {
        do {
          pbVar7 = pbVar9;
                    /* try { // try from 00b92ffc to 00b93007 has its CatchHandler @ 00b93168 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar7);
                    /* try { // try from 00b93010 to 00b9301b has its CatchHandler @ 00b93150 */
          tVar2 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string(pbVar7 + 6);
          puVar1 = (undefined8 *)(pbVar4 + 0xe);
          uVar10 = *(undefined8 *)(pbVar4 + 0xc);
          pbVar4 = pbVar4 + 0x10;
          *(undefined8 *)(pbVar7 + 0xe) = *puVar1;
          *(undefined8 *)(pbVar7 + 0xc) = uVar10;
          pbVar9 = pbVar7 + 0x10;
        } while (pbVar4 != (basic_string *)param_2);
        pbVar9 = pbVar7 + 0x10;
      }
      *(basic_string **)(this + 8) = pbVar9;
    }
    else {
      while (pbVar9 != pbVar7) {
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(pbVar9 + -10) & 1) != 0) {
          pvVar3 = *(vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> **)
                    (pbVar9 + -6);
          operator_delete(pvVar3);
        }
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(pbVar9 + -0x10) & 1) != 0) {
          pvVar3 = *(vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> **)
                    (pbVar9 + -0xc);
          operator_delete(pvVar3);
        }
        tVar2 = (type)pvVar3;
        pbVar9 = pbVar9 + -0x10;
      }
      *(basic_string **)(this + 8) = pbVar7;
    }
    return tVar2;
  }
  if (pbVar7 != (basic_string *)0x0) {
    pbVar4 = pbVar7;
    pbVar5 = *(basic_string **)(this + 8);
    if (*(basic_string **)(this + 8) != pbVar7) {
      do {
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(pbVar5 + -10) & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -6));
        }
        pbVar4 = pbVar5 + -0x10;
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(pbVar5 + -0x10) & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -0xc));
        }
        pbVar5 = pbVar4;
      } while (pbVar4 != pbVar7);
      pbVar4 = *(basic_string **)this;
    }
    *(basic_string **)(this + 8) = pbVar7;
    operator_delete(pbVar4);
    uVar6 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (-1 < (long)param_2 - (long)param_1) {
    if (uVar8 <= (ulong)((long)uVar6 >> 5)) {
      uVar8 = (long)uVar6 >> 5;
    }
    if (0x7fffffffffffffbf < uVar6) {
      uVar8 = 0x3ffffffffffffff;
    }
    if (uVar8 >> 0x3a == 0) {
      pbVar5 = (basic_string *)operator_new(uVar8 * 0x40);
      *(basic_string **)this = pbVar5;
      *(basic_string **)(this + 8) = pbVar5;
      *(basic_string **)(this + 0x10) = pbVar5 + uVar8 * 0x10;
      pbVar7 = pbVar5;
      pbVar4 = pbVar5;
      if (param_1 != param_2) {
        do {
          pbVar7 = pbVar4;
                    /* try { // try from 00b930ec to 00b930f7 has its CatchHandler @ 00b93190 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar7);
                    /* try { // try from 00b93100 to 00b9310b has its CatchHandler @ 00b93178 */
          pbVar5 = (basic_string *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   basic_string(pbVar7 + 6);
          puVar1 = (undefined8 *)(param_1 + 0x38);
          uVar10 = *(undefined8 *)(param_1 + 0x30);
          param_1 = param_1 + 0x40;
          *(undefined8 *)(pbVar7 + 0xe) = *puVar1;
          *(undefined8 *)(pbVar7 + 0xc) = uVar10;
          pbVar4 = pbVar7 + 0x10;
        } while (param_1 != param_2);
        pbVar7 = pbVar7 + 0x10;
      }
      *(basic_string **)(this + 8) = pbVar7;
      return (type)pbVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


