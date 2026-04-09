// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeState
// Entry Point: 00882684
// Size: 756 bytes
// Signature: undefined __thiscall changeState(StateMachine * this, State * param_1)


/* StateMachine::changeState(State*) */

void __thiscall StateMachine::changeState(StateMachine *this,State *param_1)

{
  long **pplVar1;
  long lVar2;
  long **__dest;
  ulong uVar3;
  long lVar4;
  StateMachine *pSVar5;
  StateMachine **ppSVar6;
  StateMachine **ppSVar7;
  ulong __n;
  long *plVar8;
  StateMachine **ppSVar9;
  ulong uVar10;
  long **pplVar11;
  long **pplVar12;
  long **local_80;
  long **local_70;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pSVar5 = *(StateMachine **)this;
  if (pSVar5 == (StateMachine *)0x0) {
    *(State **)this = param_1;
    *(undefined8 *)(this + 8) = 0;
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
    goto LAB_00882804;
  }
  ppSVar6 = (StateMachine **)(this + 0x20);
  ppSVar7 = (StateMachine **)*ppSVar6;
  ppSVar9 = ppSVar6;
  if (ppSVar7 == (StateMachine **)0x0) goto LAB_00882804;
  do {
    if (ppSVar7[4] >= pSVar5) {
      ppSVar9 = ppSVar7;
    }
    ppSVar7 = (StateMachine **)ppSVar7[ppSVar7[4] < pSVar5];
  } while (ppSVar7 != (StateMachine **)0x0);
  if ((ppSVar9 == ppSVar6) || (pSVar5 < ppSVar9[4])) goto LAB_00882804;
  pSVar5 = ppSVar9[5];
  local_80 = (long **)0x0;
  local_70 = (long **)0x0;
  if (ppSVar9[6] == pSVar5) {
    local_80 = (long **)0x0;
    plVar8 = *(long **)this;
joined_r0x008828b0:
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))();
    }
    *(State **)this = param_1;
    *(undefined8 *)(this + 8) = 0;
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (local_80 == (long **)0x0) goto LAB_00882804;
  }
  else {
    uVar10 = 0;
    pplVar12 = (long **)0x0;
    do {
      pplVar1 = (long **)(pSVar5 + uVar10 * 0x10);
      pplVar11 = pplVar12;
      __dest = local_80;
      if (pplVar1[1] == (long *)param_1) {
        if (pplVar12 == local_70) {
          __n = (long)pplVar12 - (long)local_80;
          uVar3 = ((long)__n >> 3) + 1;
          if (uVar3 >> 0x3d != 0) {
                    /* try { // try from 00882960 to 00882973 has its CatchHandler @ 00882984 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar3 <= (ulong)((long)__n >> 2)) {
            uVar3 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar3 = 0x1fffffffffffffff;
          }
          if (uVar3 == 0) {
            __dest = (long **)0x0;
          }
          else {
            if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008827a0 to 008827a3 has its CatchHandler @ 00882980 */
            __dest = (long **)operator_new(uVar3 << 3);
          }
          pplVar11 = __dest + ((long)__n >> 3) + 1;
          __dest[(long)__n >> 3] = *pplVar1;
          if (0 < (long)__n) {
            memcpy(__dest,local_80,__n);
          }
          local_70 = __dest + uVar3;
          if (local_80 != (long **)0x0) {
            operator_delete(local_80);
          }
        }
        else {
          pplVar11 = pplVar12 + 1;
          *pplVar12 = *pplVar1;
        }
      }
      local_80 = __dest;
      pSVar5 = ppSVar9[5];
      uVar10 = (ulong)((int)uVar10 + 1);
      pplVar12 = pplVar11;
    } while (uVar10 < (ulong)((long)ppSVar9[6] - (long)pSVar5 >> 4));
    if ((long)pplVar11 - (long)local_80 == 0) {
LAB_008828b8:
      plVar8 = *(long **)this;
      goto joined_r0x008828b0;
    }
    uVar10 = 0;
    do {
                    /* try { // try from 00882854 to 00882857 has its CatchHandler @ 00882994 */
      uVar3 = (**(code **)(*local_80[uVar10] + 0x18))();
      if ((uVar3 & 1) != 0) {
        plVar8 = local_80[uVar10];
        if (*(long **)this != (long *)0x0) {
                    /* try { // try from 00882904 to 0088293b has its CatchHandler @ 00882978 */
          (**(code **)(**(long **)this + 0x18))();
        }
        *(long **)(this + 8) = plVar8;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          goto LAB_00882920;
        }
        *(State **)this = param_1;
        (**(code **)(*(long *)param_1 + 0x10))(param_1);
        goto LAB_00882954;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)((long)pplVar11 - (long)local_80 >> 3));
    if (pplVar11 == local_80) goto LAB_008828b8;
    plVar8 = *local_80;
    if (*(long **)this != (long *)0x0) {
                    /* try { // try from 00882888 to 008828e3 has its CatchHandler @ 0088297c */
      (**(code **)(**(long **)this + 0x18))();
    }
    *(long **)(this + 8) = plVar8;
    if (plVar8 == (long *)0x0) {
      *(State **)this = param_1;
                    /* try { // try from 0088294c to 00882953 has its CatchHandler @ 0088297c */
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
LAB_00882920:
      *(State **)(this + 0x10) = param_1;
    }
  }
LAB_00882954:
  operator_delete(local_80);
LAB_00882804:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


