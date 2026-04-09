// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeShaderPrg
// Entry Point: 00bf1b58
// Size: 704 bytes
// Signature: undefined __thiscall deserializeShaderPrg(ShaderManager * this, uchar * param_1, ShaderHash * param_2, basic_string * param_3, ShaderHash * param_4, basic_string * param_5, ShaderHash * param_6, basic_string * param_7, vector * param_8)


/* ShaderManager::deserializeShaderPrg(unsigned char*, CompiledShaderArchive::ShaderHash&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   CompiledShaderArchive::ShaderHash&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   CompiledShaderArchive::ShaderHash&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout> >&) */

void __thiscall
ShaderManager::deserializeShaderPrg
          (ShaderManager *this,uchar *param_1,ShaderHash *param_2,basic_string *param_3,
          ShaderHash *param_4,basic_string *param_5,ShaderHash *param_6,basic_string *param_7,
          vector *param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  basic_string *pbVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  basic_string *pbVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  undefined8 uVar17;
  ShaderStructLayout local_a8 [16];
  void *local_98;
  undefined2 local_90;
  byte *local_88;
  byte *local_80;
  basic_string local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar17 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_2 = uVar17;
  uVar4 = *(uint *)(param_1 + 0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_3,(ulong)(param_1 + 0x14));
  puVar1 = (undefined8 *)(param_1 + 0x14 + uVar4);
  uVar17 = *puVar1;
  *(undefined8 *)(param_4 + 8) = puVar1[1];
  *(undefined8 *)param_4 = uVar17;
  uVar4 = *(uint *)(puVar1 + 2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_5,(ulong)(uchar *)((long)puVar1 + 0x14U));
  puVar1 = (undefined8 *)((uchar *)((long)puVar1 + 0x14U) + uVar4);
  uVar17 = *puVar1;
  *(undefined8 *)(param_6 + 8) = puVar1[1];
  *(undefined8 *)param_6 = uVar17;
  uVar4 = *(uint *)(puVar1 + 2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_7,(ulong)(uchar *)((long)puVar1 + 0x14U));
  pbVar2 = *(byte **)param_8;
  piVar12 = (int *)((uchar *)((long)puVar1 + 0x14U) + uVar4);
  pbVar14 = *(byte **)(param_8 + 8);
  while (pbVar8 = pbVar14, pbVar8 != pbVar2) {
    pbVar13 = *(byte **)(pbVar8 + -0x20);
    pbVar14 = pbVar8 + -0x40;
    if (pbVar13 != (byte *)0x0) {
      pbVar11 = *(byte **)(pbVar8 + -0x18);
      pbVar15 = pbVar13;
      if (pbVar11 != pbVar13) {
        do {
          pbVar15 = pbVar11 + -0x20;
          if ((*pbVar15 & 1) != 0) {
            operator_delete(*(void **)(pbVar11 + -0x10));
          }
          pbVar11 = pbVar15;
        } while (pbVar15 != pbVar13);
        pbVar15 = *(byte **)(pbVar8 + -0x20);
      }
      *(byte **)(pbVar8 + -0x18) = pbVar13;
      operator_delete(pbVar15);
    }
    if ((*pbVar14 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x30));
    }
  }
  *(byte **)(param_8 + 8) = pbVar2;
  iVar5 = *piVar12;
  if (iVar5 != 0) {
    iVar16 = 0;
    piVar12 = piVar12 + 1;
    do {
      ShaderStructLayout::ShaderStructLayout(local_a8);
                    /* try { // try from 00bf1cb8 to 00bf1cc3 has its CatchHandler @ 00bf1e2c */
      uVar9 = ShaderStructLayout::deserialize(local_a8,(uchar *)piVar12);
      pbVar3 = *(basic_string **)(param_8 + 8);
      if (pbVar3 == *(basic_string **)(param_8 + 0x10)) {
                    /* try { // try from 00bf1d68 to 00bf1d73 has its CatchHandler @ 00bf1e2c */
        std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
        __push_back_slow_path<ShaderStructLayout_const&>
                  ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)param_8,
                   local_a8);
      }
      else {
                    /* try { // try from 00bf1cd4 to 00bf1cdf has its CatchHandler @ 00bf1e24 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar3);
        *(undefined8 *)(pbVar3 + 8) = 0;
        *(undefined2 *)(pbVar3 + 6) = local_90;
        *(undefined8 *)(pbVar3 + 10) = 0;
        *(undefined8 *)(pbVar3 + 0xc) = 0;
        uVar6 = (long)local_80 - (long)local_88;
        if (uVar6 != 0) {
          if ((long)uVar6 < 0) {
                    /* try { // try from 00bf1e0c to 00bf1e13 has its CatchHandler @ 00bf1e1c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
                    /* try { // try from 00bf1d04 to 00bf1d0b has its CatchHandler @ 00bf1e18 */
          pbVar10 = (basic_string *)operator_new(uVar6);
          pbVar14 = local_80;
          *(basic_string **)(pbVar3 + 8) = pbVar10;
          *(basic_string **)(pbVar3 + 10) = pbVar10;
          *(basic_string **)(pbVar3 + 0xc) = pbVar10 + ((long)uVar6 >> 5) * 8;
          for (pbVar2 = local_88; pbVar2 != pbVar14; pbVar2 = pbVar2 + 0x20) {
                    /* try { // try from 00bf1d2c to 00bf1d37 has its CatchHandler @ 00bf1e34 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar10);
            *(undefined8 *)(pbVar10 + 6) = *(undefined8 *)(pbVar2 + 0x18);
            pbVar10 = pbVar10 + 8;
          }
          *(basic_string **)(pbVar3 + 10) = pbVar10;
        }
        pbVar3[0xe] = local_70;
        *(basic_string **)(param_8 + 8) = pbVar3 + 0x10;
      }
      pbVar2 = local_88;
      pbVar14 = local_80;
      if (local_88 != (byte *)0x0) {
        while (pbVar8 = pbVar14, pbVar8 != pbVar2) {
          pbVar14 = pbVar8 + -0x20;
          if ((*pbVar14 & 1) != 0) {
            operator_delete(*(void **)(pbVar8 + -0x10));
          }
        }
        local_80 = pbVar2;
        operator_delete(local_88);
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      piVar12 = (int *)((long)piVar12 + (uVar9 & 0xffffffff));
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar5);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


