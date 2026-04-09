// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00763594
// Size: 208 bytes
// Signature: undefined __thiscall initialize(DensityMapFilterLua * this, DensityMapEntity * param_1, uint param_2, uint param_3, uint param_4)


/* DensityMapFilterLua::initialize(DensityMapEntity*, unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityMapFilterLua::initialize
          (DensityMapFilterLua *this,DensityMapEntity *param_1,uint param_2,uint param_3,
          uint param_4)

{
  IDensityPixelSource *this_00;
  long lVar1;
  long lVar2;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  uStack_3c = param_2;
  reportAndFixProblems
            (*(DensityMap **)(param_1 + 0x20),&uStack_3c,&local_40,param_4,"DensityMapFilter");
  if (*(IDensityPixelSource **)(this + 8) != (IDensityPixelSource *)0x0) {
    IDensityPixelSource::removeDeletedListener
              (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  this[0x28] = (DensityMapFilterLua)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = 2;
  this_00 = (IDensityPixelSource *)0x0;
  if (lVar2 != 0) {
    this_00 = (IDensityPixelSource *)(lVar2 + 0x58);
  }
  *(undefined8 *)(this + 0x20) = 0x7fffffff00000000;
  *(IDensityPixelSource **)(this + 8) = this_00;
  *(uint *)(this + 0x18) = uStack_3c + param_4;
  *(uint *)(this + 0x1c) = local_40;
  IDensityPixelSource::addDeletedListener(this_00,(DeletedListener *)this);
  *(uint *)(this + 0x38) = param_4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


