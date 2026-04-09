// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair<unsigned_int&,unsigned_int&,void*&,char_const*&,void*&,bool&>
// Entry Point: 00754d44
// Size: 212 bytes
// Signature: undefined __thiscall pair<unsigned_int&,unsigned_int&,void*&,char_const*&,void*&,bool&>(pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> * this, piecewise_construct_t param_1, tuple param_2, tuple param_3)


/* std::__ndk1::pair<unsigned int const, EngineManager::TriggerScriptCallbackInfo>::pair<unsigned
   int&, unsigned int&, void*&, char const*&, void*&, bool&>(std::__ndk1::piecewise_construct_t,
   std::__ndk1::tuple<unsigned int&>, std::__ndk1::tuple<unsigned int&, void*&, char const*&,
   void*&, bool&>) */

void __thiscall
std::__ndk1::pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo>::
pair<unsigned_int&,unsigned_int&,void*&,char_const*&,void*&,bool&>
          (pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> *this,
          undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> pVar5;
  size_t __n;
  pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> *__dest;
  char *__s;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined4 *)*param_4;
  puVar3 = (undefined8 *)param_4[1];
  ppcVar2 = (char **)param_4[2];
  puVar4 = (undefined8 *)param_4[3];
  *(undefined4 *)this = *param_3;
  __s = *ppcVar2;
  pVar5 = *(pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> *)param_4[4];
  *(undefined4 *)(this + 8) = *puVar1;
  uVar7 = *puVar3;
  uVar8 = *puVar4;
  this[0xc] = pVar5;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 0x11;
    this[0x10] = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00754df0;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> *)
             operator_new(uVar6);
    *(size_t *)(this + 0x18) = __n;
    *(pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo> **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar6 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_00754df0:
  __dest[__n] = (pair<unsigned_int_const,EngineManager::TriggerScriptCallbackInfo>)0x0;
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x30) = uVar8;
  return;
}


