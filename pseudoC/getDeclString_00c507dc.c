// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDeclString
// Entry Point: 00c507dc
// Size: 532 bytes
// Signature: undefined __thiscall getDeclString(IR_Type * this, char * param_1, IR_LANGUAGE param_2)


/* IR_Type::getDeclString(char const*, IR_LANGUAGE) const */

void __thiscall IR_Type::getDeclString(IR_Type *this,char *param_1,IR_LANGUAGE param_2)

{
  void *pvVar1;
  long lVar2;
  size_t __n;
  ulong *in_x8;
  undefined *puVar3;
  ulong uVar4;
  byte local_160 [16];
  void *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (8 < *(uint *)this) {
    puVar3 = (undefined *)((long)in_x8 + 1);
    *(undefined *)in_x8 = 0;
    goto LAB_00c509b0;
  }
  switch(*(uint *)this) {
  default:
    getTypeString((IR_LANGUAGE)this);
    pvVar1 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar1 = local_150;
    }
                    /* try { // try from 00c50858 to 00c5086f has its CatchHandler @ 00c509fc */
    FUN_00c4ef5c(acStack_148,0x100,"%s %s",pvVar1,param_1);
    break;
  case 4:
    getTypeString((IR_LANGUAGE)*(undefined8 *)(this + 8));
    pvVar1 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar1 = local_150;
    }
                    /* try { // try from 00c508e4 to 00c508fb has its CatchHandler @ 00c509f4 */
    FUN_00c4ef5c(acStack_148,0x100,"%s %s[%u]",pvVar1,param_1,*(undefined4 *)(this + 0x10));
    break;
  case 5:
    getTypeString((IR_LANGUAGE)*(undefined8 *)(this + 8));
    pvVar1 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar1 = local_150;
    }
                    /* try { // try from 00c50928 to 00c5093f has its CatchHandler @ 00c509f0 */
    FUN_00c4ef5c(acStack_148,0x100,"%s %s",pvVar1,param_1);
    break;
  case 7:
  case 8:
    getTypeString((IR_LANGUAGE)this);
    pvVar1 = (void *)((ulong)local_160 | 1);
    if ((local_160[0] & 1) != 0) {
      pvVar1 = local_150;
    }
                    /* try { // try from 00c5089c to 00c508b3 has its CatchHandler @ 00c509f8 */
    FUN_00c4ef5c(acStack_148,0x100,"%s %s",pvVar1,param_1);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  __n = strlen(acStack_148);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    puVar3 = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00c5099c;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined *)operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)puVar3;
    *in_x8 = uVar4 | 1;
LAB_00c5099c:
    memcpy(puVar3,acStack_148,__n);
  }
  puVar3 = puVar3 + __n;
LAB_00c509b0:
  *puVar3 = 0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


