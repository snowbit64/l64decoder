// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTriggerFromScript
// Entry Point: 008764a0
// Size: 336 bytes
// Signature: undefined __thiscall setTriggerFromScript(AnimalCompanionManager * this, uint param_1, void * param_2, char * param_3)


/* AnimalCompanionManager::setTriggerFromScript(unsigned int, void*, char const*) */

void __thiscall
AnimalCompanionManager::setTriggerFromScript
          (AnimalCompanionManager *this,uint param_1,void *param_2,char *param_3)

{
  long lVar1;
  EngineManager *this_00;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)param_1;
  lVar4 = *(long *)(this + 0xb0);
  if (*(int *)(lVar4 + (ulong)param_1 * 0x58 + 0x4c) != 0) {
    this_00 = (EngineManager *)EngineManager::getInstance();
    lVar4 = *(long *)(this + 0xb0) + uVar3 * 0x58;
    EngineManager::removeScriptTriggerCallback
              (this_00,*(TransformGroup **)(lVar4 + 0x20),*(uint *)(lVar4 + 0x4c));
    lVar4 = *(long *)(this + 0xb0);
  }
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00876574;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_70 = uVar2 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_00876574:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00876588 to 0087658f has its CatchHandler @ 008765f0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (lVar4 + uVar3 * 0x58 + 0x30),(basic_string *)&local_70);
  lVar4 = lVar4 + uVar3 * 0x58;
  *(void **)(lVar4 + 0x28) = param_2;
  *(undefined *)(lVar4 + 0x48) = 1;
  *(undefined4 *)(lVar4 + 0x4c) = 0;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


