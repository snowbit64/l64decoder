// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: logDebug
// Entry Point: 009b72f4
// Size: 456 bytes
// Signature: undefined __cdecl logDebug(char * param_1, ...)


/* logDebug(char const*, ...) */

void logDebug(char *param_1,...)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__src;
  int iVar5;
  void *__dest;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar6;
  size_t __n;
  undefined auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long local_68;
  
  __src = DAT_02111980;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_e8 = in_x1;
  uStack_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  if (DAT_02111988 < DAT_02111990) {
    DAT_02111988[0xd] = 0;
    DAT_02111988[0xc] = 0;
    DAT_02111988[0xf] = 0;
    DAT_02111988[0xe] = 0;
    DAT_02111988[9] = 0;
    DAT_02111988[8] = 0;
    DAT_02111988[0xb] = 0;
    DAT_02111988[10] = 0;
    DAT_02111988[5] = 0;
    DAT_02111988[4] = 0;
    DAT_02111988[7] = 0;
    DAT_02111988[6] = 0;
    DAT_02111988[1] = 0;
    *DAT_02111988 = 0;
    DAT_02111988[3] = 0;
    DAT_02111988[2] = 0;
    DAT_02111988 = DAT_02111988 + 0x10;
  }
  else {
    __n = (long)DAT_02111988 - (long)DAT_02111980;
    uVar1 = ((long)__n >> 7) + 1;
    if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar6 = (long)DAT_02111990 - (long)DAT_02111980 >> 6;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffff7f < (ulong)((long)DAT_02111990 - (long)DAT_02111980)) {
      uVar1 = 0x1ffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 7);
    }
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 7) * 0x80);
    puVar3 = (undefined8 *)((long)__dest + uVar1 * 0x80);
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    DAT_02111980 = __dest;
    DAT_02111988 = puVar2 + 0x10;
    DAT_02111990 = puVar3;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  puStack_88 = &stack0xffffffffffffff50;
  puStack_80 = auStack_f0;
  uStack_78 = 0xffffff80ffffffc8;
  local_90 = (undefined *)register0x00000008;
  iVar5 = vsnprintf((char *)(DAT_02111988 + -0x10),0x80,param_1,&local_90);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


