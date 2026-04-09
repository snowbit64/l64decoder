// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfoLayerSize
// Entry Point: 008eb788
// Size: 176 bytes
// Signature: undefined __thiscall getInfoLayerSize(BaseTerrain * this, uint param_1, uint * param_2, uint * param_3, uint * param_4)


/* BaseTerrain::getInfoLayerSize(unsigned int, unsigned int&, unsigned int&, unsigned int&) const */

void __thiscall
BaseTerrain::getInfoLayerSize
          (BaseTerrain *this,uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = (ulong)param_1;
  uVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(this + 0x50) + uVar2 * 0x58 + 0x38) + 0x20) +
                      0x48))();
  lVar3 = *(long *)(this + 0x50);
  *param_2 = uVar1;
  plVar4 = *(long **)(*(long *)(lVar3 + uVar2 * 0x58 + 0x38) + 0x20);
  uVar1 = (**(code **)(*plVar4 + 0x50))(plVar4);
  lVar3 = *(long *)(this + 0x50);
  *param_3 = uVar1;
  plVar4 = *(long **)(*(long *)(lVar3 + uVar2 * 0x58 + 0x38) + 0x20);
  uVar1 = (**(code **)(*plVar4 + 0x58))(plVar4);
  *param_4 = uVar1;
  return;
}


