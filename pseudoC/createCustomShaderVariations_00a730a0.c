// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCustomShaderVariations
// Entry Point: 00a730a0
// Size: 480 bytes
// Signature: undefined __thiscall createCustomShaderVariations(TerrainLayerTransformGroup * this, CustomShader * param_1, uint param_2)


/* TerrainLayerTransformGroup::createCustomShaderVariations(CustomShader*, unsigned int) */

void __thiscall
TerrainLayerTransformGroup::createCustomShaderVariations
          (TerrainLayerTransformGroup *this,CustomShader *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_d8;
  undefined8 uStack_d0;
  char *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined auStack_a8 [64];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = (undefined8 *)0x0;
                    /* try { // try from 00a730e0 to 00a730e7 has its CatchHandler @ 00a73280 */
  puVar8 = (undefined8 *)operator_new(0x30);
  local_b8 = puVar8 + 6;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  local_c0 = puVar8;
  local_b0 = local_b8;
                    /* try { // try from 00a73104 to 00a7311f has its CatchHandler @ 00a73294 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)puVar8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(puVar8 + 3));
  if (7 < param_2) {
    param_2 = 8;
  }
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  if (param_2 == 0) {
    *(uint *)(this + 0x628) = uVar3 - 1;
    puVar5 = puVar8;
    puVar9 = local_b8;
  }
  else {
    uVar1 = uVar3;
    if (uVar3 < 3) {
      uVar1 = 2;
    }
    uVar11 = 1;
    do {
      uVar10 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = (char *)0x0;
      do {
        if ((uVar11 >> (uVar10 & 0x3f) & 1) != 0) {
                    /* try { // try from 00a73190 to 00a731a7 has its CatchHandler @ 00a732a0 */
          FUN_00a74e5c(auStack_a8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_d8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_2);
      pcVar2 = (char *)((ulong)&local_d8 | 1);
      if ((local_d8 & 1) != 0) {
        pcVar2 = local_c8;
      }
                    /* try { // try from 00a731bc to 00a731cb has its CatchHandler @ 00a7329c */
      uVar7 = CustomShader::addVariation(param_1,"",pcVar2,(vector *)&local_c0);
      *(undefined4 *)(this + uVar11 * 4 + 0x228) = uVar7;
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
    *(uint *)(this + 0x628) = uVar3 - 1;
    puVar5 = local_c0;
    puVar9 = local_b8;
    puVar8 = local_c0;
    if (local_c0 == (undefined8 *)0x0) goto LAB_00a7324c;
  }
  while (puVar6 = puVar9, puVar6 != puVar8) {
    puVar9 = puVar6 + -3;
    puVar5 = local_c0;
    if ((*(byte *)puVar9 & 1) != 0) {
      operator_delete((void *)puVar6[-1]);
      puVar5 = local_c0;
    }
  }
  local_b8 = puVar8;
  operator_delete(puVar5);
LAB_00a7324c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


