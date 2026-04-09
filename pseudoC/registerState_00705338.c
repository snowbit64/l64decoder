// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerState
// Entry Point: 00705338
// Size: 220 bytes
// Signature: undefined __thiscall registerState(AnimalAnimationSystem * this, uint param_1, char * param_2, bool param_3, bool param_4)


/* AnimalAnimationSystem::registerState(unsigned int, char const*, bool, bool) */

void __thiscall
AnimalAnimationSystem::registerState
          (AnimalAnimationSystem *this,uint param_1,char *param_2,bool param_3,bool param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint local_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined2 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_6c = 0;
  local_70 = param_1;
                    /* try { // try from 0070537c to 00705387 has its CatchHandler @ 00705420 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_68);
  puVar1 = *(undefined8 **)(this + 8);
  local_50 = CONCAT11(param_4,param_3);
  if (puVar1 == *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 007053cc to 007053d7 has its CatchHandler @ 00705420 */
    std::__ndk1::
    vector<AnimalAnimationSystem::AnimationState,std::__ndk1::allocator<AnimalAnimationSystem::AnimationState>>
    ::__push_back_slow_path<AnimalAnimationSystem::AnimationState_const&>
              ((vector<AnimalAnimationSystem::AnimationState,std::__ndk1::allocator<AnimalAnimationSystem::AnimationState>>
                *)this,(AnimationState *)&local_70);
  }
  else {
    *puVar1 = CONCAT44(uStack_6c,local_70);
                    /* try { // try from 007053b0 to 007053b7 has its CatchHandler @ 00705414 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar1 + 1));
    *(undefined2 *)(puVar1 + 4) = local_50;
    *(undefined8 **)(this + 8) = puVar1 + 5;
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


