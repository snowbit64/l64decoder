// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initBehavior
// Entry Point: 00884e14
// Size: 2368 bytes
// Signature: undefined initBehavior(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogBehaviorContext::initBehavior() */

void DogBehaviorContext::initBehavior(void)

{
  StateMachine *this;
  long lVar1;
  BehaviorContext *in_x0;
  SteeringTargetWander *pSVar2;
  undefined8 *puVar3;
  DogStateFeed *this_00;
  DogStateFetch *this_01;
  DogStateFollow *this_02;
  DogStateGoToDoghouse *this_03;
  DogStatePet *this_04;
  DogStateRest *this_05;
  DogStateRideVehicle *this_06;
  DogStateSeekAttention *this_07;
  DogStateSleep *this_08;
  DogStateWander *this_09;
  DogTransition *pDVar4;
  AnimalAnimationSystemSource *this_10;
  State *pSVar5;
  State *pSVar6;
  byte local_80;
  undefined4 local_7f;
  undefined local_7b;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),0,"walk",true,false);
  AnimalAnimationSystem::registerState(*(AnimalAnimationSystem **)(in_x0 + 0xa0),1,"run",true,false)
  ;
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),2,"swim",true,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),3,"sit",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),4,"sniff",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),5,"eat",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),6,"happy",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),7,"yawn",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),8,"sleep",false,false);
  AnimalAnimationSystem::registerState
            (*(AnimalAnimationSystem **)(in_x0 + 0xa0),9,"roll",false,false);
  local_80 = 8;
  local_7b = 0;
  this_10 = *(AnimalAnimationSystemSource **)(*(long *)(in_x0 + 0xa0) + 0x288);
  local_7f = 0x6d697773;
                    /* try { // try from 00884f7c to 00884f8b has its CatchHandler @ 008857f8 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_10,6,(basic_string *)&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  local_7b = 0;
  local_80 = 8;
  local_7f = 0x6b6c6177;
                    /* try { // try from 00884fb4 to 00884fc3 has its CatchHandler @ 008857f4 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_10,7,(basic_string *)&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  local_80 = 6;
  local_7f = 0x6e7572;
                    /* try { // try from 00884fe8 to 00884ff7 has its CatchHandler @ 008857f0 */
  AnimalAnimationSystemSource::registerSoundTriggerId(this_10,8,(basic_string *)&local_80);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  AnimalAnimationSystem::reload();
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),0,"bark");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),1,"eat");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),2,"retrieve");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),3,"roll");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),4,"sit");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),5,"sniff");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),6,"swim");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),7,"walk");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),8,"run");
  AnimalSoundSystem::registerSoundId(*(AnimalSoundSystem **)(in_x0 + 0xa8),9,"yawn");
  pSVar2 = (SteeringTargetWander *)operator_new(0x40);
                    /* try { // try from 008850e4 to 008850e7 has its CatchHandler @ 008857dc */
  SteeringTargetWander::SteeringTargetWander(pSVar2);
  *(SteeringTargetWander **)(in_x0 + 0x120) = pSVar2;
  puVar3 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(in_x0 + 0x128) = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc900;
  puVar3 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(in_x0 + 0x130) = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc900;
  puVar3 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(in_x0 + 0x138) = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc900;
  puVar3 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(in_x0 + 0x140) = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc900;
  puVar3 = (undefined8 *)operator_new(0x40);
  pSVar2 = *(SteeringTargetWander **)(in_x0 + 0x120);
  *(undefined8 **)(in_x0 + 0x148) = puVar3;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x3f800000;
  *puVar3 = &PTR__SteeringTargetProvider_00fdc900;
  SteeringTargetWander::reset(pSVar2,15.0,1.0,2.0);
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),0,*(SteeringTargetProvider **)(in_x0 + 0x128));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),1,*(SteeringTargetProvider **)(in_x0 + 0x130));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),2,*(SteeringTargetProvider **)(in_x0 + 0x138));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),3,*(SteeringTargetProvider **)(in_x0 + 0x140));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),4,*(SteeringTargetProvider **)(in_x0 + 0x148));
  AnimalSteering::registerTargetProvider
            (*(AnimalSteering **)(in_x0 + 0xb0),5,*(SteeringTargetProvider **)(in_x0 + 0x120));
  AnimalSteering::addVelocityThreshold(*(AnimalSteering **)(in_x0 + 0xb0),2.0);
  this_00 = (DogStateFeed *)operator_new(0x28);
                    /* try { // try from 00885254 to 0088525b has its CatchHandler @ 008857d8 */
  DogStateFeed::DogStateFeed(this_00,in_x0);
  *(DogStateFeed **)(in_x0 + 0x150) = this_00;
  this_01 = (DogStateFetch *)operator_new(0x28);
                    /* try { // try from 0088526c to 00885273 has its CatchHandler @ 008857d4 */
  DogStateFetch::DogStateFetch(this_01,in_x0);
  *(DogStateFetch **)(in_x0 + 0x158) = this_01;
  this_02 = (DogStateFollow *)operator_new(0x28);
                    /* try { // try from 00885284 to 0088528b has its CatchHandler @ 008857d0 */
  DogStateFollow::DogStateFollow(this_02,in_x0);
  *(DogStateFollow **)(in_x0 + 0x160) = this_02;
  this_03 = (DogStateGoToDoghouse *)operator_new(0x30);
                    /* try { // try from 0088529c to 008852a3 has its CatchHandler @ 008857cc */
  DogStateGoToDoghouse::DogStateGoToDoghouse(this_03,in_x0);
  *(DogStateGoToDoghouse **)(in_x0 + 0x168) = this_03;
  this_04 = (DogStatePet *)operator_new(0x28);
                    /* try { // try from 008852b4 to 008852bb has its CatchHandler @ 008857c8 */
  DogStatePet::DogStatePet(this_04,in_x0);
  *(DogStatePet **)(in_x0 + 0x170) = this_04;
  this_05 = (DogStateRest *)operator_new(0x28);
                    /* try { // try from 008852cc to 008852d3 has its CatchHandler @ 008857c4 */
  DogStateRest::DogStateRest(this_05,in_x0);
  *(DogStateRest **)(in_x0 + 0x178) = this_05;
  this_06 = (DogStateRideVehicle *)operator_new(0x18);
                    /* try { // try from 008852e4 to 008852eb has its CatchHandler @ 008857c0 */
  DogStateRideVehicle::DogStateRideVehicle(this_06,in_x0);
  *(DogStateRideVehicle **)(in_x0 + 0x180) = this_06;
  this_07 = (DogStateSeekAttention *)operator_new(0x28);
                    /* try { // try from 008852fc to 00885303 has its CatchHandler @ 008857b4 */
  DogStateSeekAttention::DogStateSeekAttention(this_07,in_x0);
  this_08 = (DogStateSleep *)operator_new(0x28);
                    /* try { // try from 00885310 to 00885317 has its CatchHandler @ 008857a8 */
  DogStateSleep::DogStateSleep(this_08,in_x0);
  this_09 = (DogStateWander *)operator_new(0x28);
                    /* try { // try from 00885324 to 0088532b has its CatchHandler @ 008857a4 */
  DogStateWander::DogStateWander(this_09,in_x0);
  this = (StateMachine *)(in_x0 + 8);
  StateMachine::addState(this,*(State **)(in_x0 + 0x150));
  StateMachine::addState(this,*(State **)(in_x0 + 0x158));
  StateMachine::addState(this,*(State **)(in_x0 + 0x160));
  StateMachine::addState(this,*(State **)(in_x0 + 0x168));
  StateMachine::addState(this,*(State **)(in_x0 + 0x170));
  StateMachine::addState(this,*(State **)(in_x0 + 0x178));
  StateMachine::addState(this,*(State **)(in_x0 + 0x180));
  StateMachine::addState(this,(State *)this_07);
  StateMachine::addState(this,(State *)this_08);
  StateMachine::addState(this,(State *)this_09);
  pSVar5 = *(State **)(in_x0 + 0x168);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008853b8 to 008853cb has its CatchHandler @ 00885798 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_09,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x160);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008853f0 to 00885403 has its CatchHandler @ 00885794 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_09,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x158);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 00885428 to 0088543b has its CatchHandler @ 00885790 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_07,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x170);
  pSVar6 = *(State **)(in_x0 + 0x160);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 00885464 to 00885477 has its CatchHandler @ 00885784 */
  DogTransition::DogTransition(pDVar4,in_x0,5,0.0,false);
  StateMachine::addTransition(this,pSVar5,pSVar6,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x170);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 0088549c to 008854af has its CatchHandler @ 00885780 */
  DogTransition::DogTransition(pDVar4,in_x0,3,20.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_07,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x170);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008854d4 to 008854e7 has its CatchHandler @ 0088577c */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_09,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x150);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 0088550c to 0088551f has its CatchHandler @ 00885778 */
  DogTransition::DogTransition(pDVar4,in_x0,1,20.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_07,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x150);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 00885544 to 00885557 has its CatchHandler @ 00885774 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_09,(StateTransition *)pDVar4);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 00885578 to 0088558b has its CatchHandler @ 00885770 */
  DogTransition::DogTransition(pDVar4,in_x0,4,0.0,false);
  StateMachine::addTransition(this,(State *)this_09,(State *)this_08,(StateTransition *)pDVar4);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008855ac to 008855bf has its CatchHandler @ 0088576c */
  DogTransition::DogTransition(pDVar4,in_x0,1,20.0,false);
  StateMachine::addTransition(this,(State *)this_09,(State *)this_07,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x168);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008855e4 to 008855f7 has its CatchHandler @ 00885768 */
  DogTransition::DogTransition(pDVar4,in_x0,2,10.0,true);
  StateMachine::addTransition(this,(State *)this_09,pSVar5,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x178);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 0088561c to 0088562f has its CatchHandler @ 00885764 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,(State *)this_09,pSVar5,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x178);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 00885654 to 00885667 has its CatchHandler @ 00885760 */
  DogTransition::DogTransition(pDVar4,in_x0,4,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_08,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x178);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 0088568c to 0088569f has its CatchHandler @ 0088575c */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,pSVar5,(State *)this_09,(StateTransition *)pDVar4);
  pSVar5 = *(State **)(in_x0 + 0x178);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008856c4 to 008856d7 has its CatchHandler @ 00885758 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  StateMachine::addTransition(this,(State *)this_08,pSVar5,(StateTransition *)pDVar4);
  pDVar4 = (DogTransition *)operator_new(0x38);
                    /* try { // try from 008856f8 to 0088570b has its CatchHandler @ 00885754 */
  DogTransition::DogTransition(pDVar4,in_x0,6,0.0,false);
  *(DogTransition **)(in_x0 + 0x188) = pDVar4;
  StateMachine::setState(this,(State *)this_09,(StateTransition *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


