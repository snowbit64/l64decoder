// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getResolvedStruct
// Entry Point: 00c519bc
// Size: 612 bytes
// Signature: undefined __thiscall getResolvedStruct(IR_Struct * this, IR_TypeSet * param_1, IR_Type * param_2)


/* IR_Struct::getResolvedStruct(IR_TypeSet*, IR_Type*) */

long * __thiscall IR_Struct::getResolvedStruct(IR_Struct *this,IR_TypeSet *param_1,IR_Type *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pplVar10 = (long **)(this + 0x60);
  pplVar9 = (long **)*pplVar10;
  pplVar7 = pplVar10;
  if (pplVar9 != (long **)0x0) {
    do {
      if (pplVar9[4] >= param_2) {
        pplVar7 = pplVar9;
      }
      pplVar9 = (long **)pplVar9[pplVar9[4] < param_2];
    } while (pplVar9 != (long **)0x0);
    if ((pplVar7 != pplVar10) && (pplVar7[4] <= param_2)) {
      this_00 = pplVar7[5];
      goto LAB_00c51bec;
    }
  }
  this_00 = (long *)operator_new(0x70);
                    /* try { // try from 00c51a38 to 00c51a3f has its CatchHandler @ 00c51c38 */
  IR_Struct((IR_Struct *)this_00,this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this_00);
  IR_Type::buildMangledName();
  pvVar4 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar4 = local_60;
  }
                    /* try { // try from 00c51a7c to 00c51a83 has its CatchHandler @ 00c51c24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)this_00,(ulong)pvVar4);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  plVar8 = this_00 + 3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)plVar8);
  IR_Type::buildMangledName();
  pvVar4 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar4 = local_60;
  }
                    /* try { // try from 00c51ad4 to 00c51adb has its CatchHandler @ 00c51c20 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)plVar8,(ulong)pvVar4);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)plVar8);
  lVar2 = this_00[7];
  for (lVar1 = this_00[6]; lVar1 != lVar2; lVar1 = lVar1 + 0x38) {
    uVar5 = IR_TypeSet::getResolvedType(param_1,*(IR_Type **)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
  }
  pplVar7 = (long **)*pplVar10;
  *(IR_Struct *)(this_00 + 10) = (IR_Struct)0x0;
  if (pplVar7 == (long **)0x0) {
    plVar8 = *pplVar10;
    pplVar9 = pplVar10;
  }
  else {
    pplVar9 = (long **)(this + 0x60);
LAB_00c51b40:
    do {
      pplVar10 = pplVar7;
      if (pplVar10[4] <= param_2) {
        if (pplVar10[4] < param_2) {
          pplVar9 = pplVar10 + 1;
          pplVar7 = (long **)*pplVar9;
          if ((long **)*pplVar9 != (long **)0x0) goto LAB_00c51b40;
        }
        plVar8 = *pplVar9;
        goto joined_r0x00c51ba0;
      }
      pplVar7 = (long **)*pplVar10;
      pplVar9 = pplVar10;
    } while ((long **)*pplVar10 != (long **)0x0);
    plVar8 = *pplVar10;
  }
joined_r0x00c51ba0:
  if (plVar8 == (long *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x30);
    puVar6[4] = param_2;
    puVar6[5] = this_00;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = pplVar10;
    *pplVar9 = puVar6;
    if (**(long **)(this + 0x58) != 0) {
      *(long *)(this + 0x58) = **(long **)(this + 0x58);
      puVar6 = *pplVar9;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x60),(__tree_node_base *)puVar6);
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + 1;
  }
LAB_00c51bec:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


