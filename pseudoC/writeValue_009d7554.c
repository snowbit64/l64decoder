// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeValue
// Entry Point: 009d7554
// Size: 280 bytes
// Signature: undefined __thiscall writeValue(DensityMapModifier * this, uint param_1, uint param_2, uint param_3)


/* DensityMapModifier::writeValue(unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityMapModifier::writeValue(DensityMapModifier *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  
  puVar6 = *(uint **)(this + 0x10);
  if (puVar6 != (uint *)0x0) {
    uVar1 = param_1 & 0x1f | (param_2 & 0x1f) << 5;
    uVar3 = (((param_2 >> 5) << (ulong)(*puVar6 & 0x1f)) + (param_1 >> 5)) * puVar6[0xd];
    lVar7 = (ulong)uVar3 * 8;
    lVar4 = *(long *)(*(long *)(puVar6 + 10) + lVar7);
    uVar5 = (**(code **)(lVar4 + 8))(lVar4,uVar1,0,puVar6[0xf],param_3);
    uVar2 = puVar6[0xd];
    *(undefined8 *)(*(long *)(puVar6 + 10) + lVar7) = uVar5;
    if (1 < uVar2) {
      puVar8 = puVar6 + 0x11;
      uVar9 = 1;
      do {
        lVar7 = (ulong)(uVar3 + (int)uVar9) * 8;
        lVar4 = *(long *)(*(long *)(puVar6 + 10) + lVar7);
        uVar5 = (**(code **)(lVar4 + 8))
                          (lVar4,uVar1,0,*puVar8,param_3 >> (ulong)(puVar8[-1] & 0x1f));
        uVar2 = puVar6[0xd];
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 2;
        *(undefined8 *)(*(long *)(puVar6 + 10) + lVar7) = uVar5;
      } while (uVar9 < uVar2);
    }
    return;
  }
  DensityMapAccessUtil::writeValue
            (*(BitVector **)(this + 0x18),*(uint *)(this + 0x2c),*(uint *)(this + 0x24),param_1,
             param_2,param_3);
  return;
}


