// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeAlternateName
// Entry Point: 00c33ca0
// Size: 260 bytes
// Signature: undefined __thiscall makeAlternateName(IR_HllConvertUtil * this, vector * param_1, char * param_2)


/* IR_HllConvertUtil::makeAlternateName(std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> > const&, char const*) */

void __thiscall
IR_HllConvertUtil::makeAlternateName(IR_HllConvertUtil *this,vector *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  int iVar3;
  char acStack_458 [1024];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = 2;
  do {
    FUN_00c2f578(acStack_458,0x400,"%s_%u",param_1,iVar3);
    uVar2 = findName((vector *)this,acStack_458);
    iVar3 = iVar3 + 1;
  } while ((uVar2 & 1) != 0);
  __n = strlen(acStack_458);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c33d68;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,acStack_458,__n);
LAB_00c33d68:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


