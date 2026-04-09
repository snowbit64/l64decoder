// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerParameter
// Entry Point: 0086ca84
// Size: 496 bytes
// Signature: undefined __thiscall registerParameter(ConditionalAnimationShared * this, uint param_1, PARAMETER_TYPE param_2, char * param_3)


/* WARNING: Removing unreachable block (ram,0x0086cbb4) */
/* ConditionalAnimationShared::registerParameter(unsigned int,
   ConditionalAnimationShared::PARAMETER_TYPE, char const*) */

void __thiscall
ConditionalAnimationShared::registerParameter
          (ConditionalAnimationShared *this,uint param_1,PARAMETER_TYPE param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  undefined7 *puVar2;
  long *plVar3;
  long **pplVar4;
  ulong uVar5;
  long **pplVar6;
  long **pplVar7;
  byte local_90;
  undefined7 uStack_8f;
  undefined local_88;
  undefined7 uStack_87;
  undefined7 *local_80;
  undefined7 local_78;
  undefined uStack_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    puVar2 = &uStack_8f;
    local_90 = (byte)((int)__n << 1);
    if (__n == 0) goto LAB_0086cb28;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    puVar2 = (undefined7 *)operator_new(uVar5);
    local_90 = (byte)uVar5 | 1;
    local_88 = (undefined)__n;
    uStack_87 = (undefined7)(__n >> 8);
    uStack_8f = (undefined7)(uVar5 >> 8);
    local_80 = puVar2;
  }
  memcpy(puVar2,param_3,__n);
LAB_0086cb28:
  *(undefined *)((long)puVar2 + __n) = 0;
  puVar2 = local_80;
  pplVar4 = (long **)(this + 8);
  pplVar6 = (long **)*pplVar4;
  local_78 = uStack_8f;
  uStack_71 = local_88;
  uStack_70 = uStack_87;
  uStack_8f = 0;
  local_88 = 0;
  uStack_87 = 0;
  local_80 = (undefined7 *)0x0;
  pplVar7 = pplVar4;
  if (pplVar6 == (long **)0x0) {
LAB_0086cb98:
    plVar3 = *pplVar4;
  }
  else {
    pplVar4 = (long **)(this + 8);
    do {
      while (pplVar7 = pplVar6, *(uint *)(pplVar7 + 4) <= param_1) {
        if (param_1 <= *(uint *)(pplVar7 + 4)) goto LAB_0086cb98;
        pplVar4 = pplVar7 + 1;
        pplVar6 = (long **)*pplVar4;
        if ((long **)*pplVar4 == (long **)0x0) goto LAB_0086cb98;
      }
      pplVar4 = pplVar7;
      pplVar6 = (long **)*pplVar7;
    } while ((long **)*pplVar7 != (long **)0x0);
    plVar3 = *pplVar7;
  }
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 0086cbf8 to 0086cc03 has its CatchHandler @ 0086cc74 */
    plVar3 = (long *)operator_new(0x48);
    *(uint *)(plVar3 + 4) = param_1;
    *(PARAMETER_TYPE *)(plVar3 + 5) = param_2;
    *(byte *)(plVar3 + 6) = local_90;
    *(ulong *)((long)plVar3 + 0x31) = CONCAT17(uStack_71,local_78);
    plVar3[7] = CONCAT71(uStack_70,uStack_71);
    plVar3[8] = (long)puVar2;
    local_78 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = (long)pplVar7;
    *pplVar4 = plVar3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      plVar3 = *pplVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else if ((local_90 & 1) != 0) {
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


