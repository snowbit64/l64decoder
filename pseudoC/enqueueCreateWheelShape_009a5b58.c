// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueCreateWheelShape
// Entry Point: 009a5b58
// Size: 472 bytes
// Signature: undefined __cdecl enqueueCreateWheelShape(TransformGroup * param_1, Vector3 * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, uint param_13, uint param_14)


/* Bt2ScenegraphPhysicsContext::enqueueCreateWheelShape(TransformGroup*, Vector3&, float, float,
   float, float, float, float, float, float, float, float, unsigned int, unsigned int) */

int Bt2ScenegraphPhysicsContext::enqueueCreateWheelShape
              (TransformGroup *param_1,Vector3 *param_2,float param_3,float param_4,float param_5,
              float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
              float param_12,uint param_13,uint param_14)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int in_w4;
  Vector3 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
  uint local_94;
  int local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if (((param_2 == (Vector3 *)0x0) || (lVar4 = RawTransformGroup::getPhysicsObject(), lVar4 == 0))
     || (uVar1 = *(uint *)(lVar4 + 8), ((uVar1 ^ 0xffffffff) & 0x88) != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009a5cf4 to 009a5cff has its CatchHandler @ 009a5d30 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error (physics): enqueueCreateWheelShape failed, object %s is not dynamic\n"
                       ,*(undefined8 *)(param_2 + 8));
  }
  else if ((uVar1 & 3) != 0) {
    local_c8 = *(undefined8 *)(ulong)param_13;
    local_c0 = *(undefined4 *)((undefined8 *)(ulong)param_13 + 1);
    if (param_3 <= 0.0) {
      param_3 = 1.0;
    }
    local_d0 = 3;
    local_9c = param_11;
    fStack_98 = param_12;
    if (in_w4 == 0) {
      in_w4 = *(int *)(param_1 + 0x180) + 1;
      *(int *)(param_1 + 0x180) = in_w4;
    }
    local_d8 = param_2;
    fStack_bc = param_3;
    local_b8 = param_4;
    fStack_b4 = param_5;
    local_b0 = param_6;
    fStack_ac = param_7;
    local_a8 = param_8;
    local_a4 = param_9;
    fStack_a0 = param_10;
    local_94 = param_14;
    local_90 = in_w4;
    if ((param_1[0x488] == (TransformGroup)0x0) && ((uVar1 & 1) != 0)) {
      createWheelShape((Bt2ScenegraphPhysicsContext *)param_1,(TransformGroup *)param_2,
                       (CreateWheel *)&local_c8);
    }
    else {
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (param_1 + 0x170),(TransformCommand *)&local_d8);
      in_w4 = local_90;
    }
    goto LAB_009a5c94;
  }
  in_w4 = 0;
LAB_009a5c94:
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return in_w4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


