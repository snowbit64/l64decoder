// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luau_compile
// Entry Point: 00ece974
// Size: 368 bytes
// Signature: undefined __cdecl luau_compile(char * param_1, ulong param_2, lua_CompileOptions * param_3, ulong * param_4)


/* luau_compile(char const*, unsigned long, lua_CompileOptions*, unsigned long*) */

void * luau_compile(char *param_1,ulong param_2,lua_CompileOptions *param_3,ulong *param_4)

{
  size_t __size;
  void *__src;
  long lVar1;
  BytecodeEncoder *in_x4;
  void *pvVar2;
  ulong uVar3;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  ulong local_98;
  void *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0x100000001;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (param_3 != (lua_CompileOptions *)0x0) {
    uStack_68 = *(ulong *)(param_3 + 8);
    local_70 = *(undefined8 *)param_3;
    local_58 = *(undefined8 *)(param_3 + 0x18);
    local_60 = *(undefined8 *)(param_3 + 0x10);
    local_50 = *(undefined8 *)(param_3 + 0x20);
  }
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 0x17) {
    pvVar2 = (void *)((ulong)&local_a0 | 1);
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)param_2 << 1));
    if (param_2 == 0) goto LAB_00ecea24;
  }
  else {
    uVar3 = param_2 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar3);
    local_a0 = uVar3 | 1;
    local_98 = param_2;
    local_90 = pvVar2;
  }
  memcpy(pvVar2,param_1,param_2);
LAB_00ecea24:
  *(undefined *)((long)pvVar2 + param_2) = 0;
  local_a8[0] = 0x101;
                    /* try { // try from 00ecea30 to 00ecea47 has its CatchHandler @ 00eceae4 */
  Luau::compile((Luau *)&local_a0,(basic_string *)&local_70,(CompileOptions *)local_a8,
                (ParseOptions *)0x0,in_x4);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  __size = (ulong)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    __size = local_80;
  }
  pvVar2 = malloc(__size);
  if (pvVar2 != (void *)0x0) {
    __src = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      __src = local_78;
    }
    memcpy(pvVar2,__src,__size);
    *param_4 = __size;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar2;
}


