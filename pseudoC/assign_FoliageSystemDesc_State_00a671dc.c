// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<FoliageSystemDesc::State*>
// Entry Point: 00a671dc
// Size: 640 bytes
// Signature: type __thiscall assign<FoliageSystemDesc::State*>(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this, State * param_1, State * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<FoliageSystemDesc::State*>::value&&is_constructible<FoliageSystemDesc::State,
   std::__ndk1::iterator_traits<FoliageSystemDesc::State*>::reference>::value, void>::type
   std::__ndk1::vector<FoliageSystemDesc::State, std::__ndk1::allocator<FoliageSystemDesc::State>
   >::assign<FoliageSystemDesc::State*>(FoliageSystemDesc::State*, FoliageSystemDesc::State*) */

type __thiscall
std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
assign<FoliageSystemDesc::State*>
          (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *this,
          State *param_1,State *param_2)

{
  long lVar1;
  type tVar2;
  type tVar3;
  allocator *paVar4;
  vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *pvVar5;
  basic_string *pbVar6;
  long lVar7;
  basic_string **ppbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  basic_string *this_00;
  basic_string *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  basic_string *pbStack_68;
  basic_string *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar9 = (long)param_2 - (long)param_1 >> 3;
  lVar7 = *(long *)(this + 0x10);
  this_00 = *(basic_string **)this;
  uVar13 = lVar9 * 0x4ec4ec4ec4ec4ec5;
  lVar11 = lVar7 - (long)this_00 >> 3;
  if (uVar13 < (ulong)(lVar11 * 0x4ec4ec4ec4ec4ec5) || uVar13 + lVar11 * -0x4ec4ec4ec4ec4ec5 == 0) {
    lVar7 = *(long *)(this + 8) - (long)this_00 >> 3;
    pbVar6 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)this_00));
    if (uVar13 < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5) || uVar13 + lVar7 * -0x4ec4ec4ec4ec4ec5 == 0) {
      pbVar6 = (basic_string *)param_2;
    }
    pvVar5 = this;
    if (pbVar6 != (basic_string *)param_1) {
      do {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)this_00,(basic_string *)param_1);
        pvVar5 = (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                  *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)(this_00 + 6),(basic_string *)((long)param_1 + 0x18));
        uVar14 = *(undefined8 *)((long)param_1 + 0x30);
        uVar16 = *(undefined8 *)((long)param_1 + 0x44);
        uVar15 = *(undefined8 *)((long)param_1 + 0x3c);
        *(undefined8 *)(this_00 + 0xe) = *(undefined8 *)((long)param_1 + 0x38);
        *(undefined8 *)(this_00 + 0xc) = uVar14;
        *(undefined8 *)(this_00 + 0x11) = uVar16;
        *(undefined8 *)(this_00 + 0xf) = uVar15;
        if (this_00 != (basic_string *)param_1) {
          tVar2 = vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                  ::assign<FoliageSystemDesc::Shape*>
                            ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                              *)(this_00 + 0x14),*(Shape **)((long)param_1 + 0x50),
                             *(Shape **)((long)param_1 + 0x58));
          pvVar5 = (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                    *)(ulong)tVar2;
        }
        this_00 = this_00 + 0x1a;
        param_1 = (State *)((long)param_1 + 0x68);
      } while ((basic_string *)param_1 != pbVar6);
    }
    pbVar12 = *(basic_string **)(this + 8);
    if (uVar13 < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5) || uVar13 + lVar7 * -0x4ec4ec4ec4ec4ec5 == 0) {
      while (tVar3 = (type)pvVar5, pbVar12 != this_00) {
        pbVar12 = pbVar12 + -0x1a;
        pvVar5 = (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                  *)FoliageSystemDesc::State::~State((State *)pbVar12);
      }
      *(basic_string **)(this + 8) = this_00;
      goto LAB_00a67424;
    }
    paVar4 = (allocator *)(this + 0x10);
    local_60 = pbVar12 + (uVar13 + ((long)pbVar12 - *(long *)this >> 3) * -0x4ec4ec4ec4ec4ec5) *
                         0x1a;
    pbStack_68 = pbVar12;
                    /* try { // try from 00a672e4 to 00a672ef has its CatchHandler @ 00a6745c */
    allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
    __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>
              (paVar4,(State *)pbVar6,param_2,(State **)&pbStack_68);
    tVar3 = (type)paVar4;
  }
  else {
    if (this_00 != (basic_string *)0x0) {
      pbVar12 = *(basic_string **)(this + 8);
      pbVar6 = this_00;
      if (pbVar12 != this_00) {
        do {
          pbVar12 = pbVar12 + -0x1a;
          FoliageSystemDesc::State::~State((State *)pbVar12);
        } while (pbVar12 != this_00);
        pbVar6 = *(basic_string **)this;
      }
      *(basic_string **)(this + 8) = this_00;
      operator_delete(pbVar6);
      lVar7 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x276276276276276 < uVar13) {
LAB_00a67450:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (lVar7 >> 3) * -0x6276276276276276;
    if (uVar13 <= uVar10) {
      uVar13 = uVar10;
    }
    if (0x13b13b13b13b13a < (ulong)((lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      uVar13 = 0x276276276276276;
    }
    if (0x276276276276276 < uVar13) goto LAB_00a67450;
    pbStack_68 = (basic_string *)operator_new(uVar13 * 0x68);
    local_60 = pbStack_68 + lVar9 * 2;
    *(basic_string **)this = pbStack_68;
    *(basic_string **)(this + 8) = pbStack_68;
    ppbVar8 = (basic_string **)(this + 0x10);
    *ppbVar8 = pbStack_68 + uVar13 * 0x1a;
                    /* try { // try from 00a6740c to 00a6741b has its CatchHandler @ 00a67460 */
    allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
    __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>
              ((allocator *)ppbVar8,param_1,param_2,(State **)&pbStack_68);
    tVar3 = (type)ppbVar8;
  }
  *(basic_string **)(this + 8) = pbStack_68;
LAB_00a67424:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return tVar3;
}


