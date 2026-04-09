// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<ShaderStructLayout::Field*>
// Entry Point: 006d7f74
// Size: 480 bytes
// Signature: type __thiscall assign<ShaderStructLayout::Field*>(vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> * this, Field * param_1, Field * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<ShaderStructLayout::Field*>::value&&is_constructible<ShaderStructLayout::Field,
   std::__ndk1::iterator_traits<ShaderStructLayout::Field*>::reference>::value, void>::type
   std::__ndk1::vector<ShaderStructLayout::Field, std::__ndk1::allocator<ShaderStructLayout::Field>
   >::assign<ShaderStructLayout::Field*>(ShaderStructLayout::Field*, ShaderStructLayout::Field*) */

type __thiscall
std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
assign<ShaderStructLayout::Field*>
          (vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *this
          ,Field *param_1,Field *param_2)

{
  undefined8 *puVar1;
  type tVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  ulong uVar5;
  basic_string *pbVar6;
  basic_string *pbVar7;
  basic_string *this_00;
  ulong uVar8;
  
  uVar5 = *(ulong *)(this + 0x10);
  this_00 = *(basic_string **)this;
  uVar8 = (long)param_2 - (long)param_1 >> 5;
  if (uVar8 <= (ulong)((long)(uVar5 - (long)this_00) >> 5)) {
    uVar5 = *(long *)(this + 8) - (long)this_00 >> 5;
    pbVar3 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)this_00));
    pbVar6 = pbVar3;
    if (uVar8 <= uVar5) {
      pbVar6 = (basic_string *)param_2;
    }
    pbVar4 = (basic_string *)this;
    if (pbVar6 != (basic_string *)param_1) {
      do {
        pbVar4 = (basic_string *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)this_00,(basic_string *)param_1);
        puVar1 = (undefined8 *)((long)param_1 + 0x18);
        param_1 = (Field *)((long)param_1 + 0x20);
        *(undefined8 *)(this_00 + 6) = *puVar1;
        this_00 = this_00 + 8;
      } while ((basic_string *)param_1 != pbVar6);
    }
    tVar2 = (type)pbVar4;
    pbVar7 = *(basic_string **)(this + 8);
    if (uVar5 < uVar8) {
      while (pbVar6 != (basic_string *)param_2) {
                    /* try { // try from 006d8044 to 006d804f has its CatchHandler @ 006d8154 */
        tVar2 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar7);
        *(undefined8 *)(pbVar7 + 6) = *(undefined8 *)(pbVar3 + 6);
        pbVar7 = pbVar7 + 8;
        pbVar3 = pbVar3 + 8;
        pbVar6 = pbVar3;
      }
      *(basic_string **)(this + 8) = pbVar7;
      return tVar2;
    }
    while (pbVar3 = pbVar7, pbVar3 != this_00) {
      pbVar7 = pbVar3 + -8;
      if ((*(byte *)pbVar7 & 1) != 0) {
        pbVar4 = *(basic_string **)(pbVar3 + -4);
        operator_delete(pbVar4);
      }
    }
LAB_006d8130:
    *(basic_string **)(this + 8) = this_00;
    return (type)pbVar4;
  }
  if (this_00 != (basic_string *)0x0) {
    pbVar6 = *(basic_string **)(this + 8);
    pbVar3 = this_00;
    if (pbVar6 != this_00) {
      do {
        pbVar3 = pbVar6 + -8;
        if ((*(byte *)pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -4));
        }
        pbVar6 = pbVar3;
      } while (pbVar3 != this_00);
      pbVar3 = *(basic_string **)this;
    }
    *(basic_string **)(this + 8) = this_00;
    operator_delete(pbVar3);
    uVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (-1 < (long)param_2 - (long)param_1) {
    if (uVar8 <= (ulong)((long)uVar5 >> 4)) {
      uVar8 = (long)uVar5 >> 4;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 >> 0x3b == 0) {
      pbVar4 = (basic_string *)operator_new(uVar8 * 0x20);
      *(basic_string **)this = pbVar4;
      *(basic_string **)(this + 8) = pbVar4;
      *(basic_string **)(this + 0x10) = pbVar4 + uVar8 * 8;
      this_00 = pbVar4;
      if (param_1 != param_2) {
        do {
                    /* try { // try from 006d810c to 006d8117 has its CatchHandler @ 006d815c */
          pbVar4 = (basic_string *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   basic_string(this_00);
          puVar1 = (undefined8 *)(param_1 + 0x18);
          param_1 = param_1 + 0x20;
          *(undefined8 *)(this_00 + 6) = *puVar1;
          this_00 = this_00 + 8;
        } while (param_1 != param_2);
      }
      goto LAB_006d8130;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


