// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTransition
// Entry Point: 0088201c
// Size: 844 bytes
// Signature: undefined __thiscall addTransition(StateMachine * this, State * param_1, State * param_2, StateTransition * param_3)


/* StateMachine::addTransition(State*, State*, StateTransition*) */

void __thiscall
StateMachine::addTransition
          (StateMachine *this,State *param_1,State *param_2,StateTransition *param_3)

{
  long **pplVar1;
  ulong uVar2;
  long lVar3;
  void *__dest;
  StateTransition **ppSVar4;
  StateTransition **ppSVar5;
  undefined8 *puVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  size_t __n;
  void *__src;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  StateTransition *pSVar15;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  ppSVar4 = *(StateTransition ***)(this + 0x50);
  if (ppSVar4 == *(StateTransition ***)(this + 0x58)) {
    __src = *(void **)(this + 0x48);
    uVar10 = (long)ppSVar4 - (long)__src;
    uVar2 = ((long)uVar10 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00882354;
    if (uVar2 <= (ulong)((long)uVar10 >> 2)) {
      uVar2 = (long)uVar10 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00882358;
      __dest = operator_new(uVar2 << 3);
    }
    ppSVar4 = (StateTransition **)((long)__dest + ((long)uVar10 >> 3) * 8);
    *ppSVar4 = param_3;
    if (0 < (long)uVar10) {
      memcpy(__dest,__src,uVar10);
    }
    *(void **)(this + 0x48) = __dest;
    *(StateTransition ***)(this + 0x50) = ppSVar4 + 1;
    *(void **)(this + 0x58) = (void *)((long)__dest + uVar2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppSVar4 = param_3;
    *(StateTransition ***)(this + 0x50) = ppSVar4 + 1;
  }
  pplVar12 = (long **)(this + 0x20);
  pplVar13 = (long **)*pplVar12;
  pplVar8 = pplVar13;
  pplVar14 = pplVar12;
  if (pplVar13 == (long **)0x0) {
LAB_00882154:
    ppSVar4 = (StateTransition **)operator_new(0x10);
    *ppSVar4 = param_3;
    ppSVar4[1] = (StateTransition *)param_2;
                    /* try { // try from 00882178 to 0088217f has its CatchHandler @ 00882374 */
    ppSVar5 = (StateTransition **)operator_new(0x10);
    pSVar15 = *ppSVar4;
    ppSVar5[1] = ppSVar4[1];
    *ppSVar5 = pSVar15;
    if (pplVar13 == (long **)0x0) {
      plVar9 = *pplVar12;
      pplVar14 = pplVar12;
    }
    else {
      pplVar14 = (long **)(this + 0x20);
LAB_008821a8:
      do {
        pplVar12 = pplVar13;
        if (pplVar12[4] <= param_1) {
          if (pplVar12[4] < param_1) {
            pplVar14 = pplVar12 + 1;
            pplVar13 = (long **)*pplVar14;
            if ((long **)*pplVar14 != (long **)0x0) goto LAB_008821a8;
          }
          plVar9 = *pplVar14;
          goto joined_r0x0088221c;
        }
        pplVar13 = (long **)*pplVar12;
        pplVar14 = pplVar12;
      } while ((long **)*pplVar12 != (long **)0x0);
      plVar9 = *pplVar12;
    }
joined_r0x0088221c:
    if (plVar9 == (long *)0x0) {
                    /* try { // try from 00882220 to 0088222b has its CatchHandler @ 00882368 */
      puVar6 = (undefined8 *)operator_new(0x40);
      puVar6[4] = param_1;
      puVar6[5] = ppSVar5;
      puVar6[6] = ppSVar5 + 2;
      puVar6[7] = ppSVar5 + 2;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = pplVar12;
      *pplVar14 = puVar6;
      if (**(long **)(this + 0x18) != 0) {
        *(long *)(this + 0x18) = **(long **)(this + 0x18);
        puVar6 = *pplVar14;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)puVar6);
      ppSVar5 = (StateTransition **)0x0;
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    }
    if (ppSVar5 != (StateTransition **)0x0) {
      operator_delete(ppSVar5);
    }
  }
  else {
    do {
      if (pplVar8[4] >= param_1) {
        pplVar14 = pplVar8;
      }
      pplVar1 = pplVar8 + (pplVar8[4] < param_1);
      pplVar8 = (long **)*pplVar1;
    } while ((long **)*pplVar1 != (long **)0x0);
    if ((pplVar14 == pplVar12) || (param_1 < pplVar14[4])) goto LAB_00882154;
    ppSVar5 = (StateTransition **)pplVar14[6];
    if (ppSVar5 < pplVar14[7]) {
      *ppSVar5 = param_3;
      ppSVar5[1] = (StateTransition *)param_2;
      pplVar14[6] = (long *)(ppSVar5 + 2);
      goto LAB_00882294;
    }
    ppSVar4 = (StateTransition **)pplVar14[5];
    __n = (long)ppSVar5 - (long)ppSVar4;
    uVar2 = ((long)__n >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
LAB_00882354:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (long)pplVar14[7] - (long)ppSVar4;
    uVar11 = (long)uVar10 >> 3;
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar2 = 0xfffffffffffffff;
    }
    if (uVar2 >> 0x3c != 0) {
LAB_00882358:
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    plVar9 = (long *)operator_new(uVar2 * 0x10);
    ppSVar5 = (StateTransition **)(plVar9 + ((long)__n >> 4) * 2);
    *ppSVar5 = param_3;
    ppSVar5[1] = (StateTransition *)param_2;
    if (0 < (long)__n) {
      memcpy(plVar9,ppSVar4,__n);
    }
    pplVar14[5] = plVar9;
    pplVar14[6] = (long *)(ppSVar5 + 2);
    pplVar14[7] = plVar9 + uVar2 * 2;
  }
  if (ppSVar4 != (StateTransition **)0x0) {
    operator_delete(ppSVar4);
  }
LAB_00882294:
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


