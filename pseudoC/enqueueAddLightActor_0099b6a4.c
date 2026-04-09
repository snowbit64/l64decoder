// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddLightActor
// Entry Point: 0099b6a4
// Size: 184 bytes
// Signature: undefined __thiscall enqueueAddLightActor(Bt2ScenegraphPhysicsContext * this, float * param_1, uint param_2, Matrix4x4 * param_3, IActorMoveReport * param_4, int param_5, float param_6, float param_7, uint param_8, bool param_9, uint param_10, float param_11, float param_12, float param_13, ulonglong param_14)


/* Bt2ScenegraphPhysicsContext::enqueueAddLightActor(float*, unsigned int, Matrix4x4 const&,
   IActorMoveReport*, int, float, float, unsigned int, bool, unsigned int, float, float, float,
   unsigned long long) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddLightActor
          (Bt2ScenegraphPhysicsContext *this,float *param_1,uint param_2,Matrix4x4 *param_3,
          IActorMoveReport *param_4,int param_5,float param_6,float param_7,uint param_8,
          bool param_9,uint param_10,float param_11,float param_12,float param_13,ulonglong param_14
          )

{
  long lVar1;
  int local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  float *local_70;
  uint local_68;
  float local_64;
  float local_60;
  uint local_5c;
  undefined local_58;
  uint local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  ulonglong local_40;
  IActorMoveReport *pIStack_38;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_b8 = *(int *)(this + 600) + 1;
  *(int *)(this + 600) = local_b8;
  uStack_ac = *(undefined8 *)(param_3 + 8);
  local_b4 = *(undefined8 *)param_3;
  uStack_9c = *(undefined8 *)(param_3 + 0x18);
  local_a4 = *(undefined8 *)(param_3 + 0x10);
  local_54 = param_10;
  uStack_8c = *(undefined8 *)(param_3 + 0x28);
  local_94 = *(undefined8 *)(param_3 + 0x20);
  uStack_7c = *(undefined8 *)(param_3 + 0x38);
  local_84 = *(undefined8 *)(param_3 + 0x30);
  local_40 = param_14;
  local_70 = param_1;
  local_68 = param_2;
  local_64 = param_7;
  local_60 = param_6;
  local_5c = param_8;
  local_58 = param_9;
  local_50 = param_11;
  fStack_4c = param_12;
  local_48 = param_13;
  pIStack_38 = param_4;
  local_30 = param_5;
  if (this[0x488] != (Bt2ScenegraphPhysicsContext)0x0) {
    FUN_0099b75c(this + 0x278,&local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_b8);
}


