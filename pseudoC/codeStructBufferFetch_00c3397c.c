// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeStructBufferFetch
// Entry Point: 00c3397c
// Size: 392 bytes
// Signature: undefined __thiscall codeStructBufferFetch(IR_HllConvertUtil * this, ConversionContext * param_1, char * param_2, char * param_3, uint param_4, char * param_5)


/* IR_HllConvertUtil::codeStructBufferFetch(IR_HllConvertUtil::ConversionContext&, char const*, char
   const*, unsigned int, char const*) */

void __thiscall
IR_HllConvertUtil::codeStructBufferFetch
          (IR_HllConvertUtil *this,ConversionContext *param_1,char *param_2,char *param_3,
          uint param_4,char *param_5)

{
  long lVar1;
  int iVar2;
  size_t __n;
  char *pcVar3;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar4;
  char acStack_260 [256];
  undefined auStack_160 [256];
  undefined local_60 [8];
  long local_58;
  
  pcVar3 = (char *)(ulong)param_4;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((pcVar3 == (char *)0x0) || (iVar2 = strcmp(pcVar3,"xyzw"), iVar2 == 0)) {
    local_60[0] = 0;
    if ((int)param_3 == 0) goto LAB_00c339f0;
LAB_00c33a0c:
    FUN_00c2f578(auStack_160,0x100,"(%s) + %u",param_2,(ulong)param_3 & 0xffffffff);
  }
  else {
    FUN_00c2f578(local_60,8,&DAT_004ee02d,pcVar3);
    if ((int)param_3 != 0) goto LAB_00c33a0c;
LAB_00c339f0:
    __strcpy_chk(auStack_160,param_2,0x100);
  }
  if (*(int *)(this + 0x10) - 1U < 6) {
    pcVar3 = &DAT_0053e114 + *(int *)(&DAT_0053e114 + (long)(int)(*(int *)(this + 0x10) - 1U) * 4);
  }
  else {
    pcVar3 = "structBufferFetch(%s, %s)%s";
  }
  FUN_00c2f578(acStack_260,0x100,pcVar3,param_1,auStack_160,local_60);
  __n = strlen(acStack_260);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c33ac8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
  }
  memcpy(__dest,acStack_260,__n);
LAB_00c33ac8:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


