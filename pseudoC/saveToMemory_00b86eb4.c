// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToMemory
// Entry Point: 00b86eb4
// Size: 208 bytes
// Signature: undefined __thiscall saveToMemory(DensityMapSaveHelper * this, DensityMap * param_1)


/* DensityMap::DensityMapSaveHelper::saveToMemory(DensityMap*) */

void __thiscall
DensityMap::DensityMapSaveHelper::saveToMemory(DensityMapSaveHelper *this,DensityMap *param_1)

{
  undefined4 uVar1;
  ChunkedBitSquare *this_00;
  BitVector *pBVar2;
  undefined8 uVar3;
  undefined8 *this_01;
  long lVar4;
  
  this_00 = (ChunkedBitSquare *)(**(code **)(*(long *)param_1 + 0x30))(param_1);
  pBVar2 = (BitVector *)(**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (this_00 == (ChunkedBitSquare *)0x0) {
    if (pBVar2 != (BitVector *)0x0) {
      uVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
      lVar4 = *(long *)param_1;
      *(undefined4 *)(this + 0x70) = uVar1;
      uVar1 = (**(code **)(lVar4 + 0x50))(param_1);
      lVar4 = *(long *)param_1;
      *(undefined4 *)(this + 0x74) = uVar1;
      uVar1 = (**(code **)(lVar4 + 0x58))(param_1);
      *(undefined4 *)(this + 0x78) = uVar1;
      this_01 = (undefined8 *)operator_new(0x10);
      *(undefined8 **)(this + 0x68) = this_01;
      *(undefined4 *)(this_01 + 1) = 0;
      *this_01 = 0;
      BitVector::init((BitVector *)this_01,pBVar2);
      return;
    }
  }
  else {
    uVar3 = ChunkedBitSquare::saveToMem(this_00,(uint *)(this + 0x60),true);
    *(undefined8 *)(this + 0x58) = uVar3;
  }
  return;
}


