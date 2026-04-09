// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetWheelShapeTireFriction
// Entry Point: 009a6708
// Size: 212 bytes
// Signature: undefined __thiscall enqueueSetWheelShapeTireFriction(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6)


/* Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeTireFriction(TransformGroup*, unsigned int,
   float, float, float, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeTireFriction
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,float param_3,
          float param_4,float param_5,float param_6)

{
  long lVar1;
  long lVar2;
  TransformGroup *local_a8;
  undefined4 local_a0;
  uint local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    lVar2 = RawTransformGroup::getPhysicsObject();
    if ((*(uint *)(lVar2 + 8) & 3) != 0) {
      local_a0 = 5;
      local_a8 = param_1;
      local_98 = param_2;
      local_94 = param_3;
      fStack_90 = param_4;
      local_8c = param_5;
      fStack_88 = param_6;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((*(uint *)(lVar2 + 8) & 1) != 0)) {
        setWheelShapeTireFriction((TransformGroup *)this,(SetWheelTireFriction *)param_1);
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_a8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


