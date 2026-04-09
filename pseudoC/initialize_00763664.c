// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00763664
// Size: 100 bytes
// Signature: undefined __thiscall initialize(DensityMapFilterLua * this, DensityMapModifierLua * param_1)


/* DensityMapFilterLua::initialize(DensityMapModifierLua*) */

void __thiscall
DensityMapFilterLua::initialize(DensityMapFilterLua *this,DensityMapModifierLua *param_1)

{
  IDensityPixelSource *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pIVar1 = *(IDensityPixelSource **)(this + 8);
  if (pIVar1 != (IDensityPixelSource *)0x0) {
    IDensityPixelSource::removeDeletedListener(pIVar1,(DeletedListener *)this);
  }
  uVar2 = *(undefined8 *)(param_1 + 100);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  pIVar1 = *(IDensityPixelSource **)(param_1 + 0x48);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(this + 0x24) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(IDensityPixelSource **)(this + 8) = pIVar1;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  IDensityPixelSource::addDeletedListener
            (*(IDensityPixelSource **)(this + 8),(DeletedListener *)this);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x44);
  return;
}


