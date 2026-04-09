// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SharedData
// Entry Point: 00729c44
// Size: 260 bytes
// Signature: undefined __thiscall SharedData(SharedData * this, uint param_1, float param_2, bool param_3)


/* VehicleNavigationMapGenerator::SharedData::SharedData(unsigned int, float, bool) */

void __thiscall
VehicleNavigationMapGenerator::SharedData::SharedData
          (SharedData *this,uint param_1,float param_2,bool param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__SharedData_00fda7d0;
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
                    /* try { // try from 00729c90 to 00729c9b has its CatchHandler @ 00729d58 */
  VehicleNavigationMap::VehicleNavigationMap
            ((VehicleNavigationMap *)(this + 0x10),param_1,param_2,(vector *)&local_60,param_3);
  pvVar3 = local_60;
  pvVar2 = local_58;
  if (local_60 != (void *)0x0) {
    while (pvVar2 != pvVar3) {
      pvVar4 = *(void **)((long)pvVar2 + -0x18);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x10) = pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = *(void **)((long)pvVar2 + -0x30);
      if (pvVar4 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x28) = pvVar4;
        operator_delete(pvVar4);
      }
      plVar5 = *(long **)((long)pvVar2 + -0x50);
      pvVar4 = (void *)((long)pvVar2 + -0x50);
      *(undefined8 *)((long)pvVar2 + -0x50) = 0;
      pvVar2 = pvVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    local_58 = pvVar3;
    operator_delete(local_60);
  }
                    /* try { // try from 00729d14 to 00729d1b has its CatchHandler @ 00729d48 */
  Mutex::Mutex((Mutex *)(this + 0xf0),true);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


