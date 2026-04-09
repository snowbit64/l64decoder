// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMatrixTypeString
// Entry Point: 00c4f000
// Size: 348 bytes
// Signature: undefined __thiscall getMatrixTypeString(IR_Type * this, GsTBasicType param_1, uint param_2, uint param_3, IR_LANGUAGE param_4)


/* IR_Type::getMatrixTypeString(GsTBasicType, unsigned int, unsigned int, IR_LANGUAGE) */

void __thiscall
IR_Type::getMatrixTypeString
          (IR_Type *this,GsTBasicType param_1,uint param_2,uint param_3,IR_LANGUAGE param_4)

{
  long lVar1;
  size_t __n;
  uint uVar2;
  char *pcVar3;
  ulong *in_x8;
  undefined **ppuVar4;
  undefined *__dest;
  ulong uVar5;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = param_2;
  if ((param_1 < 2) || (uVar2 = param_1, param_2 < 2)) {
    getVectorTypeString(this,uVar2,param_3,param_3);
    goto LAB_00c4f128;
  }
  uVar2 = (uint)this;
  if (param_3 == 0) {
    if (uVar2 < 10) {
      ppuVar4 = &PTR_DAT_00fee6f0;
      goto LAB_00c4f0a4;
    }
LAB_00c4f0ac:
    pcVar3 = "unknown type";
  }
  else {
    if (param_3 != 2) {
      if (uVar2 < 10) {
        ppuVar4 = &PTR_DAT_00fee740;
        goto LAB_00c4f0a4;
      }
      goto LAB_00c4f0ac;
    }
    if (9 < uVar2) goto LAB_00c4f0ac;
    ppuVar4 = &PTR_DAT_00fee6a0;
LAB_00c4f0a4:
    pcVar3 = ppuVar4[(int)uVar2];
  }
  FUN_00c4ef5c(acStack_148,0x100,"%s%ux%u",pcVar3);
  __n = strlen(acStack_148);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00c4f114;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar5);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
LAB_00c4f114:
    memcpy(__dest,acStack_148,__n);
  }
  __dest[__n] = 0;
LAB_00c4f128:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


