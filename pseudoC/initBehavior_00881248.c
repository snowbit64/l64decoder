// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initBehavior
// Entry Point: 00881248
// Size: 1228 bytes
// Signature: undefined initBehavior(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeerBehaviorContext::initBehavior() */

void DeerBehaviorContext::initBehavior(void)

{
  StateMachine *this;
  long lVar1;
  BehaviorContext *in_x0;
  DeerStateFlee *this_00;
  DeerStateIdle *this_01;
  DeerStateMoveTo *this_02;
  SteeringTargetWander *this_03;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AnimalSteering *this_04;
  AnimalAnimationSystemSource *this_05;
  byte local_60;
  undefined8 local_5f;
  undefined2 local_57;
  undefined local_55;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (DeerStateFlee *)operator_new(0x28);
                    /* try { // try from 0088127c to 00881283 has its CatchHandler @ 00881750 */
  DeerStateFlee::DeerStateFlee(this_00,in_x0);
  *(DeerStateFlee **)(in_x0 + 0xf0) = this_00;
  this_01 = (DeerStateIdle *)operator_new(0x38);
                    /* try { // try from 00881294 to 0088129b has its CatchHandler @ 0088174c */
  DeerStateIdle::DeerStateIdle(this_01,in_x0);
  *(DeerStateIdle **)(in_x0 + 0xf8) = this_01;
  this_02 = (DeerStateMoveTo *)operator_new(0x38);
                    /* try { // try from 008812ac to 008812b3 has its CatchHandler @ 00881748 */
  DeerStateMoveTo::DeerStateMoveTo(this_02,in_x0);
  *(DeerStateMoveTo **)(in_x0 + 0x100) = this_02;
  DeerStateIdle::setPlayerData
            (*(DeerStateIdle **)(in_x0 + 0xf8),*(TransformGroup **)(in_x0 + 0x120),
             *(float *)(in_x0 + 0x130));
  this = (StateMachine *)(in_x0 + 8);
  StateMachine::addState(this,*(State **)(in_x0 + 0xf0));
  StateMachine::addState(this,*(State **)(in_x0 + 0xf8));
  StateMachine::addState(this,*(State **)(in_x0 + 0x100));
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0xf0),*(State **)(in_x0 + 0xf8),(StateTransition *)0x0);
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0xf8),*(State **)(in_x0 + 0xf0),(StateTransition *)0x0);
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0x100),*(State **)(in_x0 + 0xf8),(StateTransition *)0x0);
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0x100),*(State **)(in_x0 + 0xf0),(StateTransition *)0x0);
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0xf0),*(State **)(in_x0 + 0x100),(StateTransition *)0x0);
  StateMachine::addTransition
            (this,*(State **)(in_x0 + 0xf8),*(State **)(in_x0 + 0x100),(StateTransition *)0x0);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),0,"walk",true,false);
  AnimalAnimationSystem::registerState(*(AnimalAnimationSystem **)(in_x0 + 0xa0),1,"run",true,false)
  ;
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),2,"idle",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),3,"eat",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),4,"attention",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),5,"scratch",false,false);
  AnimalAnimationSystem::reload();
  local_5f._4_4_ = local_5f._4_4_ & 0xffffff00;
  this_05 = *(AnimalAnimationSystemSource **)(*(long *)(in_x0 + 0xa0) + 0x288);
  local_60 = 8;
  local_5f = CONCAT44(local_5f._4_4_,0x6b6c6177);
                    /* try { // try from 0088142c to 0088143b has its CatchHandler @ 00881734 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,0,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 6;
  local_5f = CONCAT44(local_5f._4_4_,0x6e7572);
                    /* try { // try from 00881460 to 0088146f has its CatchHandler @ 00881730 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,1,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_55 = 0;
  local_60 = 0x14;
  local_57 = 0x676e;
  local_5f._0_1_ = 's';
  local_5f._1_1_ = 'c';
  local_5f._2_1_ = 'r';
  local_5f._3_1_ = 'a';
  local_5f._4_1_ = 't';
  local_5f._5_1_ = 'c';
  local_5f._6_1_ = 'h';
  local_5f._7_1_ = 'i';
                    /* try { // try from 008814a4 to 008814b3 has its CatchHandler @ 0088172c */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,2,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 0x12;
  local_5f._0_1_ = 'a';
  local_5f._1_1_ = 't';
  local_5f._2_1_ = 't';
  local_5f._3_1_ = 'e';
  local_5f._4_1_ = 'n';
  local_5f._5_1_ = 't';
  local_5f._6_1_ = 'i';
  local_5f._7_1_ = 'o';
  local_57 = 0x6e;
                    /* try { // try from 008814dc to 008814eb has its CatchHandler @ 00881728 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,3,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_60 = 6;
  local_5f = CONCAT44(local_5f._4_4_,0x746165);
                    /* try { // try from 00881510 to 0088151f has its CatchHandler @ 00881724 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,5,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  local_5f._4_4_ = (uint)((ulong)local_5f >> 0x20) & 0xffffff00;
  local_60 = 8;
  local_5f = CONCAT44(local_5f._4_4_,0x656c6469);
                    /* try { // try from 00881548 to 00881557 has its CatchHandler @ 00881720 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_05,4,(basic_string *)&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  AnimalAnimationSystem::reload();
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),0,"walk");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),1,"run");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),2,"scratching");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),3,"attention");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),5,"eat");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),4,"idle");
  this_03 = (SteeringTargetWander *)operator_new(0x40);
                    /* try { // try from 008815f4 to 008815f7 has its CatchHandler @ 00881714 */
  SteeringTargetWander::SteeringTargetWander(this_03);
  *(SteeringTargetWander **)(in_x0 + 0x108) = this_03;
  puVar2 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(in_x0 + 0x110) = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = 0x3f800000;
  *puVar2 = &PTR__SteeringTargetProvider_00fdc820;
  puVar3 = (undefined8 *)operator_new(0x30);
  this_04 = *(AnimalSteering **)(in_x0 + 0xb0);
  *(undefined8 **)(in_x0 + 0x118) = puVar3;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc868;
  AnimalSteering::registerTargetProvider(this_04,0,(SteeringTargetProvider *)puVar2);
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),1,*(SteeringTargetProvider **)(in_x0 + 0x108));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),2,*(SteeringTargetProvider **)(in_x0 + 0x118));
  AnimalSteering::addVelocityThreshold(*(AnimalSteering **)(in_x0 + 0xb0),2.0);
  SteeringTargetWander::reset(*(SteeringTargetWander **)(in_x0 + 0x108),15.0,1.0,2.0);
  SteeringTargetEntityAvoid::reset
            (*(SteeringTargetEntityAvoid **)(in_x0 + 0x110),*(TransformGroup **)(in_x0 + 0x120),60.0
             ,10.0);
  StateMachine::setState(this,*(State **)(in_x0 + 0xf8),(StateTransition *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


