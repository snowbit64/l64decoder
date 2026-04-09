// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bb918
// Entry Point: 007bb918
// Size: 260 bytes
// Signature: undefined FUN_007bb918(void)


void FUN_007bb918(AnimalCompanionManager *param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
                    /* try { // try from 007bb954 to 007bb963 has its CatchHandler @ 007bba20 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_a8);
  fVar5 = *param_2;
  fVar8 = param_2[4];
  fVar6 = param_2[8];
  fVar7 = param_2[0xc];
                    /* try { // try from 007bb974 to 007bb97b has its CatchHandler @ 007bba1c */
  uVar2 = AnimalCompanionManager::getNumAnimals();
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
                    /* try { // try from 007bb998 to 007bb9cb has its CatchHandler @ 007bba24 */
      uVar4 = MathUtil::getRandomMinMax(fVar5 - fVar7,fVar5 + fVar7);
      local_70 = MathUtil::getRandomMinMax(fVar6 - fVar7,fVar6 + fVar7);
      local_78 = uVar4;
      fStack_74 = fVar8;
      AnimalCompanionManager::changeBehaviorState
                (param_1,uVar3,(BehaviorStateChangeParams *)&local_a8);
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


