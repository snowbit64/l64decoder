// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<AnimalAnimationSystemSource::Trigger*>
// Entry Point: 00876fb0
// Size: 576 bytes
// Signature: type __thiscall assign<AnimalAnimationSystemSource::Trigger*>(vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>> * this, Trigger * param_1, Trigger * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<AnimalAnimationSystemSource::Trigger*>::value&&is_constructible<AnimalAnimationSystemSource::Trigger,
   std::__ndk1::iterator_traits<AnimalAnimationSystemSource::Trigger*>::reference>::value,
   void>::type std::__ndk1::vector<AnimalAnimationSystemSource::Trigger,
   std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>
   >::assign<AnimalAnimationSystemSource::Trigger*>(AnimalAnimationSystemSource::Trigger*,
   AnimalAnimationSystemSource::Trigger*) */

type __thiscall
std::__ndk1::
vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
::assign<AnimalAnimationSystemSource::Trigger*>
          (vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
           *this,Trigger *param_1,Trigger *param_2)

{
  type tVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(this + 0x10);
  puVar9 = *(undefined8 **)this;
  lVar8 = lVar4 - (long)puVar9 >> 3;
  uVar10 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if (uVar10 < (ulong)(lVar8 * -0x3333333333333333) || uVar10 + lVar8 * 0x3333333333333333 == 0) {
    lVar4 = *(long *)(this + 8) - (long)puVar9 >> 3;
    puVar2 = (undefined8 *)(param_1 + (*(long *)(this + 8) - (long)puVar9));
    puVar5 = puVar2;
    if (uVar10 < (ulong)(lVar4 * -0x3333333333333333) || uVar10 + lVar4 * 0x3333333333333333 == 0) {
      puVar5 = (undefined8 *)param_2;
    }
    puVar3 = (undefined8 *)this;
    if (puVar5 != (undefined8 *)param_1) {
      do {
        *puVar9 = *(undefined8 *)param_1;
        puVar3 = (undefined8 *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(puVar9 + 1),(basic_string *)((long)param_1 + 8));
        puVar6 = (undefined8 *)((long)param_1 + 0x20);
        param_1 = (Trigger *)((long)param_1 + 0x28);
        puVar9[4] = *puVar6;
        puVar9 = puVar9 + 5;
      } while ((undefined8 *)param_1 != puVar5);
    }
    tVar1 = (type)puVar3;
    puVar6 = *(undefined8 **)(this + 8);
    if (uVar10 < (ulong)(lVar4 * -0x3333333333333333) || uVar10 + lVar4 * 0x3333333333333333 == 0) {
      while (puVar6 != puVar9) {
        if (((byte)*(vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
                     *)(puVar6 + -4) & 1) != 0) {
          puVar3 = (undefined8 *)puVar6[-2];
          operator_delete(puVar3);
        }
        tVar1 = (type)puVar3;
        puVar6 = puVar6 + -5;
      }
      *(undefined8 **)(this + 8) = puVar9;
      return tVar1;
    }
    if (puVar5 == (undefined8 *)param_2) goto LAB_008771cc;
    do {
      puVar5 = puVar6;
      *puVar5 = *puVar2;
                    /* try { // try from 008770b4 to 008770bf has its CatchHandler @ 008771f0 */
      puVar3 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               basic_string((basic_string *)(puVar5 + 1));
      puVar9 = puVar2 + 4;
      puVar2 = puVar2 + 5;
      puVar5[4] = *puVar9;
      puVar6 = puVar5 + 5;
    } while (puVar2 != (undefined8 *)param_2);
  }
  else {
    if (puVar9 != (undefined8 *)0x0) {
      puVar2 = puVar9;
      puVar5 = *(undefined8 **)(this + 8);
      if (*(undefined8 **)(this + 8) != puVar9) {
        do {
          puVar2 = puVar5 + -5;
          if (((byte)*(vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
                       *)(puVar5 + -4) & 1) != 0) {
            operator_delete((void *)puVar5[-2]);
          }
          puVar5 = puVar2;
        } while (puVar2 != puVar9);
        puVar2 = *(undefined8 **)this;
      }
      *(undefined8 **)(this + 8) = puVar9;
      operator_delete(puVar2);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x666666666666666 < uVar10) {
LAB_008771e8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (lVar4 >> 3) * -0x6666666666666666;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x333333333333332 < (ulong)((lVar4 >> 3) * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar10) goto LAB_008771e8;
    puVar3 = (undefined8 *)operator_new(uVar10 * 0x28);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + uVar10 * 5;
    puVar9 = puVar3;
    puVar6 = puVar3;
    if (param_1 == param_2) goto LAB_008771cc;
    do {
      puVar5 = puVar9;
      *puVar5 = *(undefined8 *)param_1;
                    /* try { // try from 008771a4 to 008771af has its CatchHandler @ 008771f8 */
      puVar3 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               basic_string((basic_string *)(puVar5 + 1));
      puVar9 = (undefined8 *)((long)param_1 + 0x20);
      param_1 = (Trigger *)((long)param_1 + 0x28);
      puVar5[4] = *puVar9;
      puVar9 = puVar5 + 5;
    } while (param_1 != param_2);
  }
  puVar6 = puVar5 + 5;
LAB_008771cc:
  *(undefined8 **)(this + 8) = puVar6;
  return (type)puVar3;
}


