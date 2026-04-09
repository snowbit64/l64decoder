// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<StoppingPath*>
// Entry Point: 00726b08
// Size: 572 bytes
// Signature: type __thiscall assign<StoppingPath*>(vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> * this, StoppingPath * param_1, StoppingPath * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<StoppingPath*>::value&&is_constructible<StoppingPath,
   std::__ndk1::iterator_traits<StoppingPath*>::reference>::value, void>::type
   std::__ndk1::vector<StoppingPath, std::__ndk1::allocator<StoppingPath>
   >::assign<StoppingPath*>(StoppingPath*, StoppingPath*) */

type __thiscall
std::__ndk1::vector<StoppingPath,std::__ndk1::allocator<StoppingPath>>::assign<StoppingPath*>
          (vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> *this,StoppingPath *param_1,
          StoppingPath *param_2)

{
  vector vVar1;
  type tVar2;
  type tVar3;
  PathKnot *pPVar4;
  PathKnot **ppPVar5;
  PathKnot **ppPVar6;
  long lVar7;
  PathKnot **ppPVar8;
  ulong uVar9;
  long lVar10;
  PathKnot **ppPVar11;
  PathKnot **this_00;
  ulong uVar12;
  
  lVar7 = *(long *)(this + 0x10);
  this_00 = *(PathKnot ***)this;
  lVar10 = lVar7 - (long)this_00 >> 3;
  uVar12 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if (uVar12 < (ulong)(lVar10 * -0x3333333333333333) || uVar12 + lVar10 * 0x3333333333333333 == 0) {
    lVar7 = *(long *)(this + 8) - (long)this_00 >> 3;
    ppPVar5 = (PathKnot **)(param_1 + (*(long *)(this + 8) - (long)this_00));
    ppPVar8 = ppPVar5;
    if (uVar12 < (ulong)(lVar7 * -0x3333333333333333) || uVar12 + lVar7 * 0x3333333333333333 == 0) {
      ppPVar8 = (PathKnot **)param_2;
    }
    ppPVar6 = (PathKnot **)this;
    if (ppPVar8 != (PathKnot **)param_1) {
      do {
        if ((PathKnot **)param_1 != this_00) {
          tVar3 = vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
                  assign<StoppingPath::PathKnot*>
                            ((vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>
                              *)this_00,*(PathKnot **)param_1,*(PathKnot **)((long)param_1 + 8));
          ppPVar6 = (PathKnot **)(ulong)tVar3;
        }
        ppPVar11 = (PathKnot **)((long)param_1 + 0x20);
        pPVar4 = *(PathKnot **)((long)param_1 + 0x18);
        param_1 = (StoppingPath *)((long)param_1 + 0x28);
        *(undefined *)(this_00 + 4) = *(undefined *)ppPVar11;
        this_00[3] = pPVar4;
        this_00 = this_00 + 5;
      } while ((PathKnot **)param_1 != ppPVar8);
    }
    tVar2 = (type)ppPVar6;
    ppPVar11 = *(PathKnot ***)(this + 8);
    if ((ulong)(lVar7 * -0x3333333333333333) <= uVar12 && uVar12 + lVar7 * 0x3333333333333333 != 0)
    {
      while (ppPVar8 != (PathKnot **)param_2) {
                    /* try { // try from 00726bcc to 00726bd7 has its CatchHandler @ 00726d44 */
        tVar2 = vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
                vector((vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>
                        *)ppPVar11,(vector *)ppPVar5);
        pPVar4 = ppPVar5[3];
        *(undefined *)(ppPVar11 + 4) = *(undefined *)(ppPVar5 + 4);
        ppPVar11[3] = pPVar4;
        ppPVar11 = ppPVar11 + 5;
        ppPVar5 = ppPVar5 + 5;
        ppPVar8 = ppPVar5;
      }
      *(PathKnot ***)(this + 8) = ppPVar11;
      return tVar2;
    }
    while (ppPVar5 = ppPVar11, ppPVar5 != this_00) {
      ppPVar11 = ppPVar5 + -5;
      ppPVar6 = (PathKnot **)*ppPVar11;
      if (ppPVar6 != (PathKnot **)0x0) {
        ppPVar5[-4] = (PathKnot *)ppPVar6;
        operator_delete(ppPVar6);
      }
    }
LAB_00726d20:
    *(PathKnot ***)(this + 8) = this_00;
    return (type)ppPVar6;
  }
  if (this_00 != (PathKnot **)0x0) {
    ppPVar8 = *(PathKnot ***)(this + 8);
    ppPVar5 = this_00;
    if (ppPVar8 != this_00) {
      do {
        ppPVar5 = ppPVar8 + -5;
        pPVar4 = *ppPVar5;
        if (pPVar4 != (PathKnot *)0x0) {
          ppPVar8[-4] = pPVar4;
          operator_delete(pPVar4);
        }
        ppPVar8 = ppPVar5;
      } while (ppPVar5 != this_00);
      ppPVar5 = *(PathKnot ***)this;
    }
    *(PathKnot ***)(this + 8) = this_00;
    operator_delete(ppPVar5);
    lVar7 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar12 < 0x666666666666667) {
    uVar9 = (lVar7 >> 3) * -0x6666666666666666;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (0x333333333333332 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    if (uVar12 < 0x666666666666667) {
      ppPVar6 = (PathKnot **)operator_new(uVar12 * 0x28);
      *(PathKnot ***)this = ppPVar6;
      *(PathKnot ***)(this + 8) = ppPVar6;
      *(PathKnot ***)(this + 0x10) = ppPVar6 + uVar12 * 5;
      this_00 = ppPVar6;
      if (param_1 != param_2) {
        do {
                    /* try { // try from 00726cf4 to 00726cff has its CatchHandler @ 00726d4c */
          ppPVar6 = (PathKnot **)
                    vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
                    vector((vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>
                            *)this_00,(vector *)param_1);
          ppPVar5 = (PathKnot **)((vector *)param_1 + 0x18);
          vVar1 = ((vector *)param_1)[0x20];
          param_1 = (StoppingPath *)((vector *)param_1 + 0x28);
          this_00[3] = *ppPVar5;
          *(vector *)(this_00 + 4) = vVar1;
          this_00 = this_00 + 5;
        } while (param_1 != param_2);
      }
      goto LAB_00726d20;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


