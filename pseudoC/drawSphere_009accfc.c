// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawSphere
// Entry Point: 009accfc
// Size: 312 bytes
// Signature: undefined __thiscall drawSphere(btIDebugDraw * this, float param_1, btTransform * param_2, btVector3 * param_3)


/* btIDebugDraw::drawSphere(float, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawSphere(btIDebugDraw *this,float param_1,btTransform *param_2,btVector3 *param_3)

{
  long lVar1;
  undefined8 local_90;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  local_60 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(float *)param_2;
  local_70 = *(undefined4 *)(param_2 + 4);
  fStack_7c = *(float *)(param_2 + 0x10);
  uStack_6c = *(undefined4 *)(param_2 + 0x14);
  local_64 = 0;
  local_78 = *(float *)(param_2 + 0x20);
  local_68 = *(undefined4 *)(param_2 + 0x24);
  local_74 = 0;
  (**(code **)(*(long *)this + 0x90))
            (param_1,0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,0x41f00000,this,&local_60,&local_70
             ,&local_80,param_3,0);
  local_90 = CONCAT44(-fStack_7c,-local_80);
  local_88 = -local_78;
  local_84 = 0;
  (**(code **)(*(long *)this + 0x90))
            (param_1,0xbfc90fdb,0x3fc90fdb,0xbfc90fdb,0x3fc90fdb,0x41f00000,this,&local_60,&local_70
             ,&local_90,param_3,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


