// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateReg
// Entry Point: 00c3e75c
// Size: 288 bytes
// Signature: undefined __thiscall allocateReg(IR_RegisterSet * this, IR_Type * param_1, char * param_2)


/* IR_RegisterSet::allocateReg(IR_Type*, char const*) */

uint __thiscall IR_RegisterSet::allocateReg(IR_RegisterSet *this,IR_Type *param_1,char *param_2)

{
  char *__s;
  uint uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  RegisterInfo local_80 [8];
  undefined8 local_78;
  size_t local_70;
  void *local_68;
  IR_Type *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)this;
  __s = "";
  if (param_2 != (char *)0x0) {
    __s = param_2;
  }
  local_80[0] = (RegisterInfo)0x1;
  *(uint *)this = uVar1 + 1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)&local_78 + 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00c3e818;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_78 = uVar3 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_00c3e818:
  *(undefined *)((long)__dest + __n) = 0;
  local_60 = param_1;
                    /* try { // try from 00c3e820 to 00c3e82f has its CatchHandler @ 00c3e87c */
  setRegisterDetails(this,uVar1,local_80);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


