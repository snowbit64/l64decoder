// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<FoliageSystemDesc::Layer*>
// Entry Point: 00a66f98
// Size: 564 bytes
// Signature: type __thiscall assign<FoliageSystemDesc::Layer*>(vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>> * this, Layer * param_1, Layer * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<FoliageSystemDesc::Layer*>::value&&is_constructible<FoliageSystemDesc::Layer,
   std::__ndk1::iterator_traits<FoliageSystemDesc::Layer*>::reference>::value, void>::type
   std::__ndk1::vector<FoliageSystemDesc::Layer, std::__ndk1::allocator<FoliageSystemDesc::Layer>
   >::assign<FoliageSystemDesc::Layer*>(FoliageSystemDesc::Layer*, FoliageSystemDesc::Layer*) */

type __thiscall
std::__ndk1::vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>::
assign<FoliageSystemDesc::Layer*>
          (vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>> *this,
          Layer *param_1,Layer *param_2)

{
  basic_string bVar1;
  type tVar2;
  type tVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  basic_string *this_00;
  basic_string *this_01;
  basic_string *pbVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(this + 0x10);
  this_01 = *(basic_string **)this;
  lVar8 = lVar6 - (long)this_01 >> 4;
  uVar10 = ((long)param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
  if (uVar10 < (ulong)(lVar8 * 0x6db6db6db6db6db7) || uVar10 + lVar8 * -0x6db6db6db6db6db7 == 0) {
    lVar6 = *(long *)(this + 8) - (long)this_01 >> 4;
    pbVar4 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)this_01));
    pbVar9 = pbVar4;
    if (uVar10 < (ulong)(lVar6 * 0x6db6db6db6db6db7) || uVar10 + lVar6 * -0x6db6db6db6db6db7 == 0) {
      pbVar9 = (basic_string *)param_2;
    }
    pbVar5 = (basic_string *)this;
    if (pbVar9 != (basic_string *)param_1) {
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)this_01,(basic_string *)param_1);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(this_01 + 6),(basic_string *)((long)param_1 + 0x18));
        pbVar5 = (basic_string *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(this_01 + 0xc),(basic_string *)((long)param_1 + 0x30));
        bVar1 = *(basic_string *)((long)param_1 + 0x50);
        *(undefined8 *)(this_01 + 0x12) = *(undefined8 *)((long)param_1 + 0x48);
        this_01[0x14] = bVar1;
        if (this_01 != (basic_string *)param_1) {
          tVar3 = vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                  ::assign<FoliageSystemDesc::State*>
                            ((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                              *)(this_01 + 0x16),*(State **)((long)param_1 + 0x58),
                             *(State **)((long)param_1 + 0x60));
          pbVar5 = (basic_string *)(ulong)tVar3;
        }
        this_01 = this_01 + 0x1c;
        param_1 = (Layer *)((long)param_1 + 0x70);
      } while ((basic_string *)param_1 != pbVar9);
    }
    tVar2 = (type)pbVar5;
    this_00 = *(basic_string **)(this + 8);
    if ((ulong)(lVar6 * 0x6db6db6db6db6db7) <= uVar10 && uVar10 + lVar6 * -0x6db6db6db6db6db7 != 0)
    {
      while (pbVar9 != (basic_string *)param_2) {
                    /* try { // try from 00a67058 to 00a67063 has its CatchHandler @ 00a671cc */
        tVar2 = FoliageSystemDesc::Layer::Layer((Layer *)this_00,(Layer *)pbVar4);
        this_00 = this_00 + 0x1c;
        pbVar4 = pbVar4 + 0x1c;
        pbVar9 = pbVar4;
      }
      *(basic_string **)(this + 8) = this_00;
      return tVar2;
    }
    while (this_00 != this_01) {
      this_00 = this_00 + -0x1c;
      pbVar5 = (basic_string *)FoliageSystemDesc::Layer::~Layer((Layer *)this_00);
    }
LAB_00a671a8:
    *(basic_string **)(this + 8) = this_01;
    return (type)pbVar5;
  }
  if (this_01 != (basic_string *)0x0) {
    pbVar9 = *(basic_string **)(this + 8);
    pbVar4 = this_01;
    if (pbVar9 != this_01) {
      do {
        pbVar9 = pbVar9 + -0x1c;
        FoliageSystemDesc::Layer::~Layer((Layer *)pbVar9);
      } while (pbVar9 != this_01);
      pbVar4 = *(basic_string **)this;
    }
    *(basic_string **)(this + 8) = this_01;
    operator_delete(pbVar4);
    lVar6 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar10 < 0x24924924924924a) {
    uVar7 = (lVar6 >> 4) * -0x2492492492492492;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x124924924924923 < (ulong)((lVar6 >> 4) * 0x6db6db6db6db6db7)) {
      uVar10 = 0x249249249249249;
    }
    if (uVar10 < 0x24924924924924a) {
      pbVar5 = (basic_string *)operator_new(uVar10 * 0x70);
      *(basic_string **)this = pbVar5;
      *(basic_string **)(this + 8) = pbVar5;
      *(basic_string **)(this + 0x10) = pbVar5 + uVar10 * 0x1c;
      this_01 = pbVar5;
      if (param_1 != param_2) {
        do {
                    /* try { // try from 00a6718c to 00a67197 has its CatchHandler @ 00a671d4 */
          pbVar5 = (basic_string *)FoliageSystemDesc::Layer::Layer((Layer *)this_01,param_1);
          param_1 = param_1 + 0x70;
          this_01 = this_01 + 0x1c;
        } while (param_1 != param_2);
      }
      goto LAB_00a671a8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


