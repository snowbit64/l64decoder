// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawContactPoint
// Entry Point: 009acf2c
// Size: 280 bytes
// Signature: undefined __thiscall drawContactPoint(Bt2DebugDraw * this, btVector3 * param_1, btVector3 * param_2, float param_3, int param_4, btVector3 * param_5)


/* Bt2DebugDraw::drawContactPoint(btVector3 const&, btVector3 const&, float, int, btVector3 const&)
    */

void __thiscall
Bt2DebugDraw::drawContactPoint
          (Bt2DebugDraw *this,btVector3 *param_1,btVector3 *param_2,float param_3,int param_4,
          btVector3 *param_5)

{
  long lVar1;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  local_58 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_3 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)param_2 * param_3 + (float)*(undefined8 *)param_1);
  local_50 = *(float *)(param_2 + 8) * param_3 + *(float *)(param_1 + 8);
  (**(code **)(*(long *)this + 0x20))(this,param_1,&local_58,param_5);
  if (param_3 < 1.0) {
    local_60 = *(float *)(param_5 + 8) * 0.5;
    local_68 = CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) * 0.5,
                        (float)*(undefined8 *)param_5 * 0.5);
    local_78 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                        (float)*(undefined8 *)param_1 + (float)*(undefined8 *)param_2);
    local_70 = *(float *)(param_1 + 8) + *(float *)(param_2 + 8);
    local_5c = 0;
    local_6c = 0;
    (**(code **)(*(long *)this + 0x20))(this,&local_58,&local_78,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


