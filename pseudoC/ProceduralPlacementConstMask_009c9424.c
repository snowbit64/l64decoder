// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementConstMask
// Entry Point: 009c9424
// Size: 244 bytes
// Signature: undefined __thiscall ProceduralPlacementConstMask(ProceduralPlacementConstMask * this, float param_1)


/* ProceduralPlacementConstMask::ProceduralPlacementConstMask(float) */

void __thiscall
ProceduralPlacementConstMask::ProceduralPlacementConstMask
          (ProceduralPlacementConstMask *this,float param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort local_70;
  void *local_60;
  ushort local_58;
  void *local_48;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_58 = 0;
  local_70 = 0;
                    /* try { // try from 009c9454 to 009c9463 has its CatchHandler @ 009c9528 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_40,(basic_string *)&local_58,
             (basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(this + 0x50) = 0x80000000800;
  *(float *)(this + 200) = param_1;
  *(undefined ***)this = &PTR__ProceduralPlacementConstMask_00fe1fe8;
                    /* try { // try from 009c94a4 to 009c94ab has its CatchHandler @ 009c9518 */
  pvVar2 = operator_new__(0x1000000);
  puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
  lVar4 = 0x400000;
  *(void **)(this + 0x58) = pvVar2;
  do {
    puVar3[-1] = CONCAT44(param_1,param_1);
    puVar3[-2] = CONCAT44(param_1,param_1);
    puVar3[1] = CONCAT44(param_1,param_1);
    *puVar3 = CONCAT44(param_1,param_1);
    puVar3 = puVar3 + 4;
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


