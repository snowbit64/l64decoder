// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageSystem
// Entry Point: 00a62de8
// Size: 20 bytes
// Signature: undefined __thiscall FoliageSystem(FoliageSystem * this, FoliageSystemDesc * param_1)


/* FoliageSystem::FoliageSystem(FoliageSystemDesc*) */

void __thiscall FoliageSystem::FoliageSystem(FoliageSystem *this,FoliageSystemDesc *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(FoliageSystemDesc **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


