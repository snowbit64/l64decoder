// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDebugRemark
// Entry Point: 00efac44
// Size: 476 bytes
// Signature: undefined __cdecl addDebugRemark(char * param_1, ...)


/* Luau::BytecodeBuilder::addDebugRemark(char const*, ...) */

void Luau::BytecodeBuilder::addDebugRemark(char *param_1,...)

{
  ulong uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  void *__dest;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  void *__src;
  size_t __n;
  undefined4 uVar11;
  long lVar12;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  
  lVar6 = tpidr_el0;
  lVar7 = *(long *)(lVar6 + 0x28);
  local_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  if (((byte)param_1[0x260] >> 4 & 1) != 0) {
    puStack_a0 = &local_e0;
    ppuStack_a8 = &local_b0;
    bVar5 = param_1[0x228];
    uVar4 = *(uint *)(param_1 + 0x230);
    uStack_98 = 0xffffff80ffffffd0;
    local_b0 = (undefined *)register0x00000008;
    vformatAppend((basic_string *)(param_1 + 0x228),in_x1,(int)&stack0xffffffffffffffa0 - 0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back((char)(param_1 + 0x228));
    puVar9 = *(undefined4 **)(param_1 + 0x218);
    uVar3 = (uint)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar3 = uVar4;
    }
    uVar11 = (undefined4)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 2);
    if (puVar9 < *(undefined4 **)(param_1 + 0x220)) {
      *puVar9 = uVar11;
      puVar9[1] = uVar3;
      *(undefined4 **)(param_1 + 0x218) = puVar9 + 2;
    }
    else {
      __src = *(void **)(param_1 + 0x210);
      __n = (long)puVar9 - (long)__src;
      lVar12 = (long)__n >> 3;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)*(undefined4 **)(param_1 + 0x220) - (long)__src;
      uVar10 = (long)uVar8 >> 2;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
        puVar9 = (undefined4 *)(lVar12 * 8);
        pvVar2 = (void *)0x0;
        *puVar9 = uVar11;
        puVar9[1] = uVar3;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 3);
        puVar9 = (undefined4 *)((long)__dest + lVar12 * 8);
        pvVar2 = (void *)((long)__dest + uVar1 * 8);
        *puVar9 = uVar11;
        puVar9[1] = uVar3;
      }
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(param_1 + 0x210) = __dest;
      *(undefined4 **)(param_1 + 0x218) = puVar9 + 2;
      *(void **)(param_1 + 0x220) = pvVar2;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


