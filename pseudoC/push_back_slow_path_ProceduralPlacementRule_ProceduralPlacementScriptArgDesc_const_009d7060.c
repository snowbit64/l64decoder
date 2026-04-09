// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
// Entry Point: 009d7060
// Size: 532 bytes
// Signature: void __cdecl __push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>(ProceduralPlacementScriptArgDesc * param_1)


/* void std::__ndk1::vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,
   std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>
   >::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc
   const&>(ProceduralPlacementRule::ProceduralPlacementScriptArgDesc const&) */

void std::__ndk1::
     vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
     ::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
               (ProceduralPlacementScriptArgDesc *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  basic_string *pbVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  basic_string *pbVar10;
  long *plVar11;
  basic_string *pbVar12;
  basic_string *local_78;
  basic_string *pbStack_70;
  void *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
  uVar1 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plVar11 = (long *)(param_1 + 0x10);
  lVar8 = *plVar11 - *(long *)param_1 >> 3;
  uVar9 = lVar8 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar8 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x38e38e38e38e38e;
  }
  local_60 = plVar11;
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x48);
  }
  pbVar12 = (basic_string *)((long)pvVar5 + lVar6 * 8);
  local_68 = (void *)((long)pvVar5 + uVar1 * 0x48);
  local_78 = pbVar12;
  pbStack_70 = pbVar12;
                    /* try { // try from 009d7140 to 009d714b has its CatchHandler @ 009d72b4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
                    /* try { // try from 009d715c to 009d7163 has its CatchHandler @ 009d7294 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar5 + lVar6 * 8 + 0x18));
                    /* try { // try from 009d7174 to 009d7177 has its CatchHandler @ 009d7274 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar5 + lVar6 * 8 + 0x30));
  pbStack_70 = pbVar12 + 0x12;
                    /* try { // try from 009d718c to 009d7193 has its CatchHandler @ 009d72b4 */
  allocator_traits<std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  ::
  __construct_backward_with_exception_guarantees<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc*>
            ((allocator *)plVar11,*(ProceduralPlacementScriptArgDesc **)param_1,
             *(ProceduralPlacementScriptArgDesc **)(param_1 + 8),
             (ProceduralPlacementScriptArgDesc **)&local_78);
  pbVar12 = *(basic_string **)param_1;
  pbVar10 = *(basic_string **)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(basic_string **)(param_1 + 8) = pbStack_70;
  *(basic_string **)param_1 = local_78;
  *(void **)(param_1 + 0x10) = local_68;
  local_78 = pbVar12;
  local_68 = (void *)uVar7;
  do {
    pbVar4 = pbVar10;
    if (pbVar4 == pbVar12) {
      pbStack_70 = pbVar4;
      if (pbVar12 != (basic_string *)0x0) {
        operator_delete(pbVar12);
      }
      if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pbVar10 = pbVar4 + -0x12;
    pbStack_70 = pbVar10;
    if ((*(byte *)(pbVar4 + -6) & 1) == 0) {
      if ((*(byte *)(pbVar4 + -0xc) & 1) != 0) goto LAB_009d7234;
LAB_009d7218:
      bVar2 = *(byte *)pbVar10;
    }
    else {
      operator_delete(*(void **)(pbVar4 + -2));
      if ((*(byte *)(pbVar4 + -0xc) & 1) == 0) goto LAB_009d7218;
LAB_009d7234:
      operator_delete(*(void **)(pbVar4 + -8));
      bVar2 = *(byte *)pbVar10;
    }
    pbVar10 = pbStack_70;
    if ((bVar2 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + -0xe));
      pbVar10 = pbStack_70;
    }
  } while( true );
}


