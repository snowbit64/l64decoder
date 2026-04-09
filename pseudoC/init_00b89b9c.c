// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b89b9c
// Size: 196 bytes
// Signature: undefined __thiscall init(DensityMapModifier * this, DensityMap * param_1)


/* DensityMapModifier::init(DensityMap*) */

void __thiscall DensityMapModifier::init(DensityMapModifier *this,DensityMap *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(this + 8) != 0) {
    IDensityPixelSource::removeDeletedListener
              ((IDensityPixelSource *)(*(long *)(this + 8) + 0x58),(DeletedListener *)this);
  }
  lVar3 = *(long *)param_1;
  *(DensityMap **)(this + 8) = param_1;
  uVar1 = (**(code **)(lVar3 + 0x48))(param_1);
  lVar3 = *(long *)param_1;
  *(undefined4 *)(this + 0x24) = uVar1;
  uVar1 = (**(code **)(lVar3 + 0x50))(param_1);
  lVar3 = *(long *)param_1;
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = (**(code **)(lVar3 + 0x60))(param_1);
  lVar3 = *(long *)param_1;
  *(undefined4 *)(this + 0x20) = uVar1;
  uVar1 = (**(code **)(lVar3 + 0x58))(param_1);
  lVar3 = *(long *)param_1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar2 = (**(code **)(lVar3 + 0x30))(param_1);
  lVar3 = *(long *)param_1;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = (**(code **)(lVar3 + 0x38))(param_1);
  *(undefined8 *)(this + 0x18) = uVar2;
  IDensityPixelSource::addDeletedListener
            ((IDensityPixelSource *)(*(long *)(this + 8) + 0x58),(DeletedListener *)this);
  return;
}


