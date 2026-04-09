// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObjectInstance
// Entry Point: 009e513c
// Size: 692 bytes
// Signature: undefined __thiscall addObjectInstance(ProceduralPlacementRule * this, ProceduralPlacementObjectDesc * param_1, uint param_2, uint param_3)


/* ProceduralPlacementRule::addObjectInstance(ProceduralPlacementRule::ProceduralPlacementObjectDesc*,
   unsigned int, unsigned int) */

void __thiscall
ProceduralPlacementRule::addObjectInstance
          (ProceduralPlacementRule *this,ProceduralPlacementObjectDesc *param_1,uint param_2,
          uint param_3)

{
  long **pplVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  long *__src;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long **pplVar9;
  long *plVar10;
  ulong __n;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  puVar5 = (undefined4 *)operator_new(0x18);
  *puVar5 = 0;
  puVar5[1] = param_2;
  iVar3 = *(int *)(param_1 + 0x28);
  puVar5[2] = param_3;
  pplVar12 = (long **)(this + 0x98);
  pplVar13 = (long **)*pplVar12;
  *(ProceduralPlacementObjectDesc **)(puVar5 + 4) = param_1;
  pplVar9 = pplVar13;
  pplVar11 = pplVar12;
  if (pplVar13 == (long **)0x0) {
LAB_009e51d4:
    __src = (long *)operator_new(8);
    *__src = (long)puVar5;
                    /* try { // try from 009e51fc to 009e5203 has its CatchHandler @ 009e53fc */
    plVar6 = (long *)operator_new(8);
    *plVar6 = *__src;
    if (pplVar13 == (long **)0x0) {
      plVar10 = *pplVar12;
      pplVar11 = pplVar12;
    }
    else {
      pplVar11 = (long **)(this + 0x98);
LAB_009e522c:
      do {
        pplVar12 = pplVar13;
        if (*(int *)(pplVar12 + 4) <= iVar3) {
          if (*(int *)(pplVar12 + 4) < iVar3) {
            pplVar11 = pplVar12 + 1;
            pplVar13 = (long **)*pplVar11;
            if ((long **)*pplVar11 != (long **)0x0) goto LAB_009e522c;
          }
          plVar10 = *pplVar11;
          goto joined_r0x009e52a0;
        }
        pplVar13 = (long **)*pplVar12;
        pplVar11 = pplVar12;
      } while ((long **)*pplVar12 != (long **)0x0);
      plVar10 = *pplVar12;
    }
joined_r0x009e52a0:
    if (plVar10 == (long *)0x0) {
                    /* try { // try from 009e52a4 to 009e52af has its CatchHandler @ 009e53f0 */
      puVar7 = (undefined8 *)operator_new(0x40);
      *(int *)(puVar7 + 4) = iVar3;
      puVar7[5] = plVar6;
      puVar7[6] = plVar6 + 1;
      puVar7[7] = plVar6 + 1;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = pplVar12;
      *pplVar11 = puVar7;
      if (**(long **)(this + 0x90) != 0) {
        *(long *)(this + 0x90) = **(long **)(this + 0x90);
        puVar7 = *pplVar11;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x98),(__tree_node_base *)puVar7);
      plVar6 = (long *)0x0;
      *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 1;
    }
    if (plVar6 != (long *)0x0) {
      operator_delete(plVar6);
    }
  }
  else {
    do {
      if (iVar3 <= *(int *)(pplVar9 + 4)) {
        pplVar11 = pplVar9;
      }
      pplVar1 = pplVar9 + (*(int *)(pplVar9 + 4) < iVar3);
      pplVar9 = (long **)*pplVar1;
    } while ((long **)*pplVar1 != (long **)0x0);
    if ((pplVar11 == pplVar12) || (iVar3 < *(int *)(pplVar11 + 4))) goto LAB_009e51d4;
    plVar6 = pplVar11[6];
    if (plVar6 != pplVar11[7]) {
      *plVar6 = (long)puVar5;
      pplVar11[6] = plVar6 + 1;
      goto LAB_009e531c;
    }
    __src = pplVar11[5];
    __n = (long)plVar6 - (long)__src;
    uVar2 = ((long)__n >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)__n >> 2)) {
      uVar2 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      plVar6 = (long *)operator_new(uVar2 << 3);
    }
    plVar6[(long)__n >> 3] = (long)puVar5;
    if (0 < (long)__n) {
      memcpy(plVar6,__src,__n);
    }
    pplVar11[5] = plVar6;
    pplVar11[6] = plVar6 + ((long)__n >> 3) + 1;
    pplVar11[7] = plVar6 + uVar2;
  }
  if (__src != (long *)0x0) {
    operator_delete(__src);
  }
LAB_009e531c:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


