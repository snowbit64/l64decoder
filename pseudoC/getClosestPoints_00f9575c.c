// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestPoints
// Entry Point: 00f9575c
// Size: 476 bytes
// Signature: undefined __cdecl getClosestPoints(ClosestPointInput * param_1, Result * param_2, btIDebugDraw * param_3, bool param_4, bool param_5)


/* btBoxBoxDetector::getClosestPoints(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*, bool, bool) */

void btBoxBoxDetector::getClosestPoints
               (ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3,bool param_4,
               bool param_5)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  dContactGeom *in_stack_fffffffffffffec0;
  int in_stack_fffffffffffffec8;
  int iStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  btVector3 abStack_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_98 = *(undefined8 *)param_2;
  local_c8 = *(undefined8 *)(param_2 + 0x40);
  local_90 = *(undefined4 *)(param_2 + 8);
  local_c0 = *(undefined4 *)(param_2 + 0x48);
  local_88 = *(undefined8 *)(param_2 + 0x10);
  local_b8 = *(undefined8 *)(param_2 + 0x50);
  local_80 = *(undefined4 *)(param_2 + 0x18);
  local_b0 = *(undefined4 *)(param_2 + 0x58);
  local_78 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *(undefined8 *)(param_2 + 0x60);
  local_70 = *(undefined4 *)(param_2 + 0x28);
  local_a0 = *(undefined4 *)(param_2 + 0x68);
  plVar2 = *(long **)(param_1 + 8);
  uVar5 = *(undefined8 *)((long)plVar2 + 0x2c);
  fVar6 = *(float *)((long)plVar2 + 0x34);
  fVar3 = (float)(**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5);
  fVar4 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  local_e0 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  local_e0 = local_e0 + fVar6;
  local_dc = 0;
  local_e0 = local_e0 + local_e0;
  plVar2 = *(long **)(param_1 + 0x10);
  fVar3 = fVar3 + (float)uVar5;
  fVar4 = fVar4 + (float)((ulong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)((long)plVar2 + 0x2c);
  fVar6 = *(float *)((long)plVar2 + 0x34);
  local_e8 = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
  fVar3 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  fVar4 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  local_f0 = (float)(**(code **)(*plVar2 + 0x60))(plVar2);
  local_f0 = local_f0 + fVar6;
  local_f0 = local_f0 + local_f0;
  local_ec = 0;
  fVar3 = fVar3 + (float)uVar5;
  fVar4 = fVar4 + (float)((ulong)uVar5 >> 0x20);
  local_f8 = CONCAT44(fVar4 + fVar4,fVar3 + fVar3);
  dBoxBox2((btVector3 *)(param_2 + 0x30),(float *)&local_98,(btVector3 *)&local_e8,
           (btVector3 *)(param_2 + 0x70),(float *)&local_c8,(btVector3 *)&local_f8,abStack_d8,
           &fStack_fc,&iStack_100,4,in_stack_fffffffffffffec0,in_stack_fffffffffffffec8,
           (Result *)param_3);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


