// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchState
// Entry Point: 0088198c
// Size: 228 bytes
// Signature: undefined __thiscall switchState(DeerBehaviorContext * this, BehaviorStateChangeParams * param_1)


/* DeerBehaviorContext::switchState(BehaviorStateChangeParams const&) */

void __thiscall
DeerBehaviorContext::switchState(DeerBehaviorContext *this,BehaviorStateChangeParams *param_1)

{
  ulong uVar1;
  int iVar2;
  TransformGroup *pTVar3;
  
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 008819bc to 008819d7 has its CatchHandler @ 00881a74 */
  if (((uVar1 == 4) &&
      (iVar2 = std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4f22e6), iVar2 == 0)) &&
     (*(SteeringTargetEntityAvoid **)(this + 0x110) != (SteeringTargetEntityAvoid *)0x0)) {
    pTVar3 = *(TransformGroup **)(param_1 + 0x18);
    *(TransformGroup **)(this + 0x120) = pTVar3;
    SteeringTargetEntityAvoid::reset(*(SteeringTargetEntityAvoid **)(this + 0x110),pTVar3,60.0,10.0)
    ;
    return;
  }
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 008819f8 to 00881a13 has its CatchHandler @ 00881a70 */
  if ((uVar1 == 6) &&
     (iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x4d1ad8), iVar2 == 0)) {
    SteeringTargetPosition::reset
              (*(SteeringTargetPosition **)(this + 0x118),(Vector3 *)(param_1 + 0x30));
    StateMachine::setState
              ((StateMachine *)(this + 8),*(State **)(this + 0x100),(StateTransition *)0x0);
    return;
  }
  return;
}


