// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<FoliageSystemDesc::Lod*>
// Entry Point: 00a676f4
// Size: 544 bytes
// Signature: type __thiscall assign<FoliageSystemDesc::Lod*>(vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> * this, Lod * param_1, Lod * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<FoliageSystemDesc::Lod*>::value&&is_constructible<FoliageSystemDesc::Lod,
   std::__ndk1::iterator_traits<FoliageSystemDesc::Lod*>::reference>::value, void>::type
   std::__ndk1::vector<FoliageSystemDesc::Lod, std::__ndk1::allocator<FoliageSystemDesc::Lod>
   >::assign<FoliageSystemDesc::Lod*>(FoliageSystemDesc::Lod*, FoliageSystemDesc::Lod*) */

type __thiscall
std::__ndk1::vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
assign<FoliageSystemDesc::Lod*>
          (vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *this,
          Lod *param_1,Lod *param_2)

{
  type tVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(this + 0x10);
  puVar7 = *(undefined8 **)this;
  uVar8 = (long)param_2 - (long)param_1 >> 6;
  if ((ulong)((long)(uVar4 - (long)puVar7) >> 6) < uVar8) {
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = puVar7;
      puVar5 = *(undefined8 **)(this + 8);
      if (*(undefined8 **)(this + 8) != puVar7) {
        do {
          puVar2 = puVar5 + -8;
          if (((byte)*(vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
                       *)(puVar5 + -7) & 1) != 0) {
            operator_delete((void *)puVar5[-5]);
          }
          puVar5 = puVar2;
        } while (puVar2 != puVar7);
        puVar2 = *(undefined8 **)this;
      }
      *(undefined8 **)(this + 8) = puVar7;
      operator_delete(puVar2);
      uVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if ((long)param_2 - (long)param_1 < 0) {
LAB_00a6790c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar8 <= (ulong)((long)uVar4 >> 5)) {
      uVar8 = (long)uVar4 >> 5;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar8 = 0x3ffffffffffffff;
    }
    if (uVar8 >> 0x3a != 0) goto LAB_00a6790c;
    puVar3 = (undefined8 *)operator_new(uVar8 * 0x40);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + uVar8 * 8;
    puVar7 = puVar3;
    puVar6 = puVar3;
    if (param_1 == param_2) goto LAB_00a678f0;
    do {
      puVar5 = puVar7;
      *puVar5 = *(undefined8 *)param_1;
                    /* try { // try from 00a678c0 to 00a678cb has its CatchHandler @ 00a6791c */
      puVar3 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               basic_string((basic_string *)(puVar5 + 1));
      puVar7 = (undefined8 *)((long)param_1 + 0x28);
      uVar9 = *(undefined8 *)((long)param_1 + 0x20);
      uVar11 = *(undefined8 *)((long)param_1 + 0x35);
      uVar10 = *(undefined8 *)((long)param_1 + 0x2d);
      param_1 = (Lod *)((long)param_1 + 0x40);
      puVar5[5] = *puVar7;
      puVar5[4] = uVar9;
      *(undefined8 *)((long)puVar5 + 0x35) = uVar11;
      *(undefined8 *)((long)puVar5 + 0x2d) = uVar10;
      puVar7 = puVar5 + 8;
    } while (param_1 != param_2);
  }
  else {
    uVar4 = *(long *)(this + 8) - (long)puVar7 >> 6;
    puVar2 = (undefined8 *)(param_1 + (*(long *)(this + 8) - (long)puVar7));
    puVar5 = puVar2;
    if (uVar8 <= uVar4) {
      puVar5 = (undefined8 *)param_2;
    }
    puVar3 = (undefined8 *)this;
    if (puVar5 != (undefined8 *)param_1) {
      do {
        *puVar7 = *(undefined8 *)param_1;
        puVar3 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(puVar7 + 1),(basic_string *)((long)param_1 + 8));
        puVar6 = (undefined8 *)((long)param_1 + 0x28);
        uVar9 = *(undefined8 *)((long)param_1 + 0x20);
        uVar11 = *(undefined8 *)((long)param_1 + 0x35);
        uVar10 = *(undefined8 *)((long)param_1 + 0x2d);
        param_1 = (Lod *)((long)param_1 + 0x40);
        puVar7[5] = *puVar6;
        puVar7[4] = uVar9;
        *(undefined8 *)((long)puVar7 + 0x35) = uVar11;
        *(undefined8 *)((long)puVar7 + 0x2d) = uVar10;
        puVar7 = puVar7 + 8;
      } while ((undefined8 *)param_1 != puVar5);
    }
    tVar1 = (type)puVar3;
    puVar6 = *(undefined8 **)(this + 8);
    if (uVar8 <= uVar4) {
      while (puVar6 != puVar7) {
        if (((byte)*(vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *
                    )(puVar6 + -7) & 1) != 0) {
          puVar3 = (undefined8 *)puVar6[-5];
          operator_delete(puVar3);
        }
        tVar1 = (type)puVar3;
        puVar6 = puVar6 + -8;
      }
      *(undefined8 **)(this + 8) = puVar7;
      return tVar1;
    }
    if (puVar5 == (undefined8 *)param_2) goto LAB_00a678f0;
    do {
      puVar5 = puVar6;
      *puVar5 = *puVar2;
                    /* try { // try from 00a677e8 to 00a677f3 has its CatchHandler @ 00a67914 */
      puVar3 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               basic_string((basic_string *)(puVar5 + 1));
      puVar7 = (undefined8 *)((long)puVar2 + 0x35);
      uVar9 = *(undefined8 *)((long)puVar2 + 0x2d);
      uVar11 = puVar2[5];
      uVar10 = puVar2[4];
      puVar2 = puVar2 + 8;
      *(undefined8 *)((long)puVar5 + 0x35) = *puVar7;
      *(undefined8 *)((long)puVar5 + 0x2d) = uVar9;
      puVar5[5] = uVar11;
      puVar5[4] = uVar10;
      puVar6 = puVar5 + 8;
    } while (puVar2 != (undefined8 *)param_2);
  }
  puVar6 = puVar5 + 8;
LAB_00a678f0:
  *(undefined8 **)(this + 8) = puVar6;
  return (type)puVar3;
}


