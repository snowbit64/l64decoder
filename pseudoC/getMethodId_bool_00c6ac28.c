// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMethodId<bool>
// Entry Point: 00c6ac28
// Size: 460 bytes
// Signature: _jmethodID * __thiscall getMethodId<bool>(AndroidJNICall * this, bool param_1, _JNIEnv * param_2, char * param_3)


/* WARNING: Type propagation algorithm not settling */
/* _jmethodID* AndroidJNICall::getMethodId<bool>(bool, _JNIEnv*, char const*) */

_jmethodID * __thiscall
AndroidJNICall::getMethodId<bool>(AndroidJNICall *this,bool param_1,_JNIEnv *param_2,char *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  byte bVar4;
  undefined uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  _jmethodID *p_Var9;
  ushort local_f0;
  undefined local_ee;
  void *local_e0;
  ushort local_d8 [8];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_80;
  undefined uStack_7f;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined6 uStack_76;
  void *local_70;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_80 = 0;
  uStack_7f = 0;
  uStack_7e = 0;
  local_78 = 0;
  uStack_76 = 0;
  local_70 = (void *)0x0;
  local_d8[0] = 0;
                    /* try { // try from 00c6ac68 to 00c6ac7b has its CatchHandler @ 00c6ae7c */
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_d8,(char *)0x0);
  local_b0 = (void *)puVar7[2];
  uStack_b8 = puVar7[1];
  local_c0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
                    /* try { // try from 00c6ac94 to 00c6aca3 has its CatchHandler @ 00c6ae5c */
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((char *)&local_c0);
  local_90 = (void *)puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  local_f0 = 0x5a02;
  local_ee = 0;
                    /* try { // try from 00c6acd0 to 00c6acdb has its CatchHandler @ 00c6ae04 */
  puVar8 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_a0,(ulong)&local_f0 | 1);
  uVar2 = puVar8[1];
  pvVar3 = (void *)puVar8[2];
  bVar4 = *(byte *)puVar8;
  uVar5 = *(undefined *)((long)puVar8 + 1);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  local_68 = (undefined6)*(undefined8 *)((long)puVar8 + 2);
  uStack_62 = (undefined2)uVar2;
  uStack_60 = (undefined6)((ulong)uVar2 >> 0x10);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  uStack_7e = local_68;
  local_78 = uStack_62;
  uStack_76 = uStack_60;
  local_80 = bVar4;
  uStack_7f = uVar5;
  local_70 = pvVar3;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  pvVar1 = (void *)((ulong)&local_80 | 1);
  if ((bVar4 & 1) != 0) {
    pvVar1 = pvVar3;
  }
                    /* try { // try from 00c6ad6c to 00c6ad77 has its CatchHandler @ 00c6adf4 */
  p_Var9 = (_jmethodID *)
           (**(code **)(*(long *)param_2 + 0x108))
                     (param_2,*(undefined8 *)(this + 0x50),param_3,pvVar1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p_Var9;
}


