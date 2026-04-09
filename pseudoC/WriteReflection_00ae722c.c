// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteReflection
// Entry Point: 00ae722c
// Size: 1840 bytes
// Signature: undefined __cdecl WriteReflection(ShaderModule * param_1, bool param_2, basic_ostream * param_3)


/* WriteReflection(spv_reflect::ShaderModule const&, bool, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void WriteReflection(ShaderModule *param_1,bool param_2,basic_ostream *param_3)

{
  SpvReflectShaderModule *pSVar1;
  long lVar2;
  undefined4 uVar3;
  basic_ostream *pbVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  SpvReflectInterfaceVariable *pSVar8;
  SpvReflectBlockVariable *pSVar9;
  SpvReflectDescriptorBinding *pSVar10;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  uint local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  pSVar1 = (SpvReflectShaderModule *)(param_1 + 8);
  local_68 = *(long *)(lVar2 + 0x28);
  StreamWriteShaderModule(param_3,pSVar1,(char *)param_3);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_6c = 0;
                    /* try { // try from 00ae7294 to 00ae7353 has its CatchHandler @ 00ae795c */
  uVar3 = spvReflectEnumerateInputVariables(pSVar1,&local_6c,0);
  *(undefined4 *)param_1 = uVar3;
  if (local_6c == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    std::__ndk1::
    vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>::
    __append((vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>
              *)&local_88,(ulong)local_6c);
    pvVar5 = local_88;
  }
  uVar3 = spvReflectEnumerateInputVariables(pSVar1,&local_6c,pvVar5);
  *(undefined4 *)param_1 = uVar3;
  if (local_6c != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_3,"  ",2);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Input variables: ",0x11);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_6c);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n\n",2);
    if (local_80 != local_88) {
      uVar7 = 0;
      do {
        pSVar8 = *(SpvReflectInterfaceVariable **)((long)local_88 + uVar7 * 8);
                    /* try { // try from 00ae73a0 to 00ae73ff has its CatchHandler @ 00ae7968 */
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3,"    ",4);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,":",1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
        StreamWriteInterfaceVariable(param_3,pSVar8,"      ");
        if (uVar7 < local_6c - 1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1)
          ;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)((long)local_80 - (long)local_88 >> 3));
    }
  }
  local_6c = 0;
                    /* try { // try from 00ae7408 to 00ae74e3 has its CatchHandler @ 00ae795c */
  uVar3 = spvReflectEnumerateOutputVariables(pSVar1,&local_6c,0);
  *(undefined4 *)param_1 = uVar3;
  uVar7 = (ulong)local_6c;
  uVar6 = (long)local_80 - (long)local_88 >> 3;
  if (uVar6 < uVar7) {
    std::__ndk1::
    vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>::
    __append((vector<SpvReflectInterfaceVariable*,std::__ndk1::allocator<SpvReflectInterfaceVariable*>>
              *)&local_88,uVar7 - uVar6);
  }
  else if (uVar7 < uVar6) {
    local_80 = (void *)((long)local_88 + uVar7 * 8);
  }
  uVar3 = spvReflectEnumerateOutputVariables(pSVar1,&local_6c,local_88);
  *(undefined4 *)param_1 = uVar3;
  if (local_6c != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_3,"  ",2);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Output variables: ",0x12);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_6c);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n\n",2);
    if (local_80 != local_88) {
      uVar7 = 0;
      do {
        pSVar8 = *(SpvReflectInterfaceVariable **)((long)local_88 + uVar7 * 8);
                    /* try { // try from 00ae7530 to 00ae758f has its CatchHandler @ 00ae7964 */
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3,"    ",4);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,":",1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
        StreamWriteInterfaceVariable(param_3,pSVar8,"      ");
        if (uVar7 < local_6c - 1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1)
          ;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)((long)local_80 - (long)local_88 >> 3));
    }
  }
  local_6c = 0;
                    /* try { // try from 00ae7598 to 00ae7673 has its CatchHandler @ 00ae795c */
  uVar3 = spvReflectEnumeratePushConstantBlocks(pSVar1,&local_6c,0);
  *(undefined4 *)param_1 = uVar3;
  uVar7 = (ulong)local_6c;
  uVar6 = (long)local_b0 - (long)local_b8 >> 3;
  if (uVar6 < uVar7) {
    std::__ndk1::vector<SpvReflectBlockVariable*,std::__ndk1::allocator<SpvReflectBlockVariable*>>::
    __append((vector<SpvReflectBlockVariable*,std::__ndk1::allocator<SpvReflectBlockVariable*>> *)
             &local_b8,uVar7 - uVar6);
  }
  else if (uVar7 < uVar6) {
    local_b0 = (void *)((long)local_b8 + uVar7 * 8);
  }
  uVar3 = spvReflectEnumeratePushConstantBlocks(pSVar1,&local_6c,local_b8);
  *(undefined4 *)param_1 = uVar3;
  if (local_6c != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_3,"  ",2);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Push constant blocks: ",0x16);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_6c);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n\n",2);
    if (local_b0 != local_b8) {
      uVar7 = 0;
      do {
        pSVar9 = *(SpvReflectBlockVariable **)((long)local_b8 + uVar7 * 8);
                    /* try { // try from 00ae76a8 to 00ae76ef has its CatchHandler @ 00ae7960 */
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3,"    ",4);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,":",1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
        StreamWritePushConstantsBlock(param_3,pSVar9,param_2,"      ");
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)((long)local_b0 - (long)local_b8 >> 3));
    }
  }
  local_6c = 0;
                    /* try { // try from 00ae7708 to 00ae77ef has its CatchHandler @ 00ae795c */
  uVar3 = spvReflectEnumerateDescriptorBindings(pSVar1,&local_6c,0);
  *(undefined4 *)param_1 = uVar3;
  uVar7 = (ulong)local_6c;
  uVar6 = (long)local_98 - (long)local_a0 >> 3;
  if (uVar6 < uVar7) {
    std::__ndk1::
    vector<SpvReflectDescriptorBinding*,std::__ndk1::allocator<SpvReflectDescriptorBinding*>>::
    __append((vector<SpvReflectDescriptorBinding*,std::__ndk1::allocator<SpvReflectDescriptorBinding*>>
              *)&local_a0,uVar7 - uVar6);
  }
  else if (uVar7 < uVar6) {
    local_98 = (void *)((long)local_a0 + uVar7 * 8);
  }
  uVar3 = spvReflectEnumerateDescriptorBindings(pSVar1,&local_6c,local_a0);
  *(undefined4 *)param_1 = uVar3;
  FUN_00af0460(local_a0,local_98);
  if (local_6c != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_3,"  ",2);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Descriptor bindings: ",0x15);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,local_6c);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n\n",2);
    if (local_98 != local_a0) {
      uVar7 = 0;
      do {
        pSVar10 = *(SpvReflectDescriptorBinding **)((long)local_a0 + uVar7 * 8);
                    /* try { // try from 00ae7854 to 00ae78ef has its CatchHandler @ 00ae796c */
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3,"    ",4);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"Binding",7);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," ",1);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            *(uint *)(pSVar10 + 0x18));
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,".",1);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            *(uint *)(pSVar10 + 0x10));
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,"",0);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\n",1);
        StreamWriteDescriptorBinding(param_3,pSVar10,true,param_2,"      ");
        if (uVar7 < local_6c - 1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_3,"\n\n",2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (ulong)((long)local_98 - (long)local_a0 >> 3));
    }
  }
  if (local_b8 != (void *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


