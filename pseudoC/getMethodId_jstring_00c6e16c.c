// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMethodId<_jstring*>
// Entry Point: 00c6e16c
// Size: 348 bytes
// Signature: _jmethodID * __thiscall getMethodId<_jstring*>(AndroidJNICall * this, _JNIEnv * param_1, char * param_2, _jstring * param_3)


/* _jmethodID* AndroidJNICall::getMethodId<_jstring*>(_JNIEnv*, char const*, _jstring*) */

_jmethodID * __thiscall
AndroidJNICall::getMethodId<_jstring*>
          (AndroidJNICall *this,_JNIEnv *param_1,char *param_2,_jstring *param_3)

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
  byte local_b8 [16];
  void *local_a8;
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
                    /* try { // try from 00c6e1a8 to 00c6e1b3 has its CatchHandler @ 00c6e324 */
  paramsToSig<_jstring*>(param_3);
                    /* try { // try from 00c6e1b4 to 00c6e1c7 has its CatchHandler @ 00c6e304 */
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((ulong)local_b8,(char *)0x0);
  local_90 = (void *)puVar7[2];
  uStack_98 = puVar7[1];
  local_a0 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
                    /* try { // try from 00c6e1e0 to 00c6e1ef has its CatchHandler @ 00c6e2cc */
  puVar8 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((char *)&local_a0);
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
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  pvVar1 = (void *)((ulong)&local_80 | 1);
  if ((bVar4 & 1) != 0) {
    pvVar1 = pvVar3;
  }
                    /* try { // try from 00c6e274 to 00c6e27f has its CatchHandler @ 00c6e2c8 */
  p_Var9 = (_jmethodID *)
           (**(code **)(*(long *)param_1 + 0x108))
                     (param_1,*(undefined8 *)(this + 0x50),param_2,pvVar1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return p_Var9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


