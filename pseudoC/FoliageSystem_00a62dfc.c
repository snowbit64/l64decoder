// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageSystem
// Entry Point: 00a62dfc
// Size: 300 bytes
// Signature: undefined __thiscall ~FoliageSystem(FoliageSystem * this)


/* FoliageSystem::~FoliageSystem() */

void __thiscall FoliageSystem::~FoliageSystem(FoliageSystem *this)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void **ppvVar4;
  FoliageSystemDesc *this_00;
  void *pvVar5;
  void *pvVar6;
  void *local_68;
  void *local_60;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppvVar4 = (void **)(this + 0x10);
  pvVar5 = *ppvVar4;
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar5 != pvVar2) {
    do {
                    /* try { // try from 00a62e60 to 00a62e6b has its CatchHandler @ 00a62f28 */
      std::__ndk1::vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>>::vector
                ((vector<FoliageSystem::Layer,std::__ndk1::allocator<FoliageSystem::Layer>> *)
                 &local_68,(vector *)((long)pvVar5 + 0x10));
      local_50 = *(long **)((long)pvVar5 + 0x28);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      if (local_68 != (void *)0x0) {
        local_60 = local_68;
        operator_delete(local_68);
      }
      pvVar5 = (void *)((long)pvVar5 + 0x30);
    } while (pvVar5 != pvVar2);
  }
  this_00 = *(FoliageSystemDesc **)this;
  if (this_00 != (FoliageSystemDesc *)0x0) {
    FoliageSystemDesc::~FoliageSystemDesc(this_00);
    operator_delete(this_00);
  }
  pvVar5 = *ppvVar4;
  if (pvVar5 != (void *)0x0) {
    pvVar2 = pvVar5;
    pvVar3 = *(void **)(this + 0x18);
    if (*(void **)(this + 0x18) != pvVar5) {
      do {
        pvVar2 = *(void **)((long)pvVar3 + -0x20);
        pvVar6 = (void *)((long)pvVar3 + -0x30);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x18) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar3 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar2 = *ppvVar4;
    }
    *(void **)(this + 0x18) = pvVar5;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


