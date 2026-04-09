// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueControlVehicle
// Entry Point: 009a6188
// Size: 424 bytes
// Signature: undefined __cdecl enqueueControlVehicle(TransformGroup * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)


/* Bt2ScenegraphPhysicsContext::enqueueControlVehicle(TransformGroup*, float, float, float, float,
   float, float, float, float, float, float) */

void Bt2ScenegraphPhysicsContext::enqueueControlVehicle
               (TransformGroup *param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,float param_9,float param_10,float param_11
               )

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long in_x1;
  ulong uVar4;
  TransformGroup *pTVar5;
  TransformGroup *pTVar6;
  TransformCommand local_c8 [8];
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((((in_x1 != 0) && (lVar3 = RawTransformGroup::getPhysicsObject(), lVar3 != 0)) &&
      (uVar1 = *(uint *)(lVar3 + 8), ((uVar1 ^ 0xffffffff) & 0x88) == 0)) && ((uVar1 & 3) != 0)) {
    local_c0 = 0xe;
    fStack_98 = param_10;
    local_94 = param_11;
    local_b8 = param_2;
    fStack_b4 = param_3;
    local_b0 = param_4;
    fStack_ac = param_5;
    local_a8 = param_6;
    local_a4 = param_7;
    fStack_a0 = param_8;
    local_9c = param_9;
    if ((param_1[0x488] == (TransformGroup)0x0) && ((uVar1 & 1) != 0)) {
      lVar3 = RawTransformGroup::getPhysicsObject();
      uVar4 = *(ulong *)(lVar3 + 0x30);
      if (((uVar4 != 0) && ((*(byte *)(uVar4 + 0xe0) & 3) == 0)) &&
         (pTVar6 = *(TransformGroup **)(param_1 + 400), pTVar6 != (TransformGroup *)0x0)) {
        pTVar5 = param_1 + 400;
        do {
          if (*(ulong *)(pTVar6 + 0x20) >= uVar4) {
            pTVar5 = pTVar6;
          }
          pTVar6 = *(TransformGroup **)(pTVar6 + (ulong)(*(ulong *)(pTVar6 + 0x20) < uVar4) * 8);
        } while (pTVar6 != (TransformGroup *)0x0);
        if ((pTVar5 != param_1 + 400) && (*(ulong *)(pTVar5 + 0x20) <= uVar4)) {
          lVar3 = *(long *)(pTVar5 + 0x28);
          if (0.0001 <= ABS(param_2)) {
            *(float *)(lVar3 + 0xb4) = param_2;
            Bt2RaycastVehicle::activateAllBodies();
          }
          else {
            *(undefined4 *)(lVar3 + 0xb4) = 0;
          }
          *(float *)(lVar3 + 0xb8) = param_3;
          *(float *)(lVar3 + 0xbc) = param_4;
          *(float *)(lVar3 + 0xf8) = param_5;
          *(float *)(lVar3 + 0xfc) = param_6;
          *(float *)(lVar3 + 0xa4) = param_7;
          *(float *)(lVar3 + 0x11c) = param_8;
          *(float *)(lVar3 + 0x120) = param_9;
          *(float *)(lVar3 + 0xc0) = param_10;
          *(float *)(lVar3 + 0xc4) = param_11;
        }
      }
    }
    else {
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (param_1 + 0x170),local_c8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


