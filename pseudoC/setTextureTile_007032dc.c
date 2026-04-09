// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTextureTile
// Entry Point: 007032dc
// Size: 216 bytes
// Signature: undefined __thiscall setTextureTile(Animal * this, AnimalSource * param_1, uint param_2, uint param_3)


/* Animal::setTextureTile(Animal::AnimalSource&, unsigned int, unsigned int) */

void __thiscall Animal::setTextureTile(Animal *this,AnimalSource *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_1[0x3e40] != (AnimalSource)0x0) &&
     (lVar2 = *(long *)(this + 0x6b0), *(long *)(this + 0x6b8) != lVar2)) {
    uVar7 = NEON_fmov(0x3f800000,4);
    uVar3 = 0;
    uVar4 = NEON_ucvtf(CONCAT44(param_3,param_2),4);
    do {
      uVar5 = NEON_ucvtf(*(undefined8 *)(param_1 + 0x3e4c),4);
      fVar6 = (float)((ulong)uVar5 >> 0x20);
      local_60 = CONCAT44((float)((ulong)uVar7 >> 0x20) / fVar6,(float)uVar7 / (float)uVar5);
      uStack_58 = CONCAT44((float)((ulong)uVar4 >> 0x20) / fVar6,(float)uVar4 / (float)uVar5);
      GsShape::setCustomShaderParameter
                (*(GsShape **)(lVar2 + uVar3 * 8),"atlasInvSizeAndOffsetUV",(float *)&local_60);
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(this + 0x6b0);
    } while (uVar3 < (ulong)(*(long *)(this + 0x6b8) - lVar2 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


