// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScriptJointBreakCallback
// Entry Point: 00752244
// Size: 480 bytes
// Signature: undefined __thiscall addScriptJointBreakCallback(EngineManager * this, uint param_1, char * param_2, void * param_3)


/* EngineManager::addScriptJointBreakCallback(unsigned int, char const*, void*) */

void __thiscall
EngineManager::addScriptJointBreakCallback
          (EngineManager *this,uint param_1,char *param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  void *pvVar4;
  size_t __n;
  long *plVar5;
  long **pplVar6;
  void *__dest;
  ulong uVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  byte local_88;
  undefined7 uStack_87;
  undefined local_80;
  undefined7 uStack_7f;
  void *local_78;
  void *pvStack_70;
  undefined7 local_68;
  undefined uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_007522e0;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_88 = (byte)uVar7 | 1;
    local_80 = (undefined)__n;
    uStack_7f = (undefined7)(__n >> 8);
    uStack_87 = (undefined7)(uVar7 >> 8);
    local_78 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_007522e0:
  pvVar4 = local_78;
  uStack_60 = uStack_7f;
  uStack_61 = local_80;
  local_68 = uStack_87;
  bVar3 = local_88;
  *(undefined *)((long)__dest + __n) = 0;
  local_78 = (void *)0x0;
  pplVar6 = (long **)(this + 0xa8);
  pplVar8 = (long **)*pplVar6;
  local_88 = 0;
  uStack_87 = 0;
  local_80 = 0;
  uStack_7f = 0;
  pplVar10 = pplVar6;
  if (pplVar8 != (long **)0x0) {
    pplVar6 = (long **)(this + 0xa8);
    do {
      while (pplVar9 = pplVar8, pplVar10 = pplVar9, param_1 < *(uint *)(pplVar9 + 4)) {
        pplVar6 = pplVar9;
        pplVar8 = (long **)*pplVar9;
        if ((long **)*pplVar9 == (long **)0x0) {
          plVar5 = *pplVar9;
          goto joined_r0x00752350;
        }
      }
      if (param_1 <= *(uint *)(pplVar9 + 4)) break;
      pplVar6 = pplVar9 + 1;
      pplVar8 = (long **)*pplVar6;
    } while ((long **)*pplVar6 != (long **)0x0);
  }
  plVar5 = *pplVar6;
  pplVar9 = pplVar6;
joined_r0x00752350:
  pvStack_70 = param_3;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 007523a8 to 007523b3 has its CatchHandler @ 00752424 */
    plVar5 = (long *)operator_new(0x48);
    uVar2 = CONCAT17(uStack_61,local_68);
    *(uint *)(plVar5 + 4) = param_1;
    *(byte *)(plVar5 + 5) = bVar3;
    local_68 = 0;
    *(undefined8 *)((long)plVar5 + 0x29) = uVar2;
    plVar5[6] = CONCAT71(uStack_60,uStack_61);
    plVar5[7] = (long)pvVar4;
    uStack_61 = 0;
    uStack_60 = 0;
    plVar5[8] = (long)param_3;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar10;
    *pplVar9 = plVar5;
    if (**(long **)(this + 0xa0) != 0) {
      *(long *)(this + 0xa0) = **(long **)(this + 0xa0);
      plVar5 = *pplVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xa8),(__tree_node_base *)plVar5);
    *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 1;
  }
  else if ((bVar3 & 1) != 0) {
    operator_delete(pvVar4);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


