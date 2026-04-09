// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureTypeString
// Entry Point: 00c4f15c
// Size: 1512 bytes
// Signature: undefined __thiscall getTextureTypeString(IR_Type * this, IR_TextureDim param_1, IR_Type * param_2, bool param_3, bool param_4, IR_TextureDepthType param_5, IR_LANGUAGE param_6)


/* WARNING: Type propagation algorithm not settling */
/* IR_Type::getTextureTypeString(IR_TextureDim, IR_Type*, bool, bool, IR_TextureDepthType,
   IR_LANGUAGE) */

void __thiscall
IR_Type::getTextureTypeString
          (IR_Type *this,IR_TextureDim param_1,IR_Type *param_2,bool param_3,bool param_4,
          IR_TextureDepthType param_5,IR_LANGUAGE param_6)

{
  long lVar1;
  size_t sVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *in_x8;
  char *pcVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_f8;
  size_t local_f0;
  void *local_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_5 == 2) {
    pcVar5 = (&PTR_s_Texture1D_00fee5c0)[((ulong)param_2 & 1) * 7 + ((ulong)this & 0xffffffff)];
    sVar2 = strlen(pcVar5);
    if (0xffffffffffffffef < sVar2) {
LAB_00c4f730:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      pvVar6 = (void *)((ulong)&local_e0 | 1);
      local_e0 = CONCAT71(local_e0._1_7_,(char)((int)sVar2 << 1));
      if (sVar2 != 0) goto LAB_00c4f430;
    }
    else {
      uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_e0 = uVar7 | 1;
      uStack_d8 = sVar2;
      local_d0 = pvVar6;
LAB_00c4f430:
      memcpy(pvVar6,pcVar5,sVar2);
    }
    *(undefined *)((long)pvVar6 + sVar2) = 0;
                    /* try { // try from 00c4f444 to 00c4f44f has its CatchHandler @ 00c4f870 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_e0);
    local_b0 = (void *)puVar3[2];
    uStack_b8 = puVar3[1];
    local_c0 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f468 to 00c4f477 has its CatchHandler @ 00c4f86c */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0);
    local_90 = (void *)puVar3[2];
    uStack_98 = puVar3[1];
    local_a0 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f490 to 00c4f4a3 has its CatchHandler @ 00c4f868 */
    getTypeString(param_1);
    pvVar6 = (void *)((ulong)&local_f8 | 1);
    if ((local_f8 & 1) != 0) {
      pvVar6 = local_e8;
    }
                    /* try { // try from 00c4f4c0 to 00c4f4c7 has its CatchHandler @ 00c4f800 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pvVar6);
    local_70 = (void *)puVar3[2];
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f4e0 to 00c4f4ef has its CatchHandler @ 00c4f7fc */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_80);
LAB_00c4f4f0:
    uVar9 = puVar4[1];
    uVar8 = *puVar4;
    in_x8[2] = puVar4[2];
    in_x8[1] = uVar9;
    *in_x8 = uVar8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    pvVar6 = local_d0;
    uVar7 = local_e0;
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
      pvVar6 = local_d0;
      uVar7 = local_e0;
    }
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 0) {
        *(undefined2 *)in_x8 = 0;
        goto LAB_00c4f57c;
      }
      pcVar5 = (&PTR_s_Texture1D_00fee550)[((ulong)param_2 & 1) * 7 + ((ulong)this & 0xffffffff)];
      sVar2 = strlen(pcVar5);
      if (0xffffffffffffffef < sVar2) goto LAB_00c4f730;
      if (sVar2 < 0x17) {
        pvVar6 = (void *)((ulong)&local_e0 | 1);
        local_e0 = CONCAT71(local_e0._1_7_,(char)((int)sVar2 << 1));
        if (sVar2 != 0) goto LAB_00c4f34c;
      }
      else {
        uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = operator_new(uVar7);
        local_e0 = uVar7 | 1;
        uStack_d8 = sVar2;
        local_d0 = pvVar6;
LAB_00c4f34c:
        memcpy(pvVar6,pcVar5,sVar2);
      }
      *(undefined *)((long)pvVar6 + sVar2) = 0;
                    /* try { // try from 00c4f360 to 00c4f36b has its CatchHandler @ 00c4f8b4 */
      puVar3 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_e0);
      local_b0 = (void *)puVar3[2];
      uStack_b8 = puVar3[1];
      local_c0 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
                    /* try { // try from 00c4f384 to 00c4f393 has its CatchHandler @ 00c4f8a4 */
      puVar3 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_c0);
      local_90 = (void *)puVar3[2];
      uStack_98 = puVar3[1];
      local_a0 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
                    /* try { // try from 00c4f3ac to 00c4f3bf has its CatchHandler @ 00c4f874 */
      getTypeString(param_1);
      pvVar6 = (void *)((ulong)&local_f8 | 1);
      if ((local_f8 & 1) != 0) {
        pvVar6 = local_e8;
      }
                    /* try { // try from 00c4f3dc to 00c4f3e3 has its CatchHandler @ 00c4f848 */
      puVar3 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append((char *)&local_a0,(ulong)pvVar6);
      local_70 = (void *)puVar3[2];
      uStack_78 = puVar3[1];
      local_80 = *puVar3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
                    /* try { // try from 00c4f3fc to 00c4f40b has its CatchHandler @ 00c4f804 */
      puVar4 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)&local_80);
      goto LAB_00c4f4f0;
    }
    if ((int)this == 6) {
      getTypeString(param_1);
      goto LAB_00c4f57c;
    }
    pcVar5 = (&PTR_s_texture1d_00fee630)[(ulong)param_4 * 7 + ((ulong)this & 0xffffffff)];
    sVar2 = strlen(pcVar5);
    if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      pvVar6 = (void *)((ulong)&local_f8 | 1);
      local_f8 = CONCAT71(local_f8._1_7_,(char)((int)sVar2 << 1));
      if (sVar2 != 0) goto LAB_00c4f5cc;
    }
    else {
      uVar7 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar7);
      local_f8 = uVar7 | 1;
      local_f0 = sVar2;
      local_e8 = pvVar6;
LAB_00c4f5cc:
      memcpy(pvVar6,pcVar5,sVar2);
    }
    *(undefined *)((long)pvVar6 + sVar2) = 0;
                    /* try { // try from 00c4f5e0 to 00c4f5eb has its CatchHandler @ 00c4f7e8 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_f8);
    local_d0 = (void *)puVar3[2];
    uStack_d8 = puVar3[1];
    local_e0 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f604 to 00c4f613 has its CatchHandler @ 00c4f7d8 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_e0);
    local_b0 = (void *)puVar3[2];
    uStack_b8 = puVar3[1];
    local_c0 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f650 to 00c4f657 has its CatchHandler @ 00c4f7a8 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0);
    local_90 = (void *)puVar3[2];
    uStack_98 = puVar3[1];
    local_a0 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f670 to 00c4f67b has its CatchHandler @ 00c4f788 */
    puVar3 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0);
    local_70 = (void *)puVar3[2];
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 00c4f694 to 00c4f6a3 has its CatchHandler @ 00c4f744 */
    puVar4 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_80);
    uVar9 = puVar4[1];
    uVar8 = *puVar4;
    in_x8[2] = puVar4[2];
    in_x8[1] = uVar9;
    *in_x8 = uVar8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    pvVar6 = local_e8;
    uVar7 = local_f8;
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
      pvVar6 = local_e8;
      uVar7 = local_f8;
    }
  }
  if ((uVar7 & 1) != 0) {
    operator_delete(pvVar6);
  }
LAB_00c4f57c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


